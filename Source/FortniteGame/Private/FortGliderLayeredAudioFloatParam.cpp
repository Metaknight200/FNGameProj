#include "FortGliderLayeredAudioFloatParam.h"

FFortGliderLayeredAudioFloatParam::FFortGliderLayeredAudioFloatParam() {
    this->InterpType = ELayeredAudioInterpolationType::None;
    this->Curve = NULL;
    this->AttackSpeed = 0.00f;
    this->ReleaseSpeed = 0.00f;
}

