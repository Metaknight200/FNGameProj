#include "FortAthenaMutator_FogSettings.h"

AFortAthenaMutator_FogSettings::AFortAthenaMutator_FogSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
}

void AFortAthenaMutator_FogSettings::UnsetFogOverrides() {
}

void AFortAthenaMutator_FogSettings::SetFogDensityOverride(EAthenaFogDensityOverride NewValue) {
}

void AFortAthenaMutator_FogSettings::SetFogColorIndexOverride(FLinearColor NewValue) {
}

float AFortAthenaMutator_FogSettings::GetFogDensityValue(const EAthenaFogDensityOverride NewFogDensityOverride) {
    return 0.0f;
}

EAthenaFogDensityOverride AFortAthenaMutator_FogSettings::GetFogDensityOverride() const {
    return EAthenaFogDensityOverride::NoOverride;
}

FLinearColor AFortAthenaMutator_FogSettings::GetFogColorOverride() const {
    return FLinearColor{};
}


