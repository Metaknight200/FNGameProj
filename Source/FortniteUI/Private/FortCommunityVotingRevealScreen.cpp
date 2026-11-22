#include "FortCommunityVotingRevealScreen.h"

UFortCommunityVotingRevealScreen::UFortCommunityVotingRevealScreen() {
    this->MaxRevealPlayRate = 1.20f;
    this->MinRevealPlayRate = 1.00f;
    this->VotingManager = NULL;
    this->WinnerOption = NULL;
    this->WinnerOfferInfo = NULL;
    this->EntryBox_Options = NULL;
    this->Button_Close = NULL;
    this->Button_Detail = NULL;
    this->RichText_ItemReturns = NULL;
    this->BorderRarityColored = NULL;
    this->ComOptionRevealWinner = NULL;
}




void UFortCommunityVotingRevealScreen::HandleDetailButtonClicked() {
}

void UFortCommunityVotingRevealScreen::HandleCloseButtonClicked() {
}

void UFortCommunityVotingRevealScreen::Dismiss() {
}


