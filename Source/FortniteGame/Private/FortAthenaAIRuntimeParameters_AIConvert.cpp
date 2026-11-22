#include "FortAthenaAIRuntimeParameters_AIConvert.h"

UFortAthenaAIRuntimeParameters_AIConvert::UFortAthenaAIRuntimeParameters_AIConvert() {
    this->bCanBeConverted = false;
    this->bCanBeConvertedFromDBNO = false;
    this->bForceKillWhenUnconverted = false;
    this->bCopyConverterSpecificRelations = false;
    this->bRemoveFromAllFactions = false;
    this->ReleaseDistanceSq = 0.00f;
    this->CheckReleaseConditionsTimeInterval = 0.00f;
    this->PreConversionTeamIndex = 0;
}


