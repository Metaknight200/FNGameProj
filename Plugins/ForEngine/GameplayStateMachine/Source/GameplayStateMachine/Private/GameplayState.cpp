#include "GameplayState.h"
#include "Net/UnrealNetwork.h"

UGameplayState::UGameplayState() {
    this->bEvaluateTransition = false;
    this->bReplicates = false;
    this->bStateBegun = false;
    this->bStateEnded = false;
    this->InitializationServerTime = -1.00f;
    this->BeginStateDelay = 0.00f;
    this->CachedGameplayStateMachine = NULL;
    this->CachedStateMachineManager = NULL;
    this->CachedStateMachineSubSystem = NULL;
    this->Hack_StateToDelayProcess = NULL;
}




void UGameplayState::RemoveStateRuntimeTag(const FGameplayTag& RemovedTag) {
}

void UGameplayState::MarkStateToEvaluateTransitions() {
}




bool UGameplayState::HasStateRuntimeTag(const FGameplayTag& QueryTag) {
    return false;
}

bool UGameplayState::HasAuthority() const {
    return false;
}

FGameplayTagContainer UGameplayState::GetStateRuntimeTags() const {
    return FGameplayTagContainer{};
}

FGameplayTag UGameplayState::GetStateId() const {
    return FGameplayTag{};
}

AActor* UGameplayState::GetOwningActor() const {
    return NULL;
}

UGameplayStateMachine* UGameplayState::GetGameplayStateMachine() const {
    return NULL;
}







void UGameplayState::AddStateRuntimeTag(const FGameplayTag& AddedTag) {
}

void UGameplayState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayState, StateId);
}


