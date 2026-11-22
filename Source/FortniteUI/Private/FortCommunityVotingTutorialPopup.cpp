#include "FortCommunityVotingTutorialPopup.h"

UFortCommunityVotingTutorialPopup::UFortCommunityVotingTutorialPopup() {
    this->NumberOfSlide = 3;
    this->DelayBetweenSlide = 10.00f;
    this->DelayOutAnimation = 0.20f;
    this->Button_NextStep = NULL;
    this->Button_Close = NULL;
    this->Buttons_Switcher = NULL;
}




void UFortCommunityVotingTutorialPopup::OnSlideAnimationFinished() {
}

void UFortCommunityVotingTutorialPopup::CloseTutorial() {
}


