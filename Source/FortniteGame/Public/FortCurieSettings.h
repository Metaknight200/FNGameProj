#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScalableFloat.h"
#include "FortCurieSettings.generated.h"

class UFortCurieFXSettings;
class UFortCurieManager;

UCLASS(Blueprintable, PerObjectConfig, Config=Game)
class UFortCurieSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCurieManager> CurieManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCurieFXSettings> CurieFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterBodyInteractionMagnitude;
    
public:
    UFortCurieSettings();

};

