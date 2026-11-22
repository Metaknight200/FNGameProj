#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator_WeaponSettings.h"
#include "FortAthenaMutator_CreativeWeaponSettings.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable)
class AFortAthenaMutator_CreativeWeaponSettings : public AFortAthenaMutator_WeaponSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId EmptyHandsWeaponAssetId;
    
public:
    AFortAthenaMutator_CreativeWeaponSettings(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterVolume(APlayerState* Client, AFortVolume* Volume);
    
};

