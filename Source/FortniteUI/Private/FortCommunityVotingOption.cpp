#include "FortCommunityVotingOption.h"

UFortCommunityVotingOption::UFortCommunityVotingOption() {
    this->VotingManager = NULL;
    this->PreviewDetailWidgetClass = NULL;
    this->ComOptionVote = NULL;
    this->ComOptionDetails = NULL;
    this->FlameCounter = NULL;
    this->VoteFeedbackClass = NULL;
    this->ComOptionPreview = NULL;
    this->ComVoteFeedbackContainer = NULL;
}

bool UFortCommunityVotingOption::HaveVotesRemaining() {
    return false;
}




