#include "FortGliderLayeredAudioOneshotGate.h"

FFortGliderLayeredAudioOneshotGate::FFortGliderLayeredAudioOneshotGate() {
    this->GateValue = 0.00f;
    this->Direction = ELayeredAudioTriggerDir::Forward;
    this->FadeWhenOutsideGate = false;
    this->MinTimeSinceTrigger = 0.00f;
    this->InterruptFadeTime = 0.00f;
}

