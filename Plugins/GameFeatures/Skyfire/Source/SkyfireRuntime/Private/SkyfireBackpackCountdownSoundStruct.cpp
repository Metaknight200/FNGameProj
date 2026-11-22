#include "SkyfireBackpackCountdownSoundStruct.h"

FSkyfireBackpackCountdownSoundStruct::FSkyfireBackpackCountdownSoundStruct() {
    this->AudioPhase = ESkyfireBackpackAudioPhase::Prison;
    this->TriggerTime = 0;
    this->bIsLooping = false;
    this->StopTime = 0;
    this->FadeoutTime = 0.00f;
    this->SoundsAsset3P = NULL;
    this->SoundAsset1P = NULL;
    this->PlayInstance = NULL;
}

