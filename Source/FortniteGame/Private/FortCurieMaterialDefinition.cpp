#include "FortCurieMaterialDefinition.h"

FFortCurieMaterialDefinition::FFortCurieMaterialDefinition() {
    this->bCanBeElectrocuted = false;
    this->bConductsElectricity = false;
    this->bFireConsumesFuel = false;
    this->bUsesFirePropManager = false;
    this->bTrackGridFireStatus = false;
    this->bShouldIgniteLandscapeGrass = false;
    this->bHandlesOverlapsDirectly = false;
    this->DefaultWaterContent = 0.00f;
    this->MinWaterContent = 0.00f;
    this->MaxWaterContent = 0.00f;
    this->WaterContentStabilizationRate = 0.00f;
    this->DefaultFuelContent = 0.00f;
    this->MinFuelContent = 0.00f;
    this->MaxFuelContent = 0.00f;
    this->FuelContentStabilizationRate = 0.00f;
    this->FirePropagationCost = 0.00f;
    this->ElectricityPropagationLimitIncrease = 0;
}

