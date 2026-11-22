#include "FortLayeredAudioFloatParam.h"

FFortLayeredAudioFloatParam::FFortLayeredAudioFloatParam() {
    // Initialize reflected value fields omitted by the dump.
    this->ParamRange = FVector2D::ZeroVector;
    this->bEnabled = false;
    this->Value = 0.00f;
    this->InterpType = ELayeredAudioInterpolationType::None;
    this->Curve = NULL;
    this->AttackSpeed = 0.00f;
    this->ReleaseSpeed = 0.00f;
    this->Owner = NULL;
}

