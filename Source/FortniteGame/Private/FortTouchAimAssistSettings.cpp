#include "FortTouchAimAssistSettings.h"

FFortTouchAimAssistSettings::FFortTouchAimAssistSettings() {
    // Initialize reflected value fields omitted by the dump.
    this->AutofireTargetSizeReduction = FVector2D::ZeroVector;
    this->AssistReticleWidth = 0.00f;
    this->AssistReticleHeight = 0.00f;
    this->AutoFireReticleWidth = 0.00f;
    this->AutoFireReticleHeight = 0.00f;
    this->AutoFireTrackingReticleWidth = 0.00f;
    this->AutoFireTrackingReticleHeight = 0.00f;
    this->TargetingReticleWidth = 0.00f;
    this->TargetingReticleHeight = 0.00f;
    this->TargetRange = 0.00f;
    this->TargetWeightCurve = NULL;
    this->PullStrengthYawCurve = NULL;
    this->PullStrengthPitchCurve = NULL;
    this->PullMaxRate = 0.00f;
    this->AutoTrackDuration = 0.00f;
    this->AutoTrackPullStrength = 0.00f;
    this->ProjectileMinSpeedForAssist = 0.00f;
    this->ProjectileMaxLookAheadTime = 0.00f;
}

