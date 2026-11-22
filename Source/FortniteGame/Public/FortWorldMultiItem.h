#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "FortWorldItem.h"
#include "FortWorldMultiItem.generated.h"

class UFortGameplayAbility;

UCLASS(Blueprintable)
class UFortWorldMultiItem : public UFortWorldItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeToSwitchHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeToEndSwitchHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeToRetrySwitchHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeToReenableEquipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeOfLastSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWantsToSwitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTellHasBegun: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableEquipAnimationThisFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentItemXP;
    
public:
    UFortWorldMultiItem();

private:
    UFUNCTION(BlueprintCallable)
    void StopDisablingEquipAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPlayerPawnAbilityEndedWithData(const FAbilityEndedData& AbilityEndedData);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPlayerPawnAbilityActivated(UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncrementItemXP(float IncrementAmount);
    
};

