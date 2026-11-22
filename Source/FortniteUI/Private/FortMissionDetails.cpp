#include "FortMissionDetails.h"

FFortMissionDetails::FFortMissionDetails() {
    // Initialize reflected value fields omitted by the dump.
    this->AvailableTime = FTimespan::Zero();
    this->TileType = EFortTheaterMapTileType::Normal;
    this->bIsGroupContent = false;
    this->MissionDefinition = NULL;
    this->RatingsEnforcement = ERatingsEnforcementType::Default;
    this->RequiredBaseRating = 0;
    this->RecommendedBaseRating = 0;
    this->MaxBaseRating = 0;
    this->ContentDifficultyLevel = 0;
    this->bIsOnboarding = false;
    this->LootLevel = 0;
    this->bOverrideConningText = false;
    this->AssociatedCloudSaveItemDefinition = NULL;
}

