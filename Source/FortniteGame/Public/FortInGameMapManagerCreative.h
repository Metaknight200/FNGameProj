#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManagerAthena.h"
#include "FortInGameMapManagerCreative.generated.h"

class AFortMinigame;
class AFortVolume;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortInGameMapManagerCreative : public AFortInGameMapManagerAthena {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HeatmapEnabledMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HeatmapDisabledMapMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CreativeMapMaterial;
    
public:
    AFortInGameMapManagerCreative(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentVolume(AFortVolume* InVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode);
    
};

