#include "FortCurieFXManager.h"

UFortCurieFXManager::UFortCurieFXManager() {
    this->FXSettings = NULL;
    this->ElectricityArcImpactSystem = NULL;
    this->ElectricityArcSound = NULL;
    this->ElectricityAmbientSound = NULL;
    this->FireSystem = NULL;
    this->PlayerWorldFireSystem = NULL;
    this->FireAmbientSound = NULL;
    this->LandscapeCharRenderTarget = NULL;
    this->LandscapeCharInterpSpeed = 255.00f;
    this->NumActiveNativeFireStates = 0;
    this->ElectricityArcFXSignificanceRequirement = 0.00f;
    this->ElectricityImpactFXSignificanceRequirement = 0.00f;
    this->ElectricityArcSoundSignificanceRequirement = 0.00f;
    this->AmbientAudioSignificanceRequirement = 0.00f;
    this->AmbientAudioSurroundSignificanceRequirement = 0.00f;
    this->GlowInterpolationSignificanceRequirement = 0.00f;
    this->WorldSystemFireParticleSignificanceRequirement = 0.00f;
    this->WorldSystemIgnitionParticleSignificanceRequirement = 0.00f;
    this->CharredEffectInterpolationSignificanceRequirement = 0.00f;
    this->MinLandscapeFireSphericalBounds = 128.00f;
    this->MaxLandscapeFireSphericalBounds = 256.00f;
    this->LandscapeFireRandomLocationRadius = 256.00f;
    this->TimeSinceAudioUpdate = 0.00f;
    this->bNiagaraImpactFXActive = false;
    this->bNiagaraPlayerWorldFireFXActive = false;
    this->bFireElementEnabled = false;
    this->bElectricityElementEnabled = false;
    this->bShutdown = false;
}

void UFortCurieFXManager::OnUserSettingsEffectQualityChanged() {
}

void UFortCurieFXManager::OnElectricityImpactFXComplete(UNiagaraComponent* InComponent) {
}


