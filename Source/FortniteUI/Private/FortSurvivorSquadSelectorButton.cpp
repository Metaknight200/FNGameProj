#include "FortSurvivorSquadSelectorButton.h"

UFortSurvivorSquadSelectorButton::UFortSurvivorSquadSelectorButton() {
}

bool UFortSurvivorSquadSelectorButton::TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats) {
    return false;
}

bool UFortSurvivorSquadSelectorButton::TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers) {
    return false;
}

bool UFortSurvivorSquadSelectorButton::TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches) {
    return false;
}


