//----------------------------------------------------------------------
// https://blog.csdn.net/cpongo11/article/details/100702535
// 注意它与该blog的异同
// 绘制包含两个过程：1、对shader进行编译然后放到一个容器里（ShaderMap）
// 				   2. 绘制的时候从容器里把对应的shader取出来
//----------------------------------------------------------------------

#include "SimplePixelShader.h"
#include "Classes/Engine/TextureRenderTarget2D.h"
#include "Classes/Engine/World.h"
#include "GlobalShader.h"
#include "PipelineStateCache.h"
#include "RHIStaticStates.h"
#include "SceneUtils.h"
#include "SceneInterface.h"
#include "ShaderParameterUtils.h"
#include "Logging/MessageLog.h"
#include "Internationalization/Internationalization.h"
#include "Containers/DynamicRHIResourceArray.h"
#include "AssetRegistryModule.h"
#include "Engine/Texture2D.h"
#include "RenderCore/Public/Shader.h"
#include "Core/Public/HAL/FileManager.h"
#include "Core/Public/Misc/FileHelper.h"
//#include "Renderer/Private/DeferredShadingRenderer.h"
//#include "Renderer/Private/PostProcess/SceneRenderTargets.h"

// 自定义命名空间
#define LOCTEXT_NAMESPACE "SimplePixelShader"  

BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FSimpleUniformStructParameters, )
SHADER_PARAMETER(FVector4, Color1)
SHADER_PARAMETER(FVector4, Color2)
SHADER_PARAMETER(FVector4, Color3)
SHADER_PARAMETER(FVector4, Color4)
SHADER_PARAMETER(uint32, ColorIndex)
END_GLOBAL_SHADER_PARAMETER_STRUCT()

IMPLEMENT_GLOBAL_SHADER_PARAMETER_STRUCT(FSimpleUniformStructParameters, "SimpleUniformStruct");

// 顶点数据的结构体
struct FTextureVertex{
	FVector4 Position;
	FVector2D UV;
};

class FRectangleVertexBuffer : public FVertexBuffer
{
public:
	/** Initialize the RHI for this rendering resource */
	void InitRHI() override 
	{
		TResourceArray<FTextureVertex, VERTEXBUFFER_ALIGNMENT> Vertices;
		Vertices.SetNumUninitialized(6);
	
		Vertices[0].Position = FVector4(1, 1, 0, 1);
		Vertices[0].UV = FVector2D(1, 1);

		Vertices[1].Position = FVector4(-1, 1, 0, 1);
		Vertices[1].UV = FVector2D(0, 1);

		Vertices[2].Position = FVector4(1, -1, 0, 1);
		Vertices[2].UV = FVector2D(1, 0);

		Vertices[3].Position = FVector4(-1, -1, 0, 1);
		Vertices[3].UV = FVector2D(0, 0);

		//The final two vertices are used for the triangle optimization (a single triangle spans the entire viewport )
		Vertices[4].Position = FVector4(-1, 1, 0, 1);
		Vertices[4].UV = FVector2D(-1, 1);

		Vertices[5].Position = FVector4(1, -1, 0, 1);
		Vertices[5].UV = FVector2D(1, -1);

		// Create vertex buffer. Fill buffer with initial data upon creation
		FRHIResourceCreateInfo CreateInfo(&Vertices);
		VertexBufferRHI = RHICreateVertexBuffer(Vertices.GetResourceDataSize(), BUF_Static, CreateInfo);
	}
};

class FRectangleIndexBuffer : public FIndexBuffer
{
public:
	/** Initialize the RHI for this rendering resource */
	void InitRHI() override 
	{
		// Indices 0 - 5 are used for rendering a quad. Indices 6 - 8 are used for triangle optimization.
		const uint16 Indices[] = { 0, 1, 2, 2, 1, 3, 0, 4, 5 };

		TResourceArray<uint16, INDEXBUFFER_ALIGNMENT> IndexBuffer;
		uint32 NumIndices = ARRAY_COUNT(Indices);
		IndexBuffer.AddUninitialized(NumIndices);
		FMemory::Memcpy(IndexBuffer.GetData(), Indices, NumIndices * sizeof(uint16));

		// Create index buffer. Fill buffer with initial data upon creation
		FRHIResourceCreateInfo CreateInfo(&IndexBuffer);
		IndexBufferRHI = RHICreateIndexBuffer(sizeof(uint16), IndexBuffer.GetResourceDataSize(), BUF_Static, CreateInfo);
	}
};

TGlobalResource<FRectangleVertexBuffer> GRectangleVertexBuffer;
TGlobalResource<FRectangleIndexBuffer> GRectangleIndexBuffer;

// 顶点输入布局类，在InitRHI中进行顶点输入布局的初始化
class FTextureVertexDeclaration : public FRenderResource
{
public:

	FVertexDeclarationRHIRef VertexDeclarationRHI;

	// 读取.usf中的顶点数据
	virtual void InitRHI() override
	{
		FVertexDeclarationElementList Elements;
		uint32 Stride = sizeof(FTextureVertex);
		Elements.Add(FVertexElement(0, STRUCT_OFFSET(FTextureVertex, Position), VET_Float2, 0, Stride));
		Elements.Add(FVertexElement(0, STRUCT_OFFSET(FTextureVertex, UV), VET_Float2, 1, Stride));
		VertexDeclarationRHI = RHICreateVertexDeclaration(Elements);
	}

	// 释放资源
	virtual void ReleaseRHI() override
	{
		VertexDeclarationRHI.SafeRelease();
	}
};

// Shader C++类是在CPU端管理控制shader的
//template<uint32 SampleLevel>
//static const uint32 SampleLevel = 2;
class FSimplePixelShader : public FGlobalShader
{
public:

	// 用于定义是否在指定的平台要编译这个材质
	static bool ShouldCache(EShaderPlatform Platform)
	{
		return true;
	}
	// 确定Shader功能支持情况
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}

	// 添usf中的宏，用于在特定的平台上添加自己的定义
	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
        // 原代码参数SampleLevel由1代替
		OutEnvironment.SetDefine(TEXT("TEST_MICRO"), 1); 
    }

    FSimplePixelShader(){}
	// 构造函数，用于绑定Shader中的变量
    FSimplePixelShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
		// 用bind方法把shader的私有成员变量SimpleColorVal和shader(.usf)中的变量float4 SimpleColor做了绑定
		 SimpleColorVal.Bind(Initializer.ParameterMap, TEXT("SimpleColor")); 
		 TextureVal.Bind(Initializer.ParameterMap, TEXT("TextureVal"));
		 TextureSampler.Bind(Initializer.ParameterMap, TEXT("TextureSampler"));
		 OutputSurface.Bind(Initializer.ParameterMap, TEXT("OutputSurface"));
	}

	template<typename TShaderRHIParamRef>
	// 自定义的Shader变量设置函数，形参和函数名可以随意设置
    void SetParameters(FRHICommandListImmediate& RHICmdList,const TShaderRHIParamRef ShaderRHI,	const FLinearColor &MyColor,const FTextureRHIParamRef& TextureRHI)
    {
		// 将颜色信息由变量SimpleColorVal传到Shader里
        SetShaderValue(RHICmdList, ShaderRHI, SimpleColorVal, MyColor); 
		SetTextureParameter(RHICmdList, ShaderRHI, TextureVal, TextureSampler,TStaticSamplerState<SF_Trilinear,AM_Clamp,AM_Clamp,AM_Clamp>::GetRHI(),TextureRHI);
    }

	// 序列化虚函数，使得UE4从磁盘读取Shader文件的二进制数据
    virtual bool Serialize(FArchive& Ar) override
	{
		bool bShaderHasOutdatedParameters = FGlobalShader::Serialize(Ar);
		Ar << SimpleColorVal<< TextureVal<< TextureSampler;
		return bShaderHasOutdatedParameters;
	}
private:
	// 颜色数据
    FShaderParameter SimpleColorVal;
	// 纹理数据
	FShaderResourceParameter TextureVal;
	// 纹理取样
	FShaderResourceParameter TextureSampler;
	// 渲染资源
	FShaderResourceParameter OutputSurface;
};

// 顶点着色器
// 声明并向Ue4注册了Pixel与Vertex类型的GlobalShader
// 这里的PixelShader与VertexShader也可以直接继承GlobalShader
class FSimplePixelShaderVS : public FSimplePixelShader
{
	// 声明Shader宏，将shader加入到全局的shadermap中，进而使UE4识别和编译Shader
	DECLARE_SHADER_TYPE(FSimplePixelShaderVS, Global);
public:
    FSimplePixelShaderVS(){}

  	FSimplePixelShaderVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FSimplePixelShader(Initializer)
	{
	}
};

// 像素着色器
class FSimplePixelShaderPS : public FSimplePixelShader
{
	// 声明Shader宏
	DECLARE_SHADER_TYPE(FSimplePixelShaderPS, Global);
public:
    FSimplePixelShaderPS(){}

  	FSimplePixelShaderPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FSimplePixelShader(Initializer)
	{
	}
};

class FSimpleComputeShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FSimpleComputeShader, Global);

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
		OutEnvironment.CompilerFlags.Add(CFLAG_StandardOptimization);
	}

public:
	FSimpleComputeShader() {}
	FSimpleComputeShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
		// 绑定CS的私有变量FShaderResourceParameter OutTexture和.usf中的RWTexture2D OutTexture
		OutTexture.Bind(Initializer.ParameterMap, TEXT("OutTexture"));
	}

	virtual bool Serialize(FArchive& Ar) override
	{
		bool bShaderHasOutdatedParameters = FGlobalShader::Serialize(Ar);
		Ar << OutTexture;
		return bShaderHasOutdatedParameters;
	}

	// 参数规则和定义，参考“UE4 RHI与Render模块简解”
	void SetParameters(FRHICommandList& RHICmdList, FUnorderedAccessViewRHIParamRef InOutUAV, FSimpleUniformStruct UniformStruct)
	{
		FComputeShaderRHIParamRef ComputeShaderRHI = GetComputeShader();
		//		SetShaderValue(RHICmdList, ComputeShaderRHI, TargetHeight, InTargetHeight);
		//		SetTextureParameter(RHICmdList, ComputeShaderRHI, SrcTexture, InSrcTexture);
		if (OutTexture.IsBound())
			RHICmdList.SetUAVParameter(ComputeShaderRHI, OutTexture.GetBaseIndex(), InOutUAV);

		// 注意这里是shader使用人工指定.usf的color，如果要使用CS计算的color
		// 那么，以下代码等式两边互换即可，即.usf的值由CS计算得到
		// FSimpleUniformStructData UniformData;
		FSimpleUniformStructParameters ShaderStructData;
		ShaderStructData.Color1 = UniformStruct.Color1;
		ShaderStructData.Color2 = UniformStruct.Color2;
		ShaderStructData.Color3 = UniformStruct.Color3;
		ShaderStructData.Color4 = UniformStruct.Color4;
		ShaderStructData.ColorIndex = UniformStruct.ColorIndex;

		// 同时，该函数传入参数ShaderStructData由UniformStruct取代
		SetUniformBufferParameterImmediate(RHICmdList, GetComputeShader(), GetUniformBufferParameter<FSimpleUniformStructParameters>(), ShaderStructData);
	}

	/*
	* Unbinds any buffers that have been bound.
	*/
	void UnbindBuffers(FRHICommandList& RHICmdList)
	{
		FComputeShaderRHIParamRef ComputeShaderRHI = GetComputeShader();
		if (OutTexture.IsBound())
			RHICmdList.SetUAVParameter(ComputeShaderRHI, OutTexture.GetBaseIndex(), FUnorderedAccessViewRHIParamRef());
	}
protected:
	FShaderResourceParameter OutTexture;
};

// 在Shader实现宏的使用，将shader文件和shader类绑定，指认它是什么shader以及shader对应的HLSL入口代码在哪里
// Shader是提前编译好的，根据不同的宏值取不同的Shader用于渲染（在_RenderThread中通过Shadermap调用）
IMPLEMENT_SHADER_TYPE(, FSimpleComputeShader, TEXT("/Plugins/MyPlugin/Shaders/Private/SimpleComputeShader.usf"), TEXT("MainCS"), SF_Compute);
IMPLEMENT_SHADER_TYPE(, FSimplePixelShaderVS, TEXT("/Plugins/MyPlugin/Shaders/Private/SimplePixelShader.usf"), TEXT("MainVS"), SF_Vertex)
IMPLEMENT_SHADER_TYPE(, FSimplePixelShaderPS, TEXT("/Plugins/MyPlugin/Shaders/Private/SimplePixelShader.usf"), TEXT("MainPS"), SF_Pixel)

// 参考DepthRendering.cpp356行的PreRenderPrePass函数
// 该函数是DrawMyShaderRenderTarget函数对应的渲染线程版本
// FRHICommandListImmediate，直接调用相应渲染平台对应FDynamicRHI的实现
// 对比FRHICommandList，不会有链表的实现
static void DrawMyShaderRenderTarget_RenderThread(  
    FRHICommandListImmediate& RHICmdList,   
    FTextureRenderTargetResource* OutputRenderTargetResource,  
    ERHIFeatureLevel::Type FeatureLevel,  
    const FLinearColor MyColor,
	const FTextureRHIParamRef TextureRHI,
	const FSimpleUniformStruct UniformStruct
)  
{  
    check(IsInRenderingThread());  
 
#if WANTS_DRAW_MESH_EVENTS  
	SCOPED_DRAW_EVENTF(RHICmdList, SceneCapture, TEXT("SimplePixelShaderPassTest"));
#else  
    SCOPED_DRAW_EVENT(RHICmdList, DrawMyShaderRenderTarget_RenderThread);
#endif  

	// 设置渲染目标RT（BeginRenderPass为4.22以上版本）
	FRHIRenderPassInfo RPInfo(OutputRenderTargetResource->GetRenderTargetTexture(), ERenderTargetActions::DontLoad_Store, OutputRenderTargetResource->TextureRHI);
	RHICmdList.BeginRenderPass(RPInfo, TEXT("SimplePixelShaderPass"));

	// 获取Shader，调用宏指定的Shader文件，通过ShaderMap获取相应的值
	// 直接根据GlobalShader的类型就能直接从GlobalShaderMap里拿到相应的GlobalShader
	TShaderMap<FGlobalShaderType>* GlobalShaderMap = GetGlobalShaderMap(FeatureLevel);
	TShaderMapRef< FSimplePixelShaderVS > VertexShader(GlobalShaderMap);
	TShaderMapRef< FSimplePixelShaderPS > PixelShader(GlobalShaderMap);

	// 设置图形pipeline状态
	FTextureVertexDeclaration VertexDeclaration;
	VertexDeclaration.InitRHI();

	FGraphicsPipelineStateInitializer GraphicsPSOInit;
	RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
	GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
	GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
	GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
	GraphicsPSOInit.PrimitiveType = PT_TriangleList;
	// 获取初始化的定点输入值
	GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = VertexDeclaration.VertexDeclarationRHI;
	GraphicsPSOInit.BoundShaderState.VertexShaderRHI = GETSAFERHISHADER_VERTEX(*VertexShader);
	GraphicsPSOInit.BoundShaderState.PixelShaderRHI = GETSAFERHISHADER_PIXEL(*PixelShader);
	SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

	// Update viewport.
	RHICmdList.SetViewport(
		0, 0, 0.f,
		OutputRenderTargetResource->GetSizeX(), OutputRenderTargetResource->GetSizeY(), 1.f);

	// 更新颜色参数，采用Uniform buffer格式，CPU写GPU读
	/*
	注意，HLSL代码可直接使用该uniformbuffer，UE4会自动生成uniformbuffer的HLSL代码，
	并include到Common.usf中，所以shader代码必须包含Common.ush
	*/
	FSimpleUniformStructParameters Parameters;
	Parameters.Color1 = UniformStruct.Color1;
	Parameters.Color2 = UniformStruct.Color2;
	Parameters.Color3 = UniformStruct.Color3;
	Parameters.Color4 = UniformStruct.Color4;
	Parameters.ColorIndex= UniformStruct.ColorIndex;
	SetUniformBufferParameterImmediate(RHICmdList, PixelShader->GetPixelShader(), PixelShader->GetUniformBufferParameter<FSimpleUniformStructParameters>(), Parameters);

	// 将CPU端提供的纹理RT（TextureVal和TextureSampler）进行设置
	VertexShader->SetParameters(RHICmdList, VertexShader->GetVertexShader(),MyColor,TextureRHI);
	PixelShader->SetParameters(RHICmdList, PixelShader->GetPixelShader(),MyColor,TextureRHI);

	// 传入顶点(位置和UV)和索引进行绘制
	RHICmdList.SetStreamSource(0, GRectangleVertexBuffer.VertexBufferRHI, 0);
	// 从面片的顶端架一台摄像机然后拍这个面片然后把拍到的信息存到RT上
	RHICmdList.DrawIndexedPrimitive(
		GRectangleIndexBuffer.IndexBufferRHI,
		/*BaseVertexIndex=*/ 0,
		/*MinIndex=*/ 0,
		/*NumVertices=*/ 4,
		/*StartIndex=*/ 0,
		/*NumPrimitives=*/ 2,
		/*NumInstances=*/ 1);

	RHICmdList.EndRenderPass();
}  

// 资源操作Step2：向FRHITexture2D写入数据
// 将CS计算出的结果存成BMP，并将颜色赋值给.usf中的shader
static void TransRTtoBMP(FRHICommandListImmediate& RHICmdList, FTexture2DRHIRef Texture, TArray<FColor> Bitmap)
{
	//create a bitmap  
	// TArray<FColor> Bitmap;

	//To access our resource we do a custom read using lockrect  
	uint32 LolStride = 0;
	char* TextureDataPtr = (char*)RHICmdList.LockTexture2D(Texture, 0, EResourceLockMode::RLM_ReadOnly, LolStride, false);

	for (uint32 Row = 0; Row < Texture->GetSizeY(); ++Row)
	{
		uint32* PixelPtr = (uint32*)TextureDataPtr;

		//Since we are using our custom UINT format, we need to unpack it here to access the actual colors  
		for (uint32 Col = 0; Col < Texture->GetSizeX(); ++Col)
		{
			uint32 EncodedPixel = *PixelPtr;
			uint8 r = (EncodedPixel & 0x000000FF);
			uint8 g = (EncodedPixel & 0x0000FF00) >> 8;
			uint8 b = (EncodedPixel & 0x00FF0000) >> 16;
			uint8 a = (EncodedPixel & 0xFF000000) >> 24;
			Bitmap.Add(FColor(r, g, b, a));

			PixelPtr++;
		}

		// move to next row:  
		TextureDataPtr += LolStride;
	}

	RHICmdList.UnlockTexture2D(Texture, 0, false);

	// if the format and texture type is supported  
	if (Bitmap.Num())
	{
		// Create screenshot folder if not already present.  
		IFileManager::Get().MakeDirectory(*FPaths::ScreenShotDir(), true);

		const FString ScreenFileName(FPaths::ScreenShotDir() / TEXT("VisualizeTexture"));

		uint32 ExtendXWithMSAA = Bitmap.Num() / Texture->GetSizeY();

		// Save the contents of the array to a bitmap file. (24bit only so alpha channel is dropped)  
		FFileHelper::CreateBitmap(*ScreenFileName, ExtendXWithMSAA, Texture->GetSizeY(), Bitmap.GetData());

		UE_LOG(LogConsoleResponse, Display, TEXT("Content was saved to \"%s\""), *FPaths::ScreenShotDir());
	}
	else
	{
		UE_LOG(LogConsoleResponse, Error, TEXT("Failed to save BMP, format or texture type is not supported"));
	}
}

/*
使用GPU并行特性进行非图形计算被称为GPGPU编程（General Purpose GPU Programming），
大量并行无序数据的少分支逻辑（少if）适合GPGPU，例如粒子间互不影响的粒子系统。
CPU <--1GB/s--> GPU
 |				 |
10GB/s		  100GB/s
 |				 |
RAM <--1GB/s--> GPU
CPU和GPU之间的数据传输是瓶颈，当使用GPGPU时，对Texture的逐像素处理不传回CPU，速度比较快。
omputeShader就是这样的可称为GPGPU编程的东西。它是一段shader程序，有shader的特性，
但又脱离于正常的渲染管线之外，不对渲染结果造成影响。
*/
static void UseComputeShader_RenderThread(
	FRHICommandListImmediate& RHICmdList,
	FTextureRenderTargetResource* OutputRenderTargetResource,
	FSimpleUniformStruct UniformStruct,
	ERHIFeatureLevel::Type FeatureLevel
)
{
	/*
	把computeShader的计算结果保存在一个UAV中，把它看成一个Texture资源，
	作为其他shader如Pixle的输入资源，然后执行draw操作画到RT上
	*/
	check(IsInRenderingThread());

	TShaderMapRef<FSimpleComputeShader> ComputeShader(GetGlobalShaderMap(FeatureLevel));
	RHICmdList.SetComputeShader(ComputeShader->GetComputeShader());

	// 渲染目标RT的大小
	int32 SizeX = OutputRenderTargetResource->GetSizeX();
	int32 SizeY = OutputRenderTargetResource->GetSizeY();
	FRHIResourceCreateInfo CreateInfo;

	/*
	参考“Direct3D 11 中的资源介绍”
	# 有类型的（Typed）- 当创建资源时指定资源的类型。
	# 无类型的（Typeless）- 在资源绑定到管线时指定资源的类型。
	# ID3D12 DepthStencilView 在深度模版测试中访问一个纹理资源
	# ID3D12 RenderTargetView 访问一个用于当作渲染目标的纹理资源
	# ID3D12 ShaderResourceView 访问一个着色器资源，比如常量缓冲、纹理缓冲、纹理或者采样器
	# ID3D12 UnorderedAccessView 使用像素着色器或者计算着色器访问一个无序资源
	*/
	// 创建的Texture2D格式PF_A32B32G32R32F和RenderTarget的格式以及.usf声明的UAV类型三者要保持兼容
	FTexture2DRHIRef Texture = RHICreateTexture2D(SizeX, SizeY, PF_A32B32G32R32F, 1, 1, TexCreate_ShaderResource | TexCreate_UAV, CreateInfo);
	FUnorderedAccessViewRHIRef TextureUAV = RHICreateUnorderedAccessView(Texture);
	ComputeShader->SetParameters(RHICmdList, TextureUAV, UniformStruct);
	/*
	https://blog.csdn.net/weixin_38884324/article/details/80570160
	https://mp.weixin.qq.com/s/lZVYA1KF_pyNHjcIfEQP0A
	Dispatch.x * numthreads.x = 256 ( 图片宽度 )，
	Dispatch.y * numthreads.y = 128 ( 图片高度 )，
	numthreads.x * numthreads.y * numthreads.z <= 1024
	Thread：numthreads(x, y, z)，Group：Dispatch(x, y, z)
	以32核心为例，numthreads(32,32,1)，Dispatch(k, 288/32, 512/32,1)
	SV_GroupID: 线程组ID
	SV_GroupThreadID : 线程组内的线程ID(三维，可理解为Group内的坐标)
	SV_GroupIndex : 线程组内的线程ID（一维）
	SV_DispatchThreadID : 唯一ID(可理解为整张图片的坐标)
	UV = SV_DispatchThreadID / (288 * 512)
	*/
	// Dispatch就相当于Drawcall，但是没有Draw，参数为Dispatch(k, SizeX/32, SizeY/32,1)
	DispatchComputeShader(RHICmdList, *ComputeShader, SizeX / 32, SizeY / 32, 1);
	ComputeShader->UnbindBuffers(RHICmdList);

	// 将渲染后的图片导出为BMP
	TArray<FColor> Bitmap;
	TransRTtoBMP(RHICmdList, Texture, Bitmap);
	FLinearColor LinColor = Bitmap[11];

	// 将CS计算出的第一个像素值的颜色作为渲染的输入，LinColor代替FLinearColor()即可
	DrawMyShaderRenderTarget_RenderThread(RHICmdList, OutputRenderTargetResource, FeatureLevel, FLinearColor(), Texture, UniformStruct);
}


USimplePixelShaderBlueprintLibrary::USimplePixelShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{ }

//USimplePixelShaderBlueprintLibrary::USimplePixelShaderBlueprintLibrary()
//{
//
//}
// 该函数是SimplePixelShader.h里蓝图函数库的实现，是逻辑线程调用draw方法的部分
void USimplePixelShaderBlueprintLibrary::DrawMyShaderRenderTarget(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget, FLinearColor MyColor, UTexture* MyTexture, FSimpleUniformStruct UniformStruct)
{  
    check(IsInGameThread());  
 
    if (!OutputRenderTarget)  
    {  
        return;  
    }  
 
	// 取得各种所需变量
    FTextureRenderTargetResource* TextureRenderTargetResource = OutputRenderTarget->GameThread_GetRenderTargetResource();  
	// 将纹理RT从CPU端传到GPU端
	FTextureRHIParamRef TextureRHI = MyTexture->TextureReference.TextureReferenceRHI;
	const UWorld* World = WorldContextObject->GetWorld();
	// DX设备初始化，获取当前关卡
    ERHIFeatureLevel::Type FeatureLevel = World->Scene->GetFeatureLevel();  
    
	// 往渲染队列中添加新的渲染任务，lambda表达式
	ENQUEUE_RENDER_COMMAND(CaptureCommand)(  
        [TextureRenderTargetResource, FeatureLevel, MyColor,TextureRHI, UniformStruct](FRHICommandListImmediate& RHICmdList)
        {  
            DrawMyShaderRenderTarget_RenderThread(RHICmdList,TextureRenderTargetResource, FeatureLevel, MyColor,TextureRHI, UniformStruct);
        }  
    );  
}  

// 资源操作Step1：向UTexture2D写入数据
void USimplePixelShaderBlueprintLibrary::TextureWriting(UTexture2D* TextureToBeWrite)
{
	check(IsInGameThread());

	if (TextureToBeWrite == nullptr)return;
	
	//保存原式贴图设置以便之后恢复
	TextureCompressionSettings OldCompressionSettings = TextureToBeWrite->CompressionSettings;
	TextureMipGenSettings OldMipGenSettings = TextureToBeWrite->MipGenSettings;
	uint8 OldSRGB = TextureToBeWrite->SRGB;
	
	//设置新的格式，不然Mipmap.BulkData.Lock(LOCK_READ_WRITE)会得到空指针
	TextureToBeWrite->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	TextureToBeWrite->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	TextureToBeWrite->SRGB = 0;
	TextureToBeWrite->UpdateResource();

	FTexture2DMipMap& Mipmap = TextureToBeWrite->PlatformData->Mips[0];
	void* Data = Mipmap.BulkData.Lock(LOCK_READ_WRITE);

	TArray<FColor> Colors;
	int32 texturex = TextureToBeWrite->PlatformData->SizeX;
	int32 texturey = TextureToBeWrite->PlatformData->SizeY;
	int32 PixelNum = texturex * texturey;

	for (int32 i = 0; i < PixelNum; ++i)
	{
		Colors.Add(FColor::Blue);
	}

	const int32 Stride = (int32)(sizeof(uint8) * 4);
	FMemory::Memcpy(Data, Colors.GetData(), PixelNum*Stride);
	Mipmap.BulkData.Unlock();

	//恢复原本贴图设置
	TextureToBeWrite->CompressionSettings = OldCompressionSettings;
	TextureToBeWrite->MipGenSettings = OldMipGenSettings;
	TextureToBeWrite->SRGB = OldSRGB;

	TextureToBeWrite->Source.Init(TextureToBeWrite->PlatformData->SizeX, TextureToBeWrite->PlatformData->SizeY, 1, 1, ETextureSourceFormat::TSF_BGRA8, (uint8*)Colors.GetData());
	TextureToBeWrite->UpdateResource();
}

void USimplePixelShaderBlueprintLibrary::CreateTexture(const FString& TextureName,const FString& PackageName)
{
	int32 TextureWidth = 1024;
	int32 TextureHeight = 1024;

	FString AssetPath = TEXT("/Game/")+ PackageName+ TEXT("/");
	AssetPath += TextureName;
	UPackage* Package = CreatePackage(NULL, *AssetPath);
	Package->FullyLoad();

	UTexture2D* NewTexture = NewObject<UTexture2D>(Package, *TextureName, RF_Public | RF_Standalone | RF_MarkAsRootSet);

	NewTexture->AddToRoot();				// This line prevents garbage collection of the texture
	NewTexture->PlatformData = new FTexturePlatformData();	// Then we initialize the PlatformData
	NewTexture->PlatformData->SizeX = TextureWidth;
	NewTexture->PlatformData->SizeY = TextureHeight;
	NewTexture->PlatformData->NumSlices = 1;
	NewTexture->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;

	uint8* Pixels = new uint8[TextureWidth * TextureHeight * 4];
	for (int32 y = 0; y < TextureHeight; y++)
	{
		for (int32 x = 0; x < TextureWidth; x++)
		{
			int32 curPixelIndex = ((y * TextureWidth) + x);
			Pixels[4 * curPixelIndex] = 100;
			Pixels[4 * curPixelIndex + 1] = 50;
			Pixels[4 * curPixelIndex + 2] = 20;
			Pixels[4 * curPixelIndex + 3] = 255;
		}
	}

	// Allocate first mipmap.
	FTexture2DMipMap* Mip = new FTexture2DMipMap();
	NewTexture->PlatformData->Mips.Add(Mip);
	Mip->SizeX = TextureWidth;
	Mip->SizeY = TextureHeight;

	// Lock the texture so it can be modified
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	uint8* TextureData = (uint8*)Mip->BulkData.Realloc(TextureWidth * TextureHeight * 4);
	FMemory::Memcpy(TextureData, Pixels, sizeof(uint8) * TextureHeight * TextureWidth * 4);
	Mip->BulkData.Unlock();

	NewTexture->Source.Init(TextureWidth, TextureHeight, 1, 1, ETextureSourceFormat::TSF_BGRA8, Pixels);

	NewTexture->UpdateResource();
	Package->MarkPackageDirty();
	FAssetRegistryModule::AssetCreated(NewTexture);

	FString PackageFileName = FPackageName::LongPackageNameToFilename(AssetPath, FPackageName::GetAssetPackageExtension());
	bool bSaved = UPackage::SavePackage(Package, NewTexture, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName, GError, nullptr, true, true, SAVE_NoError);

	delete[] Pixels;
}

void USimplePixelShaderBlueprintLibrary::UseComputeShader(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget,FSimpleUniformStruct UniformStruct)
{
	check(IsInGameThread());

	FTextureRenderTargetResource* TextureRenderTargetResource = OutputRenderTarget->GameThread_GetRenderTargetResource();
	const UWorld* World = WorldContextObject->GetWorld();
	ERHIFeatureLevel::Type FeatureLevel = World->Scene->GetFeatureLevel();

	ENQUEUE_RENDER_COMMAND(CaptureCommand)(
		[TextureRenderTargetResource, FeatureLevel, UniformStruct](FRHICommandListImmediate& RHICmdList)
	{
		UseComputeShader_RenderThread
		(
			RHICmdList,
			TextureRenderTargetResource,
			UniformStruct,
			FeatureLevel
		);
	});
}

//// 自定义Pass渲染函数
//bool FDeferredShadingSceneRenderer::RenderMyPass(FRHICommandListImmediate& RHICmdList)
//{
//	// 从Scene中获取RT
//	FSceneRenderTargets& SceneContext = FSceneRenderTargets::Get(RHICmdList);
//
//	SceneContext.BeginRenderingSceneColor(RHICmdList, ESimpleRenderTargetMode::EExistingColorAndDepth, FExclusiveDepthStencil::DepthRead_StencilWrite, true);
//
//	FGraphicsPipelineStateInitializer GraphicsPSOInit;
//	RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
//
//	// 游戏里可能会有多个视口，View就是负责管理这些的视口
//	for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
//	{
//		const FViewInfo& View = Views[ViewIndex];
//
//		if (View.IsPerspectiveProjection() == false)
//		{
//			continue;
//		}
//
//		TShaderMapRef<FSimplePixelShaderVS> VertexShader(View.ShaderMap);
//		TShaderMapRef<FSimplePixelShaderPS> PixelShader(View.ShaderMap);
//
//		// 设置图形pipeline状态
//		FTextureVertexDeclaration VertexDeclaration;
//		VertexDeclaration.InitRHI();
//
//		RHICmdList.SetViewport(View.ViewRect.Min.X, View.ViewRect.Min.Y, 0.0f, View.ViewRect.Max.X, View.ViewRect.Max.Y, 1.0f);
//		GraphicsPSOInit.RasterizerState = TStaticRasterizerState<FM_Solid, CM_None>::GetRHI();
//
//		GraphicsPSOInit.BlendState = TStaticBlendState<CW_RGB, BO_Add, BF_One, BF_SourceAlpha>::GetRHI();
//
//		GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
//		GraphicsPSOInit.PrimitiveType = PT_TriangleList;
//
//		GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = VertexDeclaration.VertexDeclarationRHI;
//		GraphicsPSOInit.BoundShaderState.VertexShaderRHI = GETSAFERHISHADER_VERTEX(*VertexShader);
//		GraphicsPSOInit.BoundShaderState.PixelShaderRHI = GETSAFERHISHADER_PIXEL(*PixelShader);
//
//		SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);
//
//		RHICmdList.SetStreamSource(0, GRectangleVertexBuffer.VertexBufferRHI, 0);
//		RHICmdList.DrawIndexedPrimitive(
//			GRectangleIndexBuffer.IndexBufferRHI,
//			/*BaseVertexIndex=*/ 0,
//			/*MinIndex=*/ 0,
//			/*NumVertices=*/ 4,
//			/*StartIndex=*/ 0,
//			/*NumPrimitives=*/ 2,
//			/*NumInstances=*/ 1);
//
//	}
//
//	return true;
//}

#undef LOCTEXT_NAMESPACE