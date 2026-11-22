#include "MolePlayerTaskManagementComponent.h"
#include "Net/UnrealNetwork.h"

UMolePlayerTaskManagementComponent::UMolePlayerTaskManagementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ActiveTaskInputComponent = NULL;
    this->bTasksDisabledBySabotage = false;
    this->EnemyTrackingTargetingPreset = NULL;
    this->BestEnemyTarget = NULL;
}

void UMolePlayerTaskManagementComponent::ServerTaskObjectInteractEvent_Implementation(FEventMessageTag EventMessageTag, const FTaskGenericPayload& Payload) {
}
bool UMolePlayerTaskManagementComponent::ServerTaskObjectInteractEvent_Validate(FEventMessageTag EventMessageTag, const FTaskGenericPayload& Payload) {
    return true;
}

void UMolePlayerTaskManagementComponent::ServerRequestCancelPrimaryActiveTask_Implementation() {
}
bool UMolePlayerTaskManagementComponent::ServerRequestCancelPrimaryActiveTask_Validate() {
    return true;
}

void UMolePlayerTaskManagementComponent::OnLeashActorEndOverlap(AActor* OriginatingActor, AActor* ActorEndingOverlap) {
}

void UMolePlayerTaskManagementComponent::OnCompletedTaskAdded(const FMoleCompletedTask& InAddedCompletedTask) {
}

int32 UMolePlayerTaskManagementComponent::GetNumCompletedTasks() const {
    return 0;
}

void UMolePlayerTaskManagementComponent::CompleteTaskForGameplayState(UGameplayState* State) {
}

void UMolePlayerTaskManagementComponent::ClientTasksInterrupted_Implementation(const TArray<UMoleTaskDataAsset*>& TasksInterrupted, EMoleTaskInterruptionType InterruptionType) {
}

void UMolePlayerTaskManagementComponent::ClientSetPrimaryActiveTask_Implementation(FMoleActiveTaskStateHandle NewPrimaryHandle) {
}

void UMolePlayerTaskManagementComponent::ClientAllTasksInterrupted_Implementation(EMoleTaskInterruptionType InterruptionType) {
}

void UMolePlayerTaskManagementComponent::ClientAllTasksEnabled_Implementation() {
}

void UMolePlayerTaskManagementComponent::ClientAdvanceLogicThroughPhases_Implementation(UMoleTaskLogic* Logic, const TArray<int32>& AdvancedPhases) {
}

bool UMolePlayerTaskManagementComponent::BlueprintServerTaskObjectInteractEvent(AController* User, FEventMessageTag EventMessageTag, const FTaskGenericPayload& Payload) {
    return false;
}

void UMolePlayerTaskManagementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMolePlayerTaskManagementComponent, MoleActiveTaskStateArray);
    DOREPLIFETIME(UMolePlayerTaskManagementComponent, MoleCompletedTaskArray);
}


