#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "HUDElementVisibilityRepData.h"
#include "FortAthenaMutator_HUDElementVisibility.generated.h"

class AFortMinigame;
class AFortVolume;
class APlayerState;
class UFortPlaysetItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaMutator_HUDElementVisibility : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HUDVisibiliyModifierChanged, meta=(AllowPrivateAccess=true))
    FHUDElementVisibilityRepData HUDElementVisbilityData;
    
public:
    AFortAthenaMutator_HUDElementVisibility(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnVolumePlaysetChanged(const UFortPlaysetItemDefinition* PlaysetItemDef);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HUDVisibiliyModifierChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameSetUp(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeLinkedVolumeChangedForPC(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnteredVolume(APlayerState* Client, AFortVolume* Volume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumePlaysetChanged(const UFortPlaysetItemDefinition* PlaysetItemDef);
    
};

