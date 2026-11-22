#include "FortCurieFXSettings.h"

UFortCurieFXSettings::UFortCurieFXSettings() {
    this->ElectricityArcImpactSystem = NULL;
    this->ElectricityArcSound = NULL;
    this->ElectricityAmbientSound = NULL;
    this->PlayerWorldFireSystem = NULL;
    this->FireAmbientSound = NULL;
    this->LandscapeCharRenderTarget = NULL;
    this->GlowElementIdxPrimitiveDataIdx = 27;
    this->GlowLerpDataIdx = 29;
    this->CharredEffectPrimitiveDataIdx = 28;
    this->ElectricityArcTilingDivisorPrimitiveDataIdx = 0;
    this->ElectricityArcStartTimestampPrimitiveDataIdx = 1;
    this->ElectricityArcJumpDurationPrimitiveDataIdx = 2;
    this->ElectricityArcDurationBeforeFadeoutPrimitiveDataIdx = 7;
    this->ElectricityArcWPONoisePrimitiveDataIdx = 3;
    this->ElectricityArcWPONoiseWorldTileScalePrimitiveDataIdx = 8;
    this->ElectricityArcWPONoiseScalePrimitiveDataIdx = 9;
    this->ElectricityArcSplineWidthPrimitiveDataIdx = 10;
    this->ElectricityArcColorScalePrimitiveDataIdx = 11;
    this->ElectricityArcMaxPropagationLength = 1500.00f;
    this->ElectricityArcJumpDuration = 0.30f;
    this->ElectricityArcLifetime = 0.75f;
    this->ElectricityArcFadeoutDuration = 0.35f;
    this->ElectricityArcSplineWidthFirstIteration = 30.00f;
    this->ElectricityArcSplineWidthSubsequentIteration = 20.00f;
    this->ElectricityArcColorScaleFirstIteration = 1.00f;
    this->ElectricityArcColorScaleSubsequentIteration = 0.85f;
    this->ElectricityArcRetriggerDelay = 1.00f;
    this->ElectricityArcImpactFXDelay = 0.20f;
    this->CharredStateInterpSpeed = 0.25f;
    this->CharredStateFireAttachedFinalAlpha = 1.00f;
    this->CharredStateNearFireFinalAlpha = 0.50f;
    this->LandscapeCharredStateInterpSpeed = 0.35f;
    this->MinLandscapeFireSphericalBounds = 128.00f;
    this->MaxLandscapeFireSphericalBounds = 256.00f;
    this->LandscapeFireRandomLocationRadius = 256.00f;
    this->AmbientAudioFadeTime = 0.50f;
}


