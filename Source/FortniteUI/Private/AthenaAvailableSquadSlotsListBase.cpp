#include "AthenaAvailableSquadSlotsListBase.h"

UAthenaAvailableSquadSlotsListBase::UAthenaAvailableSquadSlotsListBase() {
    this->MaxNumberOfAvailableSquadSlots = 3;
    this->bAlwaysDisplayTopEntryAsDetailed = false;
    this->EntryBox_AvailableSlotsList = NULL;
    this->CachedPlayerVM = NULL;
}

void UAthenaAvailableSquadSlotsListBase::UpdateSquadFromMinigameOptionChange() {
}

void UAthenaAvailableSquadSlotsListBase::UpdateIsTeamMiniGameOnMinigameVolumeChanged(AFortVolume* Volume) {
}

void UAthenaAvailableSquadSlotsListBase::UpdateIsTeamMiniGameOnGameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}


void UAthenaAvailableSquadSlotsListBase::HandlePlayerUniqueIdReplicated(const FUniqueNetIdRepl& UniqueId) {
}

void UAthenaAvailableSquadSlotsListBase::HandlePlayerExitVolume(APlayerState* ClientPlayerState, AFortVolume* Volume) {
}

void UAthenaAvailableSquadSlotsListBase::HandlePlayerEnterVolume(APlayerState* ClientPlayerState, AFortVolume* Volume) {
}

void UAthenaAvailableSquadSlotsListBase::HandleGameMemberChanged(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS) {
}


