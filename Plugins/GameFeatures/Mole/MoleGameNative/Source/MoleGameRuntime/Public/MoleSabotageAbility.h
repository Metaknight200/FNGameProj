#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "EventMessageTag.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMoleSabotageInterruptionType.h"
#include "MoleSabotageAbility.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class UMoleSabotageAbility : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SabotageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CooldownTagsToListenTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CombinedCooldownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleSabotageInterruptionType InterruptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventMessageTag SabotageEventMessageTag;
    
public:
    UMoleSabotageAbility();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RevertSabotageForPlayer(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSabotageResumedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSabotageInterruptedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoleSabotageInterruptionType GetInterruptionType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAllValidSabotageTargets(TArray<APlayerState*>& OutValidTargets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAllSaboteurs(TArray<APlayerState*>& OutAllSaboteurs) const;
    
};

