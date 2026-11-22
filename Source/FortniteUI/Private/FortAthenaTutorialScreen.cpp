#include "FortAthenaTutorialScreen.h"

UFortAthenaTutorialScreen::UFortAthenaTutorialScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->bLimitedDisplayDuration = false;
    this->DisplayDuration = -1.00f;
    this->Interaction_TutorialStep = NULL;
    this->InteractionRegular_TutorialStep = NULL;
    this->MoveableHighlight = NULL;
    this->MoveableHighlight_Regular = NULL;
    this->Switcher = NULL;
}


void UFortAthenaTutorialScreen::SkipGuidedTutorial() {
}



void UFortAthenaTutorialScreen::BroadcastTutorialPopupCanceled() {
}


