#include "FortInteriorAudioSettings.h"

UFortInteriorAudioSettings::UFortInteriorAudioSettings() {
    this->HorizontalScanDistance = 5;
    this->VerticalScanDistance = 5;
    this->TotalBuildingCountRequiredForInterior = 5;
    this->TotalBuildingCountRequiredForPartialExterior = 5;
    this->TotalCeilingCountRequiredAlongHorizontalScan = 2;
    this->HorizontalLineTraceDistance = 5;
    this->VerticalLineTraceDistance = 5;
    this->TraceCollisionChannel = ECC_WorldStatic;
    this->InteriorSoundMix = NULL;
    this->PartialInteriorSoundMix = NULL;
    this->PartialExteriorSoundMix = NULL;
    this->AmbientEntryPriority = 100;
    this->AmbientBanks[0] = NULL;
    this->AmbientBanks[1] = NULL;
    this->AmbientBanks[2] = NULL;
    this->AmbientBanks[3] = NULL;
    this->AmbientBanks[4] = NULL;
    this->AmbientBanks[5] = NULL;
    this->SourceBusAsset = NULL;
    this->SourceBusFadeInTime = 1.00f;
    this->SourceBusFadeOutTime = 1.00f;
    this->SourceBusCrossfadeTime = 0.50f;
}


