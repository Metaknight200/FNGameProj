#include "FortAthenaMutator_TODOverride.h"

AFortAthenaMutator_TODOverride::AFortAthenaMutator_TODOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    this->TimeOverride = 11.00f;
    this->SpeedOverride = 60.00f;
    this->LightIntensityOverride = EAthenaLightIntensityOverride::NoOverride;
    this->LightColorOverride = EAthenaTODColor::NoOverride;
    this->FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
    this->FogColorOverride = EAthenaTODColor::NoOverride;
    this->PostProcessOverride = EAthenaTODPostProcess::NoOverride;
}

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDaySpeedNames() const {
    return TArray<FText>();
}

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDayPhaseNames() const {
    return TArray<FText>();
}


