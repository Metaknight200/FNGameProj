#include "FortStreamMediaSource.h"

UFortStreamMediaSource::UFortStreamMediaSource() {
    this->VideoStreamSource = TEXT("Rabbit:ElectraA");
    this->VideoStreamSourceAB = 0.50f;
    this->bIsLive = false;
    this->bBlurlLive = false;
    this->MaxResolution = 0;
    this->MaxBandwidth = 0;
    this->AspectRatio = 1.78f;
    this->bShareLock = false;
    this->bAudioOnly = false;
    this->bPartySync = true;
    this->MediaDuration = -1.00f;
    this->bAutoClearCDNDistribution = true;
    this->FortDownloadLocalizedOverlays = NULL;
    this->LocalFilePlaybackAsset = NULL;
}

FMediaPlayerOptions UFortStreamMediaSource::UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions) const {
    return FMediaPlayerOptions{};
}

bool UFortStreamMediaSource::ShouldStreamBePlaying(const UObject* WorldContextObject, const UPrimitiveComponent* PrimitiveComponent, float CullRadius) const {
    return false;
}

TEnumAsByte<UCPTypes> UFortStreamMediaSource::ShouldProtectPlayerFromContent() const {
    return UCPAudio;
}

void UFortStreamMediaSource::SetUrl(FString& InURL) {
}

void UFortStreamMediaSource::SetPlaybackStartTime(float StartTime) {
}

void UFortStreamMediaSource::SetLocalizedOverlays(UFortDownloadLocalizedOverlays* InOverlays) {
}

void UFortStreamMediaSource::RequestVideoUrl(const APlayerController* FortPC) {
}

void UFortStreamMediaSource::ReinstateSharing() {
}

bool UFortStreamMediaSource::IsScreenRecordingInProgress() {
    return false;
}

bool UFortStreamMediaSource::HasLocalFilePlayback() const {
    return false;
}

int32 UFortStreamMediaSource::GetCDNNumber() {
    return 0;
}

void UFortStreamMediaSource::DisableSharing() {
}


