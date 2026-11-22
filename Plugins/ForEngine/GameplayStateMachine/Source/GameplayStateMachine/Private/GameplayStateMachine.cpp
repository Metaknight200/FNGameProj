#include "GameplayStateMachine.h"
#include "Net/UnrealNetwork.h"

UGameplayStateMachine::UGameplayStateMachine() {
    this->bPubliclyBroadcast = false;
    this->bPersistDelegatesOnUnregistration = false;
}

void UGameplayStateMachine::SetState(const FGameplayTag& InStateId, float InBeginStateDelay) {
}

void UGameplayStateMachine::OnRep_ActiveGameplayStateData() {
}

FGameplayTag UGameplayStateMachine::GetStateMachineId() const {
    return FGameplayTag{};
}

UGameplayState* UGameplayStateMachine::GetActiveStateObject() const {
    return NULL;
}

FGameplayTag UGameplayStateMachine::GetActiveStateId() const {
    return FGameplayTag{};
}

void UGameplayStateMachine::EvaluateStateTransition_Implementation() {
}

void UGameplayStateMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayStateMachine, StateMachineId);
    DOREPLIFETIME(UGameplayStateMachine, ActiveGameplayStateData);
}


