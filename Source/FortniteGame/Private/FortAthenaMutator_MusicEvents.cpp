#include "FortAthenaMutator_MusicEvents.h"

AFortAthenaMutator_MusicEvents::AFortAthenaMutator_MusicEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->CrossfadeTime = 0.00f;
}

void AFortAthenaMutator_MusicEvents::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep NewStep) {
}

void AFortAthenaMutator_MusicEvents::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_MusicEvents::HandleWaitingOnPlacement_Spectate() {
}

void AFortAthenaMutator_MusicEvents::HandleWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}


