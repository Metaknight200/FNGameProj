#include "LiveStreamStandalonePlayer.h"
#include "Components/SlateWrapperTypes.h"

ULiveStreamStandalonePlayer::ULiveStreamStandalonePlayer() : UUserWidget(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::Visible;
    this->StreamMediaSource = NULL;
    this->VideoPlayerWidget = NULL;
}

void ULiveStreamStandalonePlayer::UnblockPlayer(ELiveStreamStandaloneBlocked BlockedReason) {
}

void ULiveStreamStandalonePlayer::Stop() {
}

void ULiveStreamStandalonePlayer::SetPIPStartTime(float InStartTime) {
}

void ULiveStreamStandalonePlayer::SetPIPMediaID(const FString& InVideoUID) {
}

void ULiveStreamStandalonePlayer::SetPIPLive(bool bInLive) {
}

void ULiveStreamStandalonePlayer::SetPIPIgnorePartySync(bool bIgnore) {
}

void ULiveStreamStandalonePlayer::SetPIPCDNDistribution(const TArray<float>& Weights) {
}

void ULiveStreamStandalonePlayer::ResetPIPState() {
}

void ULiveStreamStandalonePlayer::Play() {
}


void ULiveStreamStandalonePlayer::OnRetrieveVideoUrlSuccess(const FString& URL) {
}

void ULiveStreamStandalonePlayer::OnRetrieveVideoUrlFailure(const FString& URL) {
}

bool ULiveStreamStandalonePlayer::GetPlayerIsBlocked() {
    return false;
}

bool ULiveStreamStandalonePlayer::GetPIPStandaloneError() {
    return false;
}

bool ULiveStreamStandalonePlayer::GetPIPIgnorePartySync() {
    return false;
}

void ULiveStreamStandalonePlayer::FireStandalonePIPAnalytics(bool bInStarted) {
}

void ULiveStreamStandalonePlayer::DisableSharing(bool bInDisable) {
}

void ULiveStreamStandalonePlayer::CheckMediaStarted() {
}

void ULiveStreamStandalonePlayer::BlockPlayer(ELiveStreamStandaloneBlocked BlockedReason) {
}


