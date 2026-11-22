#include "FortVolumeTimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"

UFortVolumeTimeOfDayComponent::UFortVolumeTimeOfDayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorOverrideData = false;
    this->TimeOverride = 0.00f;
    this->SpeedOverride = 0.00f;
    this->bOverrideLightIntensity = false;
    this->LightIntensityOverride = 0.00f;
    this->bOverrideLightColor = false;
    this->bOverrideFogDensity = false;
    this->FogDensityOverride = 0.00f;
    this->bOverrideFogColor = false;
    this->bOverridePostProcess = false;
    this->PostProcessOverride = NULL;
    this->TimeOfDayManager = NULL;
    this->bIsOverridingTimeOfDay = false;
}

AFortTimeOfDayManager* UFortVolumeTimeOfDayComponent::TryGetTimeOfDayManager(AFortVolume* FortVolume) {
    return NULL;
}

void UFortVolumeTimeOfDayComponent::SpectatorFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayManager() {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayConfig() {
}

void UFortVolumeTimeOfDayComponent::MutatorSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

AFortTimeOfDayManager* UFortVolumeTimeOfDayComponent::GetTimeOfDayManager(AFortVolume* FortVolume) {
    return NULL;
}

void UFortVolumeTimeOfDayComponent::CreateLocalTimeOfDayManager() {
}

void UFortVolumeTimeOfDayComponent::ApplyTimeOfDayComponentSettings(bool bShouldSwitch) {
}

void UFortVolumeTimeOfDayComponent::ApplyInhibitorFogOverrides(float FogDensity, FLinearColor FogColor) {
}

void UFortVolumeTimeOfDayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayManager);
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayConfig);
}


