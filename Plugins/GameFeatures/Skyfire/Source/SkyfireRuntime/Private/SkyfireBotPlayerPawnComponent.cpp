#include "SkyfireBotPlayerPawnComponent.h"

USkyfireBotPlayerPawnComponent::USkyfireBotPlayerPawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeashRadius = 10000.00f;
    this->BehaviorTree = NULL;
    this->InPrisonKeyName = TEXT("AIEvaluator_Skyfire_InPrison");
    this->InGameplayKeyName = TEXT("AIEvaluator_Skyfire_InGameplay");
    this->InLootRoomKeyName = TEXT("AIEvaluator_Skyfire_InLootRoom");
    this->bHasEnteredLootRoom = false;
    this->PreviousBehaviorTree = NULL;
}

void USkyfireBotPlayerPawnComponent::OnSkyfirePhaseChanged(const ESkyfirePhase NewPhase) {
}


