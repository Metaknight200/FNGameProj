#include "FortAthenaMutator_StormVehicleHelper.h"

AFortAthenaMutator_StormVehicleHelper::AFortAthenaMutator_StormVehicleHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->EventName = TEXT("FSGA01");
    this->WallHeight = 15850.00f;
}

void AFortAthenaMutator_StormVehicleHelper::OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}


