#include "MoleTaskManagerComponent.h"
#include "Net/UnrealNetwork.h"

UMoleTaskManagerComponent::UMoleTaskManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->StartOfInUseTasksIdx = -1;
}

void UMoleTaskManagerComponent::OnRep_ScoreData() {
}

void UMoleTaskManagerComponent::OnRep_AvailableTaskList() {
}

TArray<AActor*> UMoleTaskManagerComponent::GetTaskActorsMatchingGameplayTagContainer(const UObject* WorldContextObject, FGameplayTagContainer TaskTagContainer) {
    return TArray<AActor*>();
}

TArray<AActor*> UMoleTaskManagerComponent::GetTaskActorsMatchingGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskRootTag) {
    return TArray<AActor*>();
}

AActor* UMoleTaskManagerComponent::GetTaskActorForGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskTag) {
    return NULL;
}

TArray<UMoleTaskLinkComponent*> UMoleTaskManagerComponent::GetTaskActorComponentsMatchingGameplayTagContainer(const UObject* WorldContextObject, FGameplayTagContainer TaskTagContainer) {
    return TArray<UMoleTaskLinkComponent*>();
}

TArray<UMoleTaskLinkComponent*> UMoleTaskManagerComponent::GetTaskActorComponentsMatchingGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskRootTag) {
    return TArray<UMoleTaskLinkComponent*>();
}

UMoleTaskLinkComponent* UMoleTaskManagerComponent::GetTaskActorComponentForGameplayTag(const UObject* WorldContextObject, FGameplayTag TaskTag) {
    return NULL;
}

float UMoleTaskManagerComponent::GetMoleScoreGoal(const UObject* WorldContextObject) {
    return 0.0f;
}

float UMoleTaskManagerComponent::GetMoleCurrentScore(const UObject* WorldContextObject) {
    return 0.0f;
}

void UMoleTaskManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleTaskManagerComponent, AvailableTaskList);
    DOREPLIFETIME(UMoleTaskManagerComponent, ScoreData);
}


