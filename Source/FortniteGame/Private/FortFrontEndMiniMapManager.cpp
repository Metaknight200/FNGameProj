#include "FortFrontEndMiniMapManager.h"

AFortFrontEndMiniMapManager::AFortFrontEndMiniMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExcludedFromMapNameDisplayPOIs.AddDefaulted(3);
    this->MapLocationFontSizeOverride = -1;
    this->MobileMapLocationFontSizeOverride = 0;
    this->NamedLocationQuestItemDefinition = NULL;
    this->POIQuestItemDefinition = NULL;
    this->MapLayerSize = 0;
    this->MapMaterial = NULL;
    this->MapWorldScale = 1.00f;
    this->MapMaskMaterial = NULL;
    this->MapMaskMaterialMID = NULL;
}


