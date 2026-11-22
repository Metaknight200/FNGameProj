#include "FortAthenaMutator_GameModeBase.h"

AFortAthenaMutator_GameModeBase::AFortAthenaMutator_GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bAutomaticallyFinishInitialization = true;
    this->StingerAudioComponent = NULL;
    this->StingerEventForwarder = NULL;
}

void AFortAthenaMutator_GameModeBase::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_GameModeBase::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_GameModeBase::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_GameModeBase::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_GameModeBase::HandleEndMatchStingerWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}

FText AFortAthenaMutator_GameModeBase::GetPOINameForTag(const FGameplayTag& POITag) const {
    return FText::GetEmpty();
}


