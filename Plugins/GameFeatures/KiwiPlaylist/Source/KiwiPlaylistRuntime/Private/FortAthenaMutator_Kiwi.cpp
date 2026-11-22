#include "FortAthenaMutator_Kiwi.h"
#include "KiwiControllerComponent.h"

AFortAthenaMutator_Kiwi::AFortAthenaMutator_Kiwi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KiwiControllerComponentClass = UKiwiControllerComponent::StaticClass();
    this->KiwiPawnComponentClass = NULL;
    this->MannequinRecentlyRenderedCheckToleranceValue = 8.00f;
    this->NevadaVehicleRecentlyRenderedCheckToleranceValue = 1.00f;
    this->bDisableParachutes = true;
    this->bAllowGameplayCueRecycleSettingChanges = false;
    this->GameplayCueActorRecycleConsoleVariableName = TEXT("AbilitySystem.GameplayCueActorRecycle");
    this->LocalVOManagerActor = NULL;
    this->KiwiSequenceActor = NULL;
}

void AFortAthenaMutator_Kiwi::SetKiwiSequenceActor(ALevelSequenceActor* SequenceActor) {
}

bool AFortAthenaMutator_Kiwi::SetEnabledGameplayCueRecycling(const bool bEnable) {
    return false;
}

void AFortAthenaMutator_Kiwi::SetActiveTimeOfDayManagerByTag(const FGameplayTag Tag) {
}

void AFortAthenaMutator_Kiwi::RegisterPrisonAlienPatrolSequenceActor(ALevelSequenceActor* LevelSequenceActor) {
}

void AFortAthenaMutator_Kiwi::RegisterKiwiNevadaVehicle(ASkeletalMeshActor* NevadaVehicle) {
}

void AFortAthenaMutator_Kiwi::RegisterKiwiMannequin(AFortPlayerMannequin* Mannequin) {
}

void AFortAthenaMutator_Kiwi::RegisterKiwiLocalVOManagerActor(AActor* InManager) {
}

void AFortAthenaMutator_Kiwi::HandlePlayerOnDisconnectedChanged(AFortPlayerStateAthena* PlayerState, const bool bIsDisconnected) {
}

void AFortAthenaMutator_Kiwi::HandleKiwiNevadaVehicleDestroyed(AActor* NevadaVehicleActor) {
}

void AFortAthenaMutator_Kiwi::HandleKiwiMannequinDestroyed(AActor* MannequinActor) {
}

TArray<ALevelSequenceActor*> AFortAthenaMutator_Kiwi::GetRegisteredPrisonAlienPatrolSequenceActors() const {
    return TArray<ALevelSequenceActor*>();
}

TArray<ASkeletalMeshActor*> AFortAthenaMutator_Kiwi::GetRegisteredKiwiNevadaVehicles() const {
    return TArray<ASkeletalMeshActor*>();
}

TArray<AFortPlayerMannequin*> AFortAthenaMutator_Kiwi::GetRegisteredKiwiMannequins() const {
    return TArray<AFortPlayerMannequin*>();
}

ALevelSequenceActor* AFortAthenaMutator_Kiwi::GetKiwiSequenceActor() const {
    return KiwiSequenceActor;
}

AActor* AFortAthenaMutator_Kiwi::GetKiwiLocalVOManagerActor() const {
    return NULL;
}

void AFortAthenaMutator_Kiwi::BeginAsyncLoadOfItem(const UFortItemDefinition* ItemToLoad) {
}


