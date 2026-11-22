#include "FortCountdownSounds.h"

FFortCountdownSounds::FFortCountdownSounds() {
    this->Sound = NULL;
    this->StartTime = 0;
    this->StopTime = 0;
    this->FadeoutTime = 0.00f;
    this->bPlayed = false;
    this->PlayInstance = NULL;
}

