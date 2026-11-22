#include "FortPlaylist.h"

UFortPlaylist::UFortPlaylist() {
    this->PlaylistId = 0;
    this->GameType = EFortGameType::MAX;
    this->MinPlayers = 20;
    this->MaxPlayers = 0;
    this->bUnderfillMatchmaking = false;
    this->UnderfilledMaxPlayers = 0;
    this->bOverrideMaxPlayers = false;
    this->MaxHumanAndBotParticipants = -1;
    this->MaxTeamCount = 0;
    this->MaxTeamSize = 0;
    this->MaxSocialPartySize = 16;
    this->MaxSquadSize = 0;
    this->MaxSquads = -1;
    this->EnforceSquadFill = false;
    this->bAllowSquadFillOption = true;
    this->bShouldFillWhenNoSquadFillOption = false;
    this->bAllowJoinInProgress = false;
    this->EndOfMatchXpFirstElim = 50;
    this->EndOfMatchXpMultiplier = 20;
    this->UserOptions = NULL;
    this->bEnableBackfillDuringWarmupPhase = true;
    this->TimeAfterWarmupToDisableBackfill = 5.00f;
    this->bAllowKeepPlayingTogether = true;
    this->bAllowSquadSizeTracking = true;
    this->RootExternalContent = NULL;
    this->DefaultFirstTeam = 1;
    this->DefaultLastTeam = 1;
    this->FriendlyFireType = EFriendlyFireType::Off;
    this->bUseFriendlyFireAimAssist = false;
    this->LootLevel = 1;
    this->BuildingLevelOverride = 0;
    this->DBNOType = EDBNOType::On;
    this->bIgnoreWeatherEvents = false;
    this->SharedAssetGroup = NULL;
    this->ConditionalAssetGroup = NULL;
    this->bIsDefaultPlaylist = false;
    this->GarbageCollectionFrequency = 0.00f;
    this->ServerPerformanceEventFrequency = 0.00f;
    this->ServerMetricsEventFrequency = 60.00f;
    this->bUseLocalizationService = false;
}


