#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayState.generated.h"

class AActor;
class UGameplayState;
class UGameplayStateMachine;
class UGameplayStateMachineManager;
class UGameplayStateMachineSubsystem;

UCLASS(Abstract, Blueprintable)
class GAMEPLAYSTATEMACHINE_API UGameplayState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StateRuntimeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEvaluateTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStateBegun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStateEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitializationServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BeginStateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachine* CachedGameplayStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachineManager* CachedStateMachineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachineSubsystem* CachedStateMachineSubSystem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayState* Hack_StateToDelayProcess;
    
    UGameplayState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStateEventServer(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStateEventClient(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStateEvent(const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveStateRuntimeTag(const FGameplayTag& RemovedTag);
    
    UFUNCTION(BlueprintCallable)
    void MarkStateToEvaluateTransitions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeStateEventServer(const FGameplayTag& PrevStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeStateEventClient(const FGameplayTag& PrevStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeStateEvent(const FGameplayTag& PrevStateId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasStateRuntimeTag(const FGameplayTag& QueryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetStateRuntimeTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStateId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayStateMachine* GetGameplayStateMachine() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndStateEventServer(const FGameplayTag& NextStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndStateEventClient(const FGameplayTag& NextStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndStateEvent(const FGameplayTag& NextStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginStateEventServer(const FGameplayTag& PrevStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginStateEventClient(const FGameplayTag& PrevStateId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginStateEvent(const FGameplayTag& PrevStateId);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStateRuntimeTag(const FGameplayTag& AddedTag);
    
};

