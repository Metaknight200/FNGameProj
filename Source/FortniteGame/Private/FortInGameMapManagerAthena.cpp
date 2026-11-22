#include "FortInGameMapManagerAthena.h"
#include "EMapCaptureMethod.h"

AFortInGameMapManagerAthena::AFortInGameMapManagerAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->MapCaptureMethod = EMapCaptureMethod::StaticCapture;
    this->bDrawMapLocationsIfFogged = true;
    this->bDrawSpecialActorIconsIfFogged = true;
    this->bDrawSquadPinsIfFogged = true;
    this->bDrawMapIndicatorsIfFogged = true;
    this->bDrawEliminationsIfFogged = true;
    this->MapMaskMaterial = NULL;
    this->MapMaskMaterialMID = NULL;
}

void AFortInGameMapManagerAthena::OnEndSkydivingFromBus(AFortPlayerControllerZone* FortPC) {
}

void AFortInGameMapManagerAthena::OnBeginSkydivingFromBus(AFortPlayerControllerZone* FortPC) {
}

void AFortInGameMapManagerAthena::OnAthenaPlayerControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortInGameMapManagerAthena::HandlePlayerTeamIndexChanged() {
}

void AFortInGameMapManagerAthena::HandleLocalPlayerStateSet() {
}


