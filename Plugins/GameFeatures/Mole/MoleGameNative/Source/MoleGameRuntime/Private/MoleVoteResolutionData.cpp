#include "MoleVoteResolutionData.h"

FMoleVoteResolutionData::FMoleVoteResolutionData() {
    this->VoteType = EVoteType::None;
    this->EjectedPlayer = NULL;
    this->EjectedPlayerItemDefinition = NULL;
    this->Votes = 0;
    this->bIsEnemy = false;
    this->bSkippedDueToEqualVotesAndSkips = false;
}

