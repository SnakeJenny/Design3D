#include "Manager.h"

#include "FileHelper.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ModuleManager.h"
#include "UObject/Object.h"
#include "UObject/ConstructorHelpers.h" // ConstructorHelpers 引用
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "assimp/scene.h"  // Output data structure
#include "assimp/postprocess.h" // Post processing flags
#include "assimp/Importer.hpp"


Manager::Manager()
{
}


Manager::~Manager()
{
}


UTexture2D* Manager::LoadTexture2DFromDiskFile(const FString& FilePath)
{
	TArray<uint8> RawFileData;
	UTexture2D* MyTexture = nullptr;
	if (FFileHelper::LoadFileToArray(RawFileData, *FilePath /*"<path to file>"*/))
	{
		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
		// ImageFormat: PNG format.  Other formats are supported
		EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(RawFileData.GetData(), RawFileData.Num());
		if (ImageFormat == EImageFormat::Invalid)
		{
			return nullptr;
		}
		IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
		if (!ImageWrapper.IsValid())
		{
			return nullptr;
		}

		if (ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			const TArray<uint8>* UncompressedBGRA = nullptr;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				// Create the UTexture for rendering，与CreateTransient不同的是给出不同的纹理名字
				MyTexture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);


				// Fill in the source data from the file
				void* TextureData = MyTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				MyTexture->PlatformData->Mips[0].BulkData.Unlock();

				// Update the rendering resource from data.
				MyTexture->UpdateResource();
			}
		}
	}
	return MyTexture;
}



UMaterialInstance* Manager::CreateMaterialInstanceUseTexture2D(UMaterial* material, UTexture2D* texture2d)
{
	UMaterialInstanceDynamic* materialInst = UMaterialInstanceDynamic::Create(material, nullptr);
	materialInst->SetTextureParameterValue("baseColor", texture2d);	
	return materialInst;	
}



UMaterial* Manager::GetMaterial()
{
	UMaterial* MyMaterial = nullptr;
	static ConstructorHelpers::FObjectFinder<UMaterial>MyRMCMaterial(TEXT("Material'/Game/StarterContent/Props/Materials/OnMaterial.OnMaterial'"));
	if (MyRMCMaterial.Succeeded()) {
		MyMaterial = MyRMCMaterial.Object;
	}
	return MyMaterial;

}



MeshData* Manager::Load3DModelFile(const FString& meshFile, const FString& textureFile)
{

	MeshData *pMeshData = LoadMeshUseAssimp(meshFile, textureFile);


	//UTexture2D *texture = LoadTexture2DFromDiskFile(textureFile);
	//pMeshData->meshSectionData.Add(meshSection);
	//pMeshData->texture = texture;

	return pMeshData;
}

void FindMeshSectionData(const aiScene* scene, aiNode* node, MeshData* pMeshData)
{
	for (unsigned int i = 0; i < scene->mNumMeshes; ++i)
	{
		aiMesh *mesh = scene->mMeshes[i];
		MeshSectionData* mi = new MeshSectionData;
		pMeshData->meshSectionData.Add(mi);

		//transform.
		aiMatrix4x4 tempTrans = node->mTransformation;
		FMatrix tempMatrix;
		tempMatrix.M[0][0] = tempTrans.a1; tempMatrix.M[0][1] = tempTrans.b1; tempMatrix.M[0][2] = tempTrans.c1; tempMatrix.M[0][3] = tempTrans.d1;
		tempMatrix.M[1][0] = tempTrans.a2; tempMatrix.M[1][1] = tempTrans.b2; tempMatrix.M[1][2] = tempTrans.c2; tempMatrix.M[1][3] = tempTrans.d2;
		tempMatrix.M[2][0] = tempTrans.a3; tempMatrix.M[2][1] = tempTrans.b3; tempMatrix.M[2][2] = tempTrans.c3; tempMatrix.M[2][3] = tempTrans.d3;
		tempMatrix.M[3][0] = tempTrans.a4; tempMatrix.M[3][1] = tempTrans.b4; tempMatrix.M[3][2] = tempTrans.c4; tempMatrix.M[3][3] = tempTrans.d4;
		mi->RelativeTransform = FTransform(tempMatrix);

		//vet
		for (uint32 j = 0; j < mesh->mNumVertices; ++j)
		{

			FVector vertex = FVector(
				mesh->mVertices[j].x,
				mesh->mVertices[j].y,
				mesh->mVertices[j].z);

			vertex = mi->RelativeTransform.TransformFVector4(vertex);

			mi->Vertices.Push(vertex);

			//Normal
			if (mesh->HasNormals())
			{
				FVector normal = FVector(
					mesh->mNormals[j].x,
					mesh->mNormals[j].y,
					mesh->mNormals[j].z);

				//normal = mi.RelativeTransform.TransformFVector4(normal);
				mi->Normals.Push(normal);
			}
			else
			{
				mi->Normals.Push(FVector::ZeroVector);
			}

			//UV Coordinates - inconsistent coordinates
			if (mesh->HasTextureCoords(0))
			{
				FVector2D uv = FVector2D(mesh->mTextureCoords[0][j].x, -mesh->mTextureCoords[0][j].y);
				mi->UV.Add(uv);
			}

			//Tangent
			if (mesh->HasTangentsAndBitangents())
			{
				FRuntimeMeshTangent meshTangent = FRuntimeMeshTangent(
					mesh->mTangents[j].x,
					mesh->mTangents[j].y,
					mesh->mTangents[j].z
				);
				mi->Tangents.Push(meshTangent);
			}

		}
	}
}

void FindMeshData(const aiScene* scene, aiNode* node, MeshData* pMeshData)
{
	FindMeshSectionData(scene, node, pMeshData);

	for (uint32 m = 0; m < node->mNumChildren; ++m)
	{
		FindMeshData(scene, node->mChildren[m], pMeshData);
	}
}


MeshData* Manager::LoadMeshUseAssimp(const FString& meshFile, const FString& textureFile)
{
	MeshData* pMeshData = new MeshData();
	pMeshData->meshSectionData.Empty();
	pMeshData->mNumMeshes = 0;

	if (meshFile.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Runtime Mesh Loader: filepath is empty.\n"));
		return nullptr;
	}

	std::string file;
	file = TCHAR_TO_UTF8(*meshFile);
	Assimp::Importer mImporter;
	const aiScene* mScenePtr = mImporter.ReadFile(file, aiProcess_GenUVCoords | aiProcess_TransformUVCoords | aiProcess_MakeLeftHanded | aiProcess_OptimizeGraph | aiProcess_OptimizeMeshes | aiProcess_JoinIdenticalVertices | aiProcess_FindInvalidData | aiProcess_Triangulate);

	if (mScenePtr == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Runtime Mesh Loader: Read mesh file failure.\n"));
		return nullptr;
	}

	if (mScenePtr->HasMeshes())
	{
		//pMeshData->meshSectionData.SetNum(mScenePtr->mNumMeshes, false);
		FindMeshData(mScenePtr, mScenePtr->mRootNode, pMeshData);

		/*
		aiMesh类的成员mNumFaces为多边形的个数，而mFaces数组包含了顶点的索引。
		确保每个多边形的顶点数都为3，而不是四边形或其它多边形
		*/
		for (uint32 i = 0; i < mScenePtr->mNumMeshes; ++i)
		{
			//Triangle number
			for (uint32 l = 0; l < mScenePtr->mMeshes[i]->mNumFaces; ++l)
			{
				const aiFace& Face = mScenePtr->mMeshes[i]->mFaces[l];
				assert(Face.mNumIndices == 3);
				for (uint32 m = 0; m < mScenePtr->mMeshes[i]->mFaces[l].mNumIndices; ++m)
				{
					pMeshData->meshSectionData[i]->Triangles.Push(mScenePtr->mMeshes[i]->mFaces[l].mIndices[m]);
				}
			}
		}

		pMeshData->texture = LoadTexture2DFromDiskFile(textureFile);

	}

	return pMeshData;

}


URuntimeMeshComponent* Manager::CreateMeshComponent(TArray<MeshData*> meshinfo, AActor* actor)
{
	URuntimeMeshComponent* meshComponent = NewObject<URuntimeMeshComponent>(actor);
	

	for (int i = 0; i < meshinfo.Num(); ++i)
	{
		MeshData* meshdata = meshinfo[i];
		for (int j = 0; j < meshdata->meshSectionData.Num(); ++j)
		{
			MeshSectionData* meshSectionData = meshdata->meshSectionData[j];
			meshComponent->CreateMeshSection(i, meshSectionData->Vertices, 
				meshSectionData->Triangles,
				meshSectionData->Normals,
				meshSectionData->UV,
				TArray<FColor>(),
				TArray<FRuntimeMeshTangent>(), 
				true, 
				EUpdateFrequency::Average, 
				ESectionUpdateFlags::CalculateNormalTangentHard);
		}

		UMaterial* material = GetMaterial();
		UMaterialInstance* instance = CreateMaterialInstanceUseTexture2D(material, meshdata->texture);
			
		meshComponent->SetMaterial(i, instance);
	}
	return meshComponent;
}



void Manager::Load3DModelAddToActor(const FString& meshFile, const FString& textureFile, AActor* actor)
{
	MeshData* meshData = Load3DModelFile(meshFile, textureFile);
	TArray<MeshData*> meshinfo;
	meshinfo.Add(meshData);
	URuntimeMeshComponent* component = CreateMeshComponent(meshinfo, actor);

	component->RegisterComponent();

	if (actor->GetRootComponent() == NULL)
	{
		actor->SetRootComponent(NewObject<USceneComponent>(actor));
	}

	component->AttachToComponent(actor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
}