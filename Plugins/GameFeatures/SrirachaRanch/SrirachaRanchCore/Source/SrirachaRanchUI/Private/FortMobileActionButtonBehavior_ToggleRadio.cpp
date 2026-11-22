#include "FortMobileActionButtonBehavior_ToggleRadio.h"

UFortMobileActionButtonBehavior_ToggleRadio::UFortMobileActionButtonBehavior_ToggleRadio() {
    this->ToggleRadioOffSprite = NULL;
}

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source) {
}

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source) {
}


