#include "FortWorldSettings.h"

AFortWorldSettings::AFortWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->bHighPriorityLoadingLocal = true;
    this->WorldCellsFlags = 0;
    this->bGenerateTestLevelSaves = false;
    this->bDisableCullDistance = false;
    this->bUseWorldSpecificCullDistanceOverride = false;
    this->bPvPUseWidgetRotation = true;
    this->bOverrideMainMapSettings = false;
    this->bValidateNavGraphConnectivity = false;
    this->bLimitNavGraphSkyCells = false;
    this->bUseProceduralFoliage = true;
    this->bUseConditionalBuildingFoundations = true;
    this->bAllowBuildingStreamingData = false;
    this->SplineHLODIndex = -1;
    this->bShowTimeOfDayManager = true;
    this->MinCullObjectSize = 0.00f;
    this->MinCullDistance = 0.00f;
    this->MaxCullObjectSize = 0.00f;
    this->MaxCullDistance = 0.00f;
    this->OverrideMinimapMaterial = NULL;
    this->MapZOffset = 37500.00f;
    this->MapInitialMask = NULL;
    this->bSpawnVehicleManager = true;
    this->bSpawnPhysicsObjectManager = true;
    this->MapWorldScale = 160.00f;
    this->MiniMapZoom = 2.50f;
    this->SearchSpeedOverride = NULL;
    this->ResourceRateOverride = NULL;
    this->SoundBodyHeadshotRequired = NULL;
    this->bSpawnTimeOfDayManager = true;
    this->bDisableGlobalWeatherEvents = false;
    this->WorldMusicManagerBank = NULL;
    this->ZoneThemeMusicManagerBank = NULL;
    this->TimeOfDayManager = NULL;
    this->VehicleManager = NULL;
    this->PhysicsObjectManager = NULL;
    this->LevelOverlayManager = NULL;
    this->ExternalContentManager = NULL;
}


