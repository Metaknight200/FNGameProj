#include "VoteData.h"

FVoteData::FVoteData() {
    this->VoteType = EFortVoteType::SurvivalVote;
    this->VoteStartTime = 0.00f;
    this->VoteEndTime = 0.00f;
    this->NumVotersWithMaxVotes = 0;
    this->VoteStatus = EFortVoteStatus::Begin;
}

