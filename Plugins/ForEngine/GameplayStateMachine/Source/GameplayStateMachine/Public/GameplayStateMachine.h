#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayStateData.h"
#include "GameplayState.h"
#include "GameplayStateSettings.h"
#include "GameplayStateMachine.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYSTATEMACHINE_API UGameplayStateMachine : public UGameplayState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPubliclyBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistDelegatesOnUnregistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag StateMachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveGameplayStateData, meta=(AllowPrivateAccess=true))
    FActiveGameplayStateData ActiveGameplayStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayStateSettings> GameplayStateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InitialGameplayStateId;
    
public:
    UGameplayStateMachine();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetState(const FGameplayTag& InStateId, float InBeginStateDelay);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveGameplayStateData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStateMachineId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayState* GetActiveStateObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActiveStateId() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateStateTransition();
    
};

