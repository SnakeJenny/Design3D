#pragma once


#include "CoreMinimal.h"
#include "RuntimeMeshComponent.h"


struct MeshSectionData
{
	TArray<FVector> Vertices;

	TArray<int32> Triangles;

	TArray<FVector> Normals;

	TArray<FVector2D> UV;

	TArray<FColor> VertexFColors;

	TArray<FRuntimeMeshTangent> Tangents;

	FTransform RelativeTransform;
};


struct MeshData
{
	TArray<MeshSectionData*> meshSectionData;
	UTexture2D* texture;
	int32 mNumMeshes;
};

class Manager
{
public:


	/*
		
	*/
	UTexture2D* LoadTexture2DFromDiskFile(const FString& FilePath);

	UMaterialInstance* CreateMaterialInstanceUseTexture2D(UMaterial* material, UTexture2D* texture2d);

	UMaterial* GetMaterial();


	MeshData* Load3DModelFile(const FString& meshFile, const FString& textureFile);
	MeshData* LoadMeshUseAssimp(const FString& meshFile, const FString& textureFile);
	//void FindMeshData(const aiScene* scene, aiNode* node, MeshData* pMeshData);
	//void FindMeshSectionData(const aiScene* scene, aiNode* node, MeshData* pMeshData);
	URuntimeMeshComponent* CreateMeshComponent(TArray<MeshData*> meshinfo, AActor* actor);
	void Load3DModelAddToActor(const FString& meshFile, const FString& textureFile, AActor* actor);


	Manager();
	~Manager();
};

