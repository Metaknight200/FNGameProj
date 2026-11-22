#include "FortReplaySpectator.h"

AFortReplaySpectator::AFortReplaySpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->CameraModeCycle.AddDefaulted(5);
    this->SavedCameraStates.AddDefaulted(9);
    this->PlaybackSpeedLUT.AddDefaulted(7);
    this->FollowedPlayerPrivate = NULL;
    this->OverriddenTODManager = NULL;
    this->SequencerComponent = NULL;
    this->SequencerLoadingScreenRevealTime = -1.00f;
    this->bShouldUpdateReplayContextAboutSequencer = false;
    this->BaseSequencerRetryFindPawnGraceTime = 0.90f;
    this->HighlightAnnotationTime = 10.00f;
    this->ExtendedGameHighlightsTargetSeconds = 480.00f;
    this->GameHighlightsTargetSeconds = 180.00f;
    this->FeatureReelTargetSeconds = 180.00f;
    this->HighlightShotExtraLeadTime = 2.00f;
    this->UnicornDriver = NULL;
}

void AFortReplaySpectator::SkipToSequencerShot(int32 ShotIndex) const {
}

void AFortReplaySpectator::SkipToNextSequencerShot() const {
}

bool AFortReplaySpectator::ShouldSetupUIForRecording() const {
    return false;
}

bool AFortReplaySpectator::SetOverrideTimeOfDay(bool bOverride, float Time, bool bImmediate) {
    return false;
}

void AFortReplaySpectator::SetCloudAltitudes(float NewCloudAltitude) {
}

void AFortReplaySpectator::SetAllowTimeDilation(bool bAllow) {
}

void AFortReplaySpectator::SequencerLoadAndPlayFile(const FString& SequenceFileName) {
}

void AFortReplaySpectator::PlayThroughHightlightReel(const FHighlightReel& Highlights) {
}





void AFortReplaySpectator::OnShotStartGotoTimeComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnScrubComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnReplayExtractionPreScrubComplete(bool bWasSuccessful) {
}

void AFortReplaySpectator::OnPlayerStatePlacementChanged(AFortPlayerStateAthena* Sender, int32 InPlace) {
}

void AFortReplaySpectator::OnPawnForReplayRelevancyChanged(AFortPawn* NewRelevancyPawn) {
}



void AFortReplaySpectator::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortReplaySpectator::OnDemoScrubComplete(bool bWasSuccessful) {
}

bool AFortReplaySpectator::HasPermissionToViewHighlights() const {
    return false;
}

UFortReplaySequenceComponent* AFortReplaySpectator::GetSequencerComponent() const {
    return SequencerComponent;
}

bool AFortReplaySpectator::AreReplayGameHighlightsAvailable() const {
    return false;
}


