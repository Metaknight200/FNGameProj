#include "FortFocusedBuildingInfo.h"

FFortFocusedBuildingInfo::FFortFocusedBuildingInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->IndicatorRelativeLocation = FVector::ZeroVector;
    this->bIsInteractable = false;
    this->bCanBePlayerEdited = false;
    this->HealthDisplayRule = EFortBuildingHealthDisplayRule::Never;
    this->MaxHealth = 0.00f;
    this->bIsAnyTrapAttached = false;
    this->bIsTrapAttachedFacingPlayer = false;
    this->bIsPreviewTrapAttached = false;
    this->AttachedTrapMaxDurability = 0.00f;
    this->InteractionType = EFortBuildingInteraction::None;
    this->InteractionCost = 0;
    this->BuildingMaterial = EFortResourceType::Wood;
    this->bIsPlayerBuilt = false;
}

