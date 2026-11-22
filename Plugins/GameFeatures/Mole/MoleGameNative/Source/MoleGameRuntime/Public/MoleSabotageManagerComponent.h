#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAbilitySetHandle.h"
#include "GameplayAbilitySpec.h"
#include "EventMessageTag.h"
#include "GameplayTagContainer.h"
#include "PlayspaceComponent.h"
#include "MoleLightingMode.h"
#include "MoleSabotageStatus.h"
#include "MoleTimerInfo.h"
#include "Templates/SubclassOf.h"
#include "MoleSabotageManagerComponent.generated.h"

class APlayerState;
class UFortAbilitySet;
class UGameplayEffect;
class UMoleSabotageAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleSabotageManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RoundStartCooldownEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RoundStartCooldownEffectForElimination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AfterUseCooldownEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* SaboteurAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, FFortAbilitySetHandle> SaboteurAbilitySetHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, FGuid> SaboteurAbilitySetInputGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> ActiveSabotageHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEventMessageTag> SabotageToEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSabotageStatus, meta=(AllowPrivateAccess=true))
    FMoleSabotageStatus CurrentSabotageStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveSabotageTimerInfo, meta=(AllowPrivateAccess=true))
    FMoleTimerInfo ActiveSabotageTimerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLightingMode, meta=(AllowPrivateAccess=true))
    FMoleLightingMode CurrentLightingMode;
    
public:
    UMoleSabotageManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void SendMoleSabotageTimerStartedEvent(const UMoleSabotageAbility* SabotageAbility, const FMoleTimerInfo& TimerInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SendMoleLightingModeChangeEvent(const UMoleSabotageAbility* SabotageAbility, const FMoleLightingMode& LightingMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSabotageStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLightingMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveSabotageTimerInfo();
    
};

