#include "FortAthenaMutator_Cobalt.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Cobalt::AFortAthenaMutator_Cobalt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StormShieldClass = NULL;
    this->DelayBeforeRoundEndDeathAndStinger = 0.10f;
    this->DelayBeforeShowingRoundEndUI = 1.50f;
    this->bRespawnEnabled = false;
    this->RespawnFallbackHeight = 15000.00f;
    this->RespawnTraceEnd = -5000.00f;
    this->MinimapMPC = NULL;
    this->POICameraViewPhaseDuration = 8.00f;
    this->PreRoundDisplayDelay = 3.00f;
    this->PreRoundDisplayDuration = 6.00f;
    this->RoundStartWidgetSequenceAdditionalDelay = 0.00f;
    this->UILastManStandingDisplayTime = 5.00f;
    this->StormShieldShrinkBeginSound = NULL;
    this->VictoryStingerSound = NULL;
    this->LoserStingerSound = NULL;
    this->RoundEndStingerFadeDuration = 0.10f;
    this->DeathEffectsComponentClass = NULL;
    this->bShouldSkipWinLossScreen = true;
    this->InventoryOverrideMutator = NULL;
    this->SafeZoneMaterialCollection = NULL;
    this->SafeZoneLocMaterialParamName = TEXT("SafeZoneLoc");
    this->SafeZoneScaleMaterialParamName = TEXT("SafeZoneScale");
    this->SafeZoneRadiusAtMaxSafeZoneScale = 185000.00f;
    this->StormEyeActorClass = NULL;
    this->bTeleportComplete = true;
    this->bRoundStartWidgetSequenceRunning = false;
    this->TeleportMutator = NULL;
    this->ActiveRound = -1;
    this->bIsCobaltFinished = false;
    this->FirstRound = 0;
    this->bClientPlaylistTimerStarted = false;
    this->RoundEndStingerInstance = NULL;
    this->bIsFinishedDisplayingRoundEndUI = false;
    this->StormEyeActor = NULL;
}

void AFortAthenaMutator_Cobalt::UpdateStormEyeVisuals() {
}

void AFortAthenaMutator_Cobalt::TeleportPlayerLoadComplete(AFortPlayerPawn* FortPlayerPawn) {
}

void AFortAthenaMutator_Cobalt::OnRep_WidgetRoundData() {
}

void AFortAthenaMutator_Cobalt::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_Cobalt::OnRep_TeamWinners() {
}

void AFortAthenaMutator_Cobalt::OnRep_RoundStartWidgetSequenceRunning() {
}

void AFortAthenaMutator_Cobalt::OnRep_CombatStormShieldArray() {
}

void AFortAthenaMutator_Cobalt::OnRep_bIsFinishedDisplayingRoundEndUI() {
}

void AFortAthenaMutator_Cobalt::OnRep_bClientPlaylistTimerStarted() {
}

void AFortAthenaMutator_Cobalt::OnRep_ActiveRound() {
}

void AFortAthenaMutator_Cobalt::HandleTeleportComplete() {
}

void AFortAthenaMutator_Cobalt::HandlePlayerStateTeleportComplete(AFortPlayerStateAthena* FortPlayerState) {
}

int32 AFortAthenaMutator_Cobalt::GetFinalRoundIndex() const {
    return 0;
}

void AFortAthenaMutator_Cobalt::ClientCobaltRoundTimerComplete() {
}

void AFortAthenaMutator_Cobalt::AudioFadeChangeEvent(bool bFadeOut, float FadeTime) {
}

void AFortAthenaMutator_Cobalt::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bTeleportComplete);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bRoundStartWidgetSequenceRunning);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, CombatStormShieldArray);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, ActiveRound);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bIsCobaltFinished);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, FirstRound);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, TeamWinners);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, TeamLosers);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bClientPlaylistTimerStarted);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, WidgetRoundData);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bIsFinishedDisplayingRoundEndUI);
}


