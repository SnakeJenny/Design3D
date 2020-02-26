#pragma once
#include "Engine\Public\StaticMeshResources.h"

class FMyStaticMeshSceneProxy : public FStaticMeshSceneProxy
{
public:
	//在UMyStaticMeshComponent中调用这个构造函数初始化
	FMyStaticMeshSceneProxy(UStaticMeshComponent* Component, bool bForceLODsShareStaticLighting);

	virtual void DrawStaticElements(FStaticPrimitiveDrawInterface* PDI) override;
	
private:
	UPROPERTY()
	const UStaticMeshComponent* ComponentPtr;
};