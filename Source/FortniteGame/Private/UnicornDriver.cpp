#include "UnicornDriver.h"
#include "UnicornSocialComponent.h"
#include "UnicornWebAPIComponent.h"

AUnicornDriver::AUnicornDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable_MainHighlightReel = true;
    this->bEnable_ShorterExtendedHighlightReel = false;
    this->bEnable_ShortHighlightReel = false;
    this->bEnable_ShortExtendedHighlightReel = true;
    this->bEnable_MediumHighlightReel = false;
    this->bEnable_MediumExtendedighlightReel = true;
    this->bEnable_PlayerSpotlightReel = true;
    this->bEnable_PlayerSpotlightNoDeathsReel = true;
    this->bEnable_VATReel = true;
    this->ShorterReelMaxClipDuration = 6.50f;
    this->ShorterReelMaxLookback = 5.00f;
    this->ShorterReelMaxTailTime = 1.50f;
    this->ShorterReelEliminationLookbackTime = 3.50f;
    this->ShortReelMaxClipDuration = 8.00f;
    this->ShortReelMaxLookback = 6.50f;
    this->ShortReelMaxTailTime = 1.50f;
    this->ShortReelEliminationLookbackTime = 4.00f;
    this->ShortExtendedReelMaxClipDuration = 11.00f;
    this->ShortExtendedReelMaxLookback = 9.50f;
    this->ShortExtendedReelMaxTailTime = 1.50f;
    this->ShortExtendedReelEliminationLookbackTime = 4.00f;
    this->MediumReelMaxClipDuration = 16.00f;
    this->MediumReelMaxLookback = 12.50f;
    this->MediumReelMaxTailTime = 3.50f;
    this->MediumExtendedReelMaxClipDuration = 22.00f;
    this->MediumExtendedReelMaxLookback = 17.50f;
    this->MediumExtendedReelMaxTailTime = 4.50f;
    this->VATReelEliminationLookbackTime = 45.00f;
    this->MaxHighlightsToSave = 1000;
    this->MinHighlightScore = 0.00f;
    this->DefaultShotLeadTime = 1.00f;
    this->DefaultShotTailTime = 5.00f;
    this->HighlightAnnotationTime = 7.00f;
    this->MinimumPlacementForHighlight = 50;
    this->bEnsureChronologicalHighlights = false;
    this->SocialComponent = CreateDefaultSubobject<UUnicornSocialComponent>(TEXT("UnicornSocial"));
    this->WebAPIComponent = CreateDefaultSubobject<UUnicornWebAPIComponent>(TEXT("UnicornWeb"));
    this->bShouldUploadHighlightsPayload = true;
}

void AUnicornDriver::UnicornStopStreamRecording() {
}

void AUnicornDriver::UnicornStartStreamRecording() {
}

void AUnicornDriver::UnicornStartStreamPlaybackToNow() {
}

void AUnicornDriver::UnicornStartStreamPlayback() {
}

void AUnicornDriver::UnicornSetLoggingEnabled(bool bEnabled) {
}

void AUnicornDriver::UnicornResetAll() {
}

void AUnicornDriver::UnicornPlayUnionAllPlayersHighlights(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayTopHighlights(int32 NumHighlights, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayTopEliminationHighlights(int32 NumHighlights, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayThroughPlayerHighlightReel(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornPlayOrderedHighlightsWithSocialFeature(int32 FeatureAsInt, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayOrderedHighlightsWithFeature(int32 FeatureAsInt, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayLastEliminationHighlights(int32 NumHighlights, uint8 ReelId) {
}

void AUnicornDriver::UnicornPlayHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornFollowPlayerWithHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornFakeAndUploadAndShutdown(int32 NumHighlights) {
}

void AUnicornDriver::UnicornFakeAndUpload(int32 NumHighlights) {
}

void AUnicornDriver::UnicornDebugUploadPayloadFile() {
}

void AUnicornDriver::UnicornDebugPlayerWithIdString(const FString& PlayerIdString) {
}

void AUnicornDriver::UnicornDebugHighlightTime(int32 HighlightId) {
}

void AUnicornDriver::UnicornDebugHighlight(int32 HighlightId) {
}

void AUnicornDriver::UnicornDebugCurrentReplayPlayer() {
}

void AUnicornDriver::UnicornDebugCurrentPlayerSampler() {
}

void AUnicornDriver::UnicornDebugCurrentPlayerPlayerLog() {
}

void AUnicornDriver::UnicornCreateAndPlayServerGameHighlights(int32 TargetSeconds, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile) {
}

void AUnicornDriver::UnicornClearDebugPlayer() {
}

void AUnicornDriver::RunHighlightExtractors() {
}

void AUnicornDriver::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AUnicornDriver::HandleDemoRecordingFinish(UWorld* InWorld) {
}

void AUnicornDriver::HandleDemoPlaybackFinish(UWorld* InWorld) {
}


