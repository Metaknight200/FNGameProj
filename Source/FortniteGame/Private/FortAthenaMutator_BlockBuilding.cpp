#include "FortAthenaMutator_BlockBuilding.h"

AFortAthenaMutator_BlockBuilding::AFortAthenaMutator_BlockBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->AllowBuilding = EBuildingMode::All;
}

FGameplayTagContainer AFortAthenaMutator_BlockBuilding::GetHUDVisibilityTags_Implementation() const {
    return FGameplayTagContainer{};
}


