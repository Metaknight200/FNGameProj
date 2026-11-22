#include "FortCompetitiveLeaderboardScreen.h"

UFortCompetitiveLeaderboardScreen::UFortCompetitiveLeaderboardScreen() {
    this->TimeDelayToShowDetails = 0.25f;
    this->MyEntryData = NULL;
    this->EntryToShowDetails = NULL;
    this->ActivatableContent_LeaderboardTab = NULL;
}

void UFortCompetitiveLeaderboardScreen::SetEvent(const FString& EventId, const FString& EventWindowId) {
}

void UFortCompetitiveLeaderboardScreen::RequestNextPage() {
}



void UFortCompetitiveLeaderboardScreen::HandleLeaderboardSetInView() {
}

UFortEventLeaderboardEntryData* UFortCompetitiveLeaderboardScreen::GetMyLeaderboardEntry() {
    return NULL;
}


