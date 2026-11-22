#include "FortInGameMapManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortInGameMapManager::AFortInGameMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bClearAllFog = false;
    this->MapLayerSize = 896;
    this->SceneCaptureClass = NULL;
    this->SceneCaptureBlurryClass = NULL;
    this->MapMaterial = NULL;
    this->MapMaterialMID = NULL;
    this->MapOpacityWhenWalking = 0.83f;
    this->OffsetZ = 17000.00f;
    this->IconVisibilityFogThreshold = 96;
    this->DelayBetweenDispersions = 0.10f;
    this->ExploredRadius = 0.01f;
    this->ExploredFalloffRadius = 0.01f;
    this->SeenRadius = 0.01f;
    this->SeenFalloffRadius = 0.18f;
    this->VisibilityMaxGradient = 128;
    this->UnexploredOpacity = 128;
    this->MaxPercentageMapExplored = 0.95f;
    this->MapExplorationThresholdPercentage = 0.25f;
    this->LastMapExplorationThresholdPercentageReached = 0.00f;
    this->MapCaptureMethod = EMapCaptureMethod::LiveCapture;
    this->SceneCapture = NULL;
    this->SceneCaptureBlurry = NULL;
    this->FogMask = NULL;
    this->bUseExplorationBasedFogOfWar = false;
    this->bShareMapWithTeam = true;
    this->bResetMapDataOnTeamSwitch = true;
    this->HeatmapMask = NULL;
    this->bCanUpdateHeatmapMask = true;
    this->MapWorldScale = 0.00f;
    this->MobileMapLocationFontSizeOverride = 0;
}

bool AFortInGameMapManager::ShouldShowMainMap() {
    return false;
}

void AFortInGameMapManager::SetMapMaterial(UMaterialInterface* InMapMaterial) {
}

void AFortInGameMapManager::SetCaptureLocation(const FVector& Location) {
}

void AFortInGameMapManager::SetActorBoundaryData(float UpperZ, float LowerZ, const TArray<TSubclassOf<AActor>>& ClassesToHide) {
}

void AFortInGameMapManager::ServerClearAllFog() {
}

void AFortInGameMapManager::ResetCaptureLocation() {
}

void AFortInGameMapManager::PaintOnFog(const FVector& WorldCoords, TEnumAsByte<EFortTeam::Type> Team) {
}

void AFortInGameMapManager::OnRep_MapData() {
}

void AFortInGameMapManager::OnRep_ClearAllFog() {
}

bool AFortInGameMapManager::GetStaticCaptureSetupComplete() {
    return false;
}

UMaterialInstanceDynamic* AFortInGameMapManager::GetMapMaterialMID() {
    return NULL;
}

float AFortInGameMapManager::GetHeatmapMaskScale() const {
    return 0.0f;
}

UTexture2D* AFortInGameMapManager::GetHeatmapMask() const {
    return HeatmapMask;
}

AFortInGameMapManager* AFortInGameMapManager::GetCurrent(const UObject* WorldContextObject) {
    return NULL;
}

void AFortInGameMapManager::BroadcastExplorationEvents_Implementation(const TArray<FTeamMapExplorationEvent>& Events) {
}

FVector2D AFortInGameMapManager::BPWorldLocationToMapLocation(const FVector& WorldLocation, float InMapSize) {
    return FVector2D{};
}

void AFortInGameMapManager::AllowShowMiniMap(bool bAllowShow) {
}

void AFortInGameMapManager::AllowShowMainMap(bool bAllowShow) {
}

void AFortInGameMapManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInGameMapManager, MapData);
    DOREPLIFETIME(AFortInGameMapManager, bClearAllFog);
}


