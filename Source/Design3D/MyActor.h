// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshComponent.h"
// 获取顶点数据
#include "MyStaticMeshComponent.h"
#include "Manager.h"
#include "GameFramework/Actor.h"
#include "LevelStreamingLoad.h"
#include "LevelLoadCharacter.h"

#include "MyActor.generated.h"





UCLASS()
class DESIGN3D_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();


protected:
	// Called when the game starts or when spawned
	// 虚函数的作用：实现对父类同名的子类函数调用，同时实现多态性
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 使用虚幻引擎的 UProperty宏来显示一个变量
	// 具备撤回性质属性得标记UPROPERTY(控制UObject的一个属性是否能回撤)
	UPROPERTY(EditAnywhere)
	ULevelStreamingLoad* LevelStreamingActor;

	UPROPERTY(EditAnywhere)
	class AMyactor* MyActor;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MyStaticMeshComp;

	UPROPERTY(EditAnywhere)
	class UMaterial* OnMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* OffMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* RMCMaterial;


	UPROPERTY(EditAnywhere)
	class UBoxComponent* MyBoxComp;

	UPROPERTY(EditAnywhere)
		USceneComponent* DefaultRootComponent;

	UPROPERTY(EditAnywhere)
	URuntimeMeshComponent* RMComp;

	UPROPERTY(EditAnywhere)
	UMyStaticMeshComponent* mUMyStaticMeshComp;
	// 所有这些component的派生类，不能放在构造函数或成员函数里去定义？？？
	//UPROPERTY()
	//class UMyStaticMeshComponent* UMyStaticMeshComp;

	UPROPERTY(EditAnywhere)
	TArray<UMaterialInterface*> OutMaterials;
	
	UPROPERTY(EditAnywhere)
	TSet<FGuid> DependentResources;

	unsigned char *buffer;
	UTexture2D *m_texture;
	UMaterialInterface *ScreenMaterial;
	UMaterialInstanceDynamic *DynamicMaterial;

	Manager manager;
	FString PathOfMesh;
	FString PathOfTexture;

	// 所有的函数都可以指定为UFUNCTION，UFUNCTION使得该函数既能够在C++中使用，又能够在蓝图中使用
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, 
		class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, 
		class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex);

	// 销毁对象
	UFUNCTION()
	void DestroyActorFunction();

	// 获取Actor对象
	UFUNCTION()
	AActor* GetMyActor();

	// 获取顶点数据
	UFUNCTION()
	TArray<FVector> GetVerticesofMesh(UStaticMeshComponent* MyStaticMeshComponent);
	
	//UFUNCTION()
	//void GetMyMaterials(UStaticMeshComponent* MyStaticMeshComponent, TArray<UMaterialInterface*>& OutMaterials);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MultiplePass")
		UMaterialInterface* SecondPassMaterial = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MultiplePass")
		bool NeedSecondPass = false;

	// 重载该函数，使tick函数在编译器中可以被调用
	UFUNCTION()
	virtual	bool ShouldTickIfViewportsOnly() const override;



	UFUNCTION()
	void LoadActor();

	UPROPERTY(EditAnywhere, Category = "ActorForLoad")
	TArray<AActor*> ActorForLoad;
	UPROPERTY(EditAnywhere, Category = "ActorArray")
	TArray<AActor*> ActorArray;
	UPROPERTY(EditAnywhere, Category = "ActorinFiles")
	TArray<AActor*> ActorinFiles;
	UPROPERTY(EditAnywhere, Category = "actor")
	AActor *actor;
	UPROPERTY(EditAnywhere, Category = "obj")
	UWorld* obj;
	UPROPERTY(EditAnywhere, Category = "World")
	UWorld* World;
	UPROPERTY(EditAnywhere, Category = "Level")
	ULevel* Level;

	UPROPERTY()
		AActor* Acotrptr;
	UPROPERTY(EditAnywhere, Category = "ParentComponent")
		USceneComponent* ParentIComponent;
	UPROPERTY(EditAnywhere, Category = "ChildComponent")
		USceneComponent* ChildIComponent;
	UPROPERTY(EditAnywhere, Category = "levelLoadCharacter")
		TSubclassOf<class ALevelLoadCharacter> levelLoadCharacter;
	UPROPERTY(EditAnywhere, Category = "levelLoadactor")
		ALevelLoadCharacter* levelLoadactor;

protected:
	virtual void PostActorCreated() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;

};
