#include "FortPostGameScreen.h"

UFortPostGameScreen::UFortPostGameScreen() {
    this->bCanGoBackToThisScreen = true;
}

void UFortPostGameScreen::GoToPreviousScreen() {
}

void UFortPostGameScreen::GoToNextScreen() {
}

bool UFortPostGameScreen::BP_ShouldDisplay_Implementation() {
    return false;
}

void UFortPostGameScreen::BP_OnToggleBlurRequest() {
}


