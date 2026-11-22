#include "MinigameScoreEntry.h"

FMinigameScoreEntry::FMinigameScoreEntry() {
    // Initialize reflected value fields omitted by the dump.
    this->TimeRecorded = FDateTime(0);
    this->Score = 0.00f;
    this->bHasScore = false;
}

