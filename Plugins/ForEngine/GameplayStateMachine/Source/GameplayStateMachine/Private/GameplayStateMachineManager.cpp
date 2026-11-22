#include "GameplayStateMachineManager.h"
#include "Net/UnrealNetwork.h"

UGameplayStateMachineManager::UGameplayStateMachineManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UGameplayStateMachineManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayStateMachineManager, StateMachineList);
}


