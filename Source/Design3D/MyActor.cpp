// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// 获取组件信息
#include "Components/BoxComponent.h"//    UBoxComponent 引用
#include "DrawDebugHelpers.h"//    USphereComponent 引用
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h" // ConstructorHelpers 引用
#include "Engine/StaticMesh.h"	//staticmesh引用
#include "Components/StaticMeshComponent.h"  //staticmeshcompoent引用
#include "StaticMeshResources.h" //LOD resource引用
#include <Engine/EngineTypes.h>
#include <Materials/MaterialInstanceDynamic.h> //Materials引用
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "Core/Public/HAL/RunnableThread.h"
// 获取Uworld信息
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include <Runtime/Engine/Public/EngineUtils.h>
#include <Runtime/Engine/Classes/Engine/StaticMeshActor.h>
#include "Kismet/GameplayStatics.h"

#include "Engine/LevelStreaming.h"




// Sets default values
AMyActor::AMyActor()
{
	// 最好不要在构造中实行初始化，最多是变量初始化，UE4中构造会执行2次
 	// 设置为true，则Actor组件逐帧更新，设置为false，可稍微改善性能。
	PrimaryActorTick.bCanEverTick = true;
	
	LevelStreamingActor = NewObject<ULevelStreamingLoad>();

	//GWorld 获取全局指针，通常不建议使用；

	//PathOfMesh = FString(R"(D:\Github\master_szu\ue4_project\Design3D\3D_Models)");
	//PathOfTexture = FString(R"(D:\Github\master_szu\ue4_project\Design3D\3D_Models)");

	//manager.GetMaterial();
	//USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	//SphereComponent->SetupAttachment(RootComponent);

	//RootComponent = SphereComponent;
	////SphereComponent->InitSphereRadius(40.0f);
	////SphereComponent->SetCollisionProfileName(TEXT("ActorMeshLoader"));
	////SetRootComponent(RootComponent);

	//----------------------------------------------------------------------
	// 初始化MyActor的components
	//----------------------------------------------------------------------
	// 1. 顶点buffer
	//buffer = new unsigned char[2048 * 2048 * 4];

	// 2. 初始化staticmeshcomponent
	/* 
	1）CreateDefaultSubobject ue4所有组件都是通过这个函数创建的；
	2）CreateDefaultSubobject必须写在Actor的无参构造函数中，否则crash；
	3）CreateDefaultSubobject中的TEXT或者FName参数在同一个Actor中不能重复，否则crash；
	*/
	MyStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticComponent"));//无视觉效果
	if (nullptr == MyStaticMeshComp)
		return;
	
	/*
	1）添加附件到RootComponent，无视觉效果；
	2）如果staticmeshcomponent不是rootcomponent，则采用AttachToComponent绑定到某个sceneComponent之下；
	*/
	//RootComponent = MyStaticMeshComp;

	/*
	1）FObjectFinder是ConstructorHelpers的内部类，这是静态加载组件的方式
	2）这里可以用过在ue4赋值引用得到地址，不是物理路径
	*/
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MyStaticMeshCompAssetWzh(TEXT("/Game/StarterContent/Props/sz3D12000.sz3D12000"));//打开素材库
	if (MyStaticMeshCompAssetWzh.Succeeded())//判断素材库是否打开
	{
		MyStaticMeshComp->SetStaticMesh(MyStaticMeshCompAssetWzh.Object);//设置素材 这里有视觉效果
		MyStaticMeshComp->SetRelativeTransform(FTransform(FRotator(0, 0, 0), FVector(0, 30, 0), FVector(0.8f)));//初始化位置、旋转和放大倍数   
		//MyStaticMeshComp->SetRelativeLocation(FVector(0.0f, 30.0f, 0.0f));//设置位置0,0,0为初始位置    初始位置为防止位置 z轴与地平线一致 在根组件没有赋予形状时                                                                                                                      
		//MyStaticMeshComp->SetWorldScale3D(FVector(0.8f));//SetWorldScale3D 设置组件在世界空间中的变换倍数。 倍数以原来模型大小为基准
	}

	// 3. 初始化Boxcomponent
	MyBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBox"));
	MyBoxComp->InitBoxExtent(FVector(100, 100, 100));
	MyBoxComp->SetCollisionProfileName("Trigger");
	//MyBoxComp->SetupAttachment(RootComponent);

	// 4. 初始化Materialcomponent，注意UMaterialInterface和UMaterial的差异
	//MyAcotrptr->Materials
	//OnMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OnMaterialComponent"));
	//OffMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OffMaterialComponent"));
	RMCMaterial = CreateDefaultSubobject<UMaterial>(TEXT("RMCMaterialComponent"));

	
	// 静态加载方式，并初始化
	//static ConstructorHelpers::FObjectFinder<UMaterial>MyMaterialOn(TEXT("Material'/Game/StarterContent/Props/Materials/OnMaterial.OnMaterial'"));
	//static ConstructorHelpers::FObjectFinder<UMaterial>MyMaterialOff(TEXT("Material'/Game/StarterContent/Props/Materials/OffMaterial.OffMaterial'"));
	static ConstructorHelpers::FObjectFinder<UMaterial>MyRMCMaterial(TEXT("Material'/Game/StarterContent/Props/Materials/OffMaterial.OffMaterial'"));
	if (MyRMCMaterial.Succeeded()) {
		//OnMaterial = MyMaterialOn.Object;
		//OffMaterial = MyMaterialOff.Object;
		RMCMaterial = MyRMCMaterial.Object;
	}
	MyBoxComp->OnComponentBeginOverlap.AddDynamic(this, &AMyActor::OnOverlapBegin);
	//GetVerticesofMesh(MyStaticMeshComp);

	// 5.加载RMC
	RMComp = CreateDefaultSubobject<URuntimeMeshComponent>(TEXT("RMComp"));
	//RMComp->SetupAttachment(RootComponent);

	//RootComponent = RMComp;
	//UMyStaticMeshComp->DynamicDrawMesh(MyStaticMeshComp, RMComp);

}

void AMyActor::PostActorCreated()
{
	Super::PostActorCreated();
	UE_LOG(LogTemp, Error, TEXT("ATestActor::PostActorCreated"));
}

void AMyActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	UE_LOG(LogTemp, Error, TEXT("ATestActor::OnConstruction"));

}

void AMyActor::PreInitializeComponents()
{
	Super::PreInitializeComponents();
	UE_LOG(LogTemp, Error, TEXT("ATestActor::PreInitializeComponents"));
}

void AMyActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	UE_LOG(LogTemp, Error, TEXT("ATestActor::PostInitializeComponents"));
}

void AMyActor::LoadActor()
{


	
	static int k = 0;
	if (k == 0)
	{

		ActorArray.Empty();
		ActorinFiles.Empty();

		FRotator Rotation = FRotator(0, 0, 0);
		// Translation = {0,0,0,0)
		FVector Translation = FVector(0, 0, 0);
		// Scale3D = {1,1,1,0);
		FVector Scale3D = FVector(1, 1, 1);

		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = Instigator;

		for (int layer = 0; layer < 3; ++layer)
		{
			for (int col = 0; col < pow(2, layer + 1); ++col)
			{
				for (int row = 0; row < pow(2, layer); ++row)
				{
					FString longPackageName = "/Game/" + FString::FromInt(layer) + "/" + FString::FromInt(col) + "/u" + FString::FromInt(row);
					Tile tile;
					tile.layer = layer;
					tile.row = row;
					tile.col = col;
					if (!tile.IsLevelFileExist())
						continue;
					obj = (UWorld*)StaticLoadObject(UWorld::StaticClass(), NULL, *longPackageName);
					if (obj)
					{
						Level = obj->GetCurrentLevel();
						for (int num = 0; num < Level->Actors.Num(); ++num)
						{
							ActorinFiles.Add(Level->Actors[num]);
							if (Level->Actors[num]->GetActorLabel() == "Landscape")
							{
								//AActor* actorLoad = Level->Actors[num];
								//SpawnParams.Template = actorLoad;
								//AActor *actor = obj->SpawnActor<AActor>(actorLoad->GetClass(), Translation, Rotation, SpawnParams);
								//
								ActorArray.Add(Level->Actors[num]);
							}

						}

					}
				}
			}
		}


		ActorForLoad.Empty();
		World = GetWorld();

		for (int num = 0; num < ActorArray.Num(); ++num)
		{
			SpawnParams.Template = ActorArray[num];
			actor = World->SpawnActor<AActor>(ActorArray[num]->GetClass(), Translation, Rotation, SpawnParams);
			actor->AddToRoot();
			ActorForLoad.Add(actor);
		}
		//for (int num = 0; num < ActorinFiles.Num(); ++num)
		//{
		//	if (!ActorinFiles[num]->IsPendingKillPending())
		//		ActorinFiles[num]->MarkPendingKill();
		//}
		k++;

		World->AddToRoot();
		obj->AddToRoot();
		/*if (!World->bIsWorldInitialized)
		{
			World->InitWorld();
		}
		FCoreUObjectDelegates::PostLoadMapWithWorld.Broadcast(World);
		GWorld = World;*/
		//Super::PostRegisterAllComponents();
	}
	

	//UWorld* obj = (UWorld*)StaticLoadObject(UWorld::StaticClass(), NULL, *RootPath);
	//static int k = 0;
	//UWorld* World = GetWorld();
	//ULevel* Level = obj->GetCurrentLevel();
	//if (k == 0)
	//{
	//	for (int i = 0; i < Level->Actors.Num(); ++i)
	//	{
	//		// Find our player index
	//		int32 IterIndex = 0;
	//		int32 PlayerIndex = INDEX_NONE;
	//		bool bIsPaused = GetWorld()->IsPaused();
	//		if (Level->Actors[i]->GetActorLabel() == "Landscape")
	//		{

	//			Acotrptr = Level->Actors[i];



	//			//for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator, ++IterIndex)
	//			//{
	//			//	APlayerController* PlayerController = Iterator->Get();

	//			//	if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
	//			//	{
	//			//		levelLoadactor = World->SpawnActor<ALevelLoadCharacter>(ALevelLoadCharacter::StaticClass(), Translation, Rotation);
	//			//		PlayerController->Possess(levelLoadactor);
	//			//		break;
	//			//	}
	//			//}
	//		
	//			AActor* alandscape = World->SpawnActor<AActor>(Acotrptr->GetClass(), Translation, Rotation, SpawnParams);
	//			Level->Actors[i]->MarkPendingKill();
	//			k++;

	//			//return;
	//			/*
	//			levelLoadactor = World->SpawnActor<ALevelLoadCharacter>(ALevelLoadCharacter::StaticClass(), Translation, Rotation, SpawnParams);

	//			const FName actorComponentName = FName("ActorComponent");
	//			const FName loadComponentName = FName("loadComponent");
	//			UMyStaticMeshComponent* loadComponent = NewObject<UMyStaticMeshComponent>(levelLoadactor, actorComponentName);
	//			loadComponent->RegisterComponent();
	//			levelLoadactor->AddOwnedComponent(loadComponent);
	//			UMyStaticMeshComponent* actorComponent = NewObject<UMyStaticMeshComponent>(Acotrptr, actorComponentName);
	//			actorComponent->RegisterComponent();
	//			Acotrptr->AddOwnedComponent(actorComponent);
	//			*/
	//			//ParentIComponent = levelLoadactor->GetDefaultAttachComponent();
	//			//RootComponent = ParentIComponent;
	//			//ChildIComponent = Acotrptr->GetDefaultAttachComponent();
	//			//ChildIComponent->SetupAttachment(RootComponent);
	//			RootComponent->UpdateComponentToWorld(EUpdateTransformFlags::SkipPhysicsUpdate, ETeleportType::None);

	//			Acotrptr->bExchangedRoles = true;
	//			Acotrptr->bNetLoadOnClient = true;
	//			Acotrptr->bRelevantForLevelBounds = true;
	//			Acotrptr->bRelevantForNetworkReplays = true;
	//			Acotrptr->bCanBeDamaged = true;
	//			Acotrptr->bFindCameraComponentWhenViewTarget = true;
	//			Acotrptr->bEnableAutoLODGeneration = true;
	//			World->GetCurrentLevel()->Actors.Add(Acotrptr);
	//			//Acotrptr;
	//			RootComponent->UpdateComponentToWorld(EUpdateTransformFlags::SkipPhysicsUpdate, ETeleportType::None);

	//			RegisterAllComponents();
	//			RegisterAllActorTickFunctions(true, true); // register all tick functions
	//		}

	//		World->AddToRoot();
	//		if (!World->bIsWorldInitialized)
	//		{
	//			World->InitWorld();
	//		}
	//		FCoreUObjectDelegates::PostLoadMapWithWorld.Broadcast(World);
	//		GWorld = World;
	//		Super::PostRegisterAllComponents();
	//	}
	//}
}
// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	//ULevelStreamingLoad LevelStreaming = ULevelStreamingLoad();
//	LevelStreaming.LoadMap("StarterMap");
//	LevelStreaming.LoadMap("Advanced_Lighting");


	RegisterAllComponents();
	//DrawDebugBox(GetWorld(), GetActorLocation(), FVector(100, 100, 100), FColor::White, true, -1, 0, 10);

	//MyStaticMeshComp->SetMaterial(0, OffMaterial); 静态加载改为动态加载
	//MyBoxComp->OnComponentEndOverlap.AddDynamic(this, &AMyActor::OnOverlapEnd);

	//UMyStaticMeshComp->SetRMCInfo(RootComponent, MyStaticMeshComp, RMComp, RMCMaterial);

	//UMyStaticMeshComponent* UMyStaticMeshComp = NewObject<UMyStaticMeshComponent>();
	//UMyStaticMeshComp->DynamicDrawMesh(MyStaticMeshComp, RMComp);

	// 没有生效，why？
	//FTimerHandle Timer;
	//GetWorldTimerManager().SetTimer(Timer, this, &AMyActor::DestroyActorFunction, 10);
}

// 销毁actor
void AMyActor::DestroyActorFunction()
{

	if (MyActor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Destroy"));
	}
}


int second = 0;
// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LoadActor();

	UWorld* InWorld;
	InWorld = GWorld;
	//AActor* actor = GetMyActor();
	second++;
	if (second == 1000) {
		mUMyStaticMeshComp = NewObject<UMyStaticMeshComponent>();
		mUMyStaticMeshComp->SetRMCInfo(RootComponent, MyStaticMeshComp, RMComp, RMCMaterial);
		//UMyStaticMeshComp->DynamicDrawMesh(MyStaticMeshComp, RMComp);
		//second = 0;
	}
}

// 用于修改mesh的material，
void AMyActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 当某对象进入Box组件时调用

	// 传递新的材质并设定为网格的首个材质
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		// new UMaterialInstanceDynamic();
		if (UMaterialInstanceDynamic* MatInstance = UMaterialInstanceDynamic::Create(OnMaterial, this))
		{
			// ParameterFName, ParameterValue;(color.m_fR, color.m_fG, color.m_fB, color.m_fA);
			MatInstance->SetVectorParameterValue(TEXT("Color"), FLinearColor(0.0f, 1.0f, 0.0f, 0.0f));
			// 0代表get的MaterialInstance的index，因为不少Mesh有多个Material在身上
			MyStaticMeshComp->SetMaterial(0, MatInstance);
		}
	}
}

void AMyActor::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp,	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,	int32 OtherBodyIndex)
{
	// 当某对象离开Box组件时调用

	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		// new UMaterialInstanceDynamic();
		if (UMaterialInstanceDynamic* MatInstance = UMaterialInstanceDynamic::Create(OffMaterial, this))
		{
			// ParameterFName, ParameterValue;(color.m_fR, color.m_fG, color.m_fB, color.m_fA);
			MatInstance->SetVectorParameterValue(TEXT("Color"), FLinearColor(1.0f, 0.0f, 0.0f, 0.0f));
			// 0代表get的MaterialInstance的index，因为不少Mesh有多个Material在身上
			MyStaticMeshComp->SetMaterial(0, MatInstance);

		}
	}
}

AActor* AMyActor::GetMyActor()
{
	//----------------------------------------------------------------------
	// 查找自定义类AMyActor中已经拖入的Actors
	//----------------------------------------------------------------------
	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyActor::StaticClass(), Actors);

	for (AActor* Actor : Actors)
	{
		AMyActor* Acotrptr = Cast<AMyActor>(Actor);
		if (Acotrptr)
		{
			// 按照编辑器中世界大纲视图中的tag[MyActor]获取actor对象
			if (Acotrptr->GetName().Contains("MyActor", ESearchCase::CaseSensitive))
			{
				// 在编辑器中左上角显示“target is found”
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("target is found"));
				return Acotrptr;
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("not found"));
			}
		}
	}

	return nullptr;
}

TArray<FVector> AMyActor::GetVerticesofMesh(UStaticMeshComponent* MyStaticMeshComponent)
{
	//----------------------------------------------------------------------
	// 获取staticmesh的顶点数据
	//----------------------------------------------------------------------
	TArray<FVector> vertices = TArray<FVector>();
	UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MyStaticMeshComponent);
	if (!StaticMeshComponent)
		return vertices;
	AActor* Actor = GetMyActor();

	if (Actor != nullptr)
	{
		UWorld* World = Actor->GetWorld();
		// GetFeatureLevel返回特征层级SM5，可以是FSceneView，FMaterial，FSkeletalMeshObject等
		ERHIFeatureLevel::Type SceneFeatureLevel = World->Scene->GetFeatureLevel();
		//const FMaterial* Material = MaterialRenderProxy->GetMaterial(View.GetFeatureLevel());   const FViewInfo& View,
		if (!SceneFeatureLevel)
			return vertices;
	}
	//const auto FeatureLevel = MyStaticMeshComponent->GetWorld()->FeatureLevel;


	// RenderData报错，可以步进到GetStaticMesh去看UStaticMesh的结构，用this指针查看数据
	UStaticMesh* MyStaticMesh = StaticMeshComponent->GetStaticMesh();
	if (!MyStaticMesh)
		return vertices;

	//StaticMeshRender.cpp 111行，查看源代码，新版本都采用Get获取数据，注意与web参考资料的差别
	FStaticMeshRenderData* RenderData = MyStaticMesh->RenderData.Get();
	if (!RenderData)
		return vertices;

	// StaticMesh.cpp 968行
	int32 LODIndex = 0;
	FStaticMeshLODResources& LODModel = RenderData->LODResources[LODIndex];

	// StaticMesh.h 221-250行
	// 顶点buffer的数据和位置
	FStaticMeshVertexBuffers& VertexBuffer = LODModel.VertexBuffers;
	FStaticMeshVertexBuffer& StaticMeshVertexBuffer = VertexBuffer.StaticMeshVertexBuffer;
	FPositionVertexBuffer& PositionVertexBuffer = VertexBuffer.PositionVertexBuffer;

	if (&VertexBuffer)
	{
		const int32 VertexCount = LODModel.GetNumVertices();
		for (int32 Index = 0; Index < VertexCount; Index++)
		{
			//This is in the Static Mesh Actor Class, so it is location and tranform of the SMActor
			/*请参考示例格式，
			TotalScale3D.X = FVector(LocalToWorld.TransformVector(FVector(1, 0, 0))).Size();
			TotalScale3D.Y = FVector(LocalToWorld.TransformVector(FVector(0, 1, 0))).Size();
			TotalScale3D.Z = FVector(LocalToWorld.TransformVector(FVector(0, 0, 1))).Size();
			*/
			// PositionVertexBuffer.h 73行
			const FVector WorldSpaceVertexLocation = GetActorLocation() + GetTransform().TransformVector(PositionVertexBuffer.VertexPosition(Index));
			//add to output FVector array
			vertices.Add(WorldSpaceVertexLocation);
		}
	}

	return vertices;
}

bool AMyActor::ShouldTickIfViewportsOnly() const
{
	return true;
}