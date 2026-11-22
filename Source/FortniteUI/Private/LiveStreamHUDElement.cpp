#include "LiveStreamHUDElement.h"

ULiveStreamHUDElement::ULiveStreamHUDElement() {
    this->SourceBus = NULL;
    this->DefaultAudioSubmix = NULL;
    this->LicensedAudioSubmix = NULL;
}

void ULiveStreamHUDElement::SetPIPVolumeMultiplier(float InMultiplayer) {
}

void ULiveStreamHUDElement::SetPIPVideoUID(const FString& InVideoUID) {
}

void ULiveStreamHUDElement::SetPIPStartTime(float InStartTime) {
}

void ULiveStreamHUDElement::SetPIPLive(bool bInLive) {
}

void ULiveStreamHUDElement::SetPIPForceEnabled(bool bForced) {
}

void ULiveStreamHUDElement::SetPIPEOSGSBlackout(bool bInEnable) {
}

void ULiveStreamHUDElement::SetPIPDisableInstructions(bool bDisable) {
}

void ULiveStreamHUDElement::SetPIPCDNWeights(const TArray<float> InWeights) {
}

void ULiveStreamHUDElement::SetPIPAutoClose(bool bAutoClose) {
}

void ULiveStreamHUDElement::SetMirrorScreen(int32 ScreenIndex) {
}

void ULiveStreamHUDElement::SetMirrorPIPAudioSubmix(bool bInDefault, bool bForce) {
}

void ULiveStreamHUDElement::SetMirrorPIPAudioDisable(bool bInDisable) {
}

void ULiveStreamHUDElement::SetMirroredPIPAnalyicsMetadata(const FName& MediaName, const int64 CurrentProgressTimecode, const FName& MediaPlayerName) {
}

bool ULiveStreamHUDElement::IsUsingMirrorScreen() {
    return false;
}

float ULiveStreamHUDElement::GetPIPVolumeMultiplier() {
    return 0.0f;
}

FString ULiveStreamHUDElement::GetPIPVideoUID() {
    return TEXT("");
}

float ULiveStreamHUDElement::GetPIPStartTIme() {
    return 0.0f;
}

bool ULiveStreamHUDElement::GetPIPLive() {
    return false;
}

bool ULiveStreamHUDElement::GetPIPForceEnabled() {
    return false;
}

bool ULiveStreamHUDElement::GetPIPDisableInstructions() {
    return false;
}

TArray<float> ULiveStreamHUDElement::GetPIPCDNWeights() {
    return TArray<float>();
}

bool ULiveStreamHUDElement::GetPIPAutoClose() {
    return false;
}

int32 ULiveStreamHUDElement::GetMirrorScreen() {
    return 0;
}

void ULiveStreamHUDElement::FireMirroredPIPAnalytics(bool bInStarted) {
}




