#include "AthenaMapIconsOverlay.h"

UAthenaMapIconsOverlay::UAthenaMapIconsOverlay() {
    this->AthenaMapNavigableIconSingleChallengeClass = NULL;
    this->AthenaMapNavigableIconStackOfChallengesClass = NULL;
    this->AthenaMapNavigableIconStackOfNoLocationChallengesClass = NULL;
    this->bShowNoLocationIcon = true;
    this->bAllowFocusControl = false;
    this->ChallengeIndicatorCache = NULL;
}


