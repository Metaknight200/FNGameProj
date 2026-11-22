#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManagerTypes.h"
#include "Engine/DataAsset.h"
#include "GameFeatureData.generated.h"

class UGameFeatureAction;

UCLASS(Blueprintable)
class GAMEFEATURES_API UGameFeatureData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameFeatureAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    
public:
    UGameFeatureData();

};

