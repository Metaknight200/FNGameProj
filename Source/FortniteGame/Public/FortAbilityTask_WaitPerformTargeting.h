#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "WaitPerformTargetingDelegateDelegate.h"
#include "FortAbilityTask_WaitPerformTargeting.generated.h"

class AActor;
class UFortAbilityTask_WaitPerformTargeting;
class UGameplayAbility;
class UTargetingPreset;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_WaitPerformTargeting : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitPerformTargetingDelegate Targeted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitPerformTargetingDelegate Cancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTargetingPreset* TargetingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InitialTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceTargetingOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAsyncTargeting: 1;
    
public:
    UFortAbilityTask_WaitPerformTargeting();

    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_WaitPerformTargeting* WaitPerformTargetingWithTargets(UGameplayAbility* OwningAbility, FName TaskInstanceName, UTargetingPreset* NewTargetingPreset, bool NewBForceTargetingOnServer, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_WaitPerformTargeting* WaitPerformTargeting(UGameplayAbility* OwningAbility, FName TaskInstanceName, UTargetingPreset* NewTargetingPreset, bool NewBForceTargetingOnServer, bool NewBUseAsyncTargeting);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback();
    
};

