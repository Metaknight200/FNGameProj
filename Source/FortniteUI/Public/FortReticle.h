#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameState.h"
#include "FortHUDElementWidget.h"
#include "FortReticle.generated.h"

class AFortMinigame;
class AFortVolume;
class AFortWeapon;
class APlayerState;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UFortReticle : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReticleWeaponCooldownMI;
    
public:
    UFortReticle();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnReticleColorChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSet();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
    UFUNCTION(BlueprintCallable)
    void OnContextualReticleChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnteredVolume(APlayerState* PS, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponChanged();
    
};

