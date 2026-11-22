#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameplayTagContainer.h"
#include "PhaseInfo.h"
#include "SpecialEventScript.generated.h"

class ALevelSequenceActor;
class UMeshNetworkComponent;

UCLASS(Blueprintable, Config=Game)
class ASpecialEventScript : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseInfo> PhaseInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* MasterSequence;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameFeaturesToRemove;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropDeadWindowSizeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterConentLoad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterWarmup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceReturnToMainMenuTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceReturnToMainMenuTimeRandomness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayReturnToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayReturnToMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedActivePhaseIndex, meta=(AllowPrivateAccess=true))
    int32 ReplicatedActivePhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshNetworkComponent* MeshNetworkComponent;
    
public:
    ASpecialEventScript(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMasterSequence(float Time);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartEventAtIndex(int32 InStartingIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedActivePhaseIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnScriptReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnScriptFinished();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttemptFinishPhase(FGameplayTag PhaseTag);
    
};

