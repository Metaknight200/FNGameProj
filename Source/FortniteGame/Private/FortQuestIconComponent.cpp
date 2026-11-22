#include "FortQuestIconComponent.h"

UFortQuestIconComponent::UFortQuestIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bControlVisibilityFromOwnerQuestObjectiveState = true;
    this->bInteractiveStateRequiredForVisibility = false;
    this->ExplicitInteractionTypeToTest = IT_NoInteraction;
}

void UFortQuestIconComponent::SetVisibility(const bool bVisible) {
}

void UFortQuestIconComponent::SetViewDistanceRadius(const float ViewDistance) {
}

void UFortQuestIconComponent::SetIconVisibilityOnMiniMap(const bool bVisible) {
}

void UFortQuestIconComponent::SetIconVisibilityOnMap(const bool bVisible) {
}

void UFortQuestIconComponent::SetIconScale(const FVector2D& IconScale) {
}

void UFortQuestIconComponent::SetIconLocationOffset(const FVector& LocationOffset) {
}

void UFortQuestIconComponent::SetIcon(UObject* MiniMapIcon) {
}

void UFortQuestIconComponent::PerformVisibilityDistanceCheck() {
}

void UFortQuestIconComponent::OnOwnerQuestReady(AFortPlayerController* PlayerController) {
}

void UFortQuestIconComponent::OnOwnerQuestNotReady(AFortPlayerController* PlayerController) {
}

void UFortQuestIconComponent::OnOwnerCustomUpdateObjective(AFortPlayerController* PlayerController, int32 AchievedCount, int32 RequiredCount) {
}


