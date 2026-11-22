#include "FortCinematicState.h"

FFortCinematicState::FFortCinematicState() {
    this->bSequenceStarted = false;
    this->SequenceDuration = 0.00f;
    this->IntroFadeInBlackscreenTime = 0.00f;
    this->IntroFadeOutBlackscreenTime = 0.00f;
    this->OutroFadeOutBlackscreenTime = 0.00f;
}

