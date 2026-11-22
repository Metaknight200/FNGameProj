#include "MoleTaskLogicSubobject.h"
#include "Net/UnrealNetwork.h"

UMoleTaskLogicSubobject::UMoleTaskLogicSubobject() {
    this->AssociatedActorRemovalPolicyBitmask = 15;
    this->bUsesAssociatedTaskActors = false;
    this->bReplicates = false;
}

void UMoleTaskLogicSubobject::OnTaskRemoved_Implementation() {
}

void UMoleTaskLogicSubobject::OnTaskExternalInterruption_Implementation(EMoleTaskInterruptionType InterruptionType) {
}

void UMoleTaskLogicSubobject::OnOwningTaskNoLongerPrimaryActiveTask_Implementation(bool bIsActivePhase) {
}

void UMoleTaskLogicSubobject::OnOwningTaskBecomePrimaryActiveTask_Implementation(bool bIsActivePhase) {
}

void UMoleTaskLogicSubobject::OnExitOwningPhase_Implementation() {
}

void UMoleTaskLogicSubobject::OnEnterOwningPhase_Implementation() {
}

void UMoleTaskLogicSubobject::OnAssociatedTaskActorsPendingRemoval_Implementation(const TArray<AActor*>& InPendingRemovalTaskActors) {
}

void UMoleTaskLogicSubobject::OnAssociatedTaskActorsAdded_Implementation(const TArray<AActor*>& InNewlyAddedTaskActors) {
}

UMolePlayerTaskManagementComponent* UMoleTaskLogicSubobject::GetOwningPlayerTaskComponent() const {
    return NULL;
}

AController* UMoleTaskLogicSubobject::GetOwningController() const {
    return NULL;
}

TEnumAsByte<ENetRole> UMoleTaskLogicSubobject::GetOwnerRole() const {
    return ROLE_None;
}

TArray<AActor*> UMoleTaskLogicSubobject::GetAssociatedTaskActors() const {
    return TArray<AActor*>();
}

void UMoleTaskLogicSubobject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleTaskLogicSubobject, bReplicates);
}


