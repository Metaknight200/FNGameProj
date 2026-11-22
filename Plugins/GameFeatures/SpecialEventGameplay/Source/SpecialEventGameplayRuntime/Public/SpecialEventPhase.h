#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESpecialEventPhaseState.h"
#include "Templates/SubclassOf.h"
#include "SpecialEventPhase.generated.h"

class UCameraModifier;
class UGameplayEffect;

UCLASS(Blueprintable)
class ASpecialEventPhase : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PhaseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier> CameraModifierToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveModifierOnPhaseDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier* AppliedCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PhaseState, meta=(AllowPrivateAccess=true))
    ESpecialEventPhaseState PhaseState;
    
public:
    ASpecialEventPhase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrePhaseActivation_Server();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhaseState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPhaseFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseDeactivation_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseDeactivation_Client();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseActivation_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseActivation_Client();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPhaseTag() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DebugActivatePhase();
    
};

