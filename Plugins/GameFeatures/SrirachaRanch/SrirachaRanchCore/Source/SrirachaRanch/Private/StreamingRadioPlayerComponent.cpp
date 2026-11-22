#include "StreamingRadioPlayerComponent.h"
#include "Net/UnrealNetwork.h"

UStreamingRadioPlayerComponent::UStreamingRadioPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PercentAutostartRadio = 60.00f;
    this->DisabledVehicleList.AddDefaulted(3);
    this->bMinimalStateOnPlatform = false;
    this->bAutostartOnEntry = false;
    this->bDisabledForCurrentPlayerState = false;
    this->SoundComponent = NULL;
    this->AudioShape = NULL;
    this->SoundCompTemplateSource = NULL;
    this->MediaPlayer = NULL;
    this->MediaController = NULL;
    this->DefaultSoundSubmix = NULL;
    this->LicensedSoundSubmix = NULL;
    this->LastMediaSource = NULL;
    this->IncomingMediaSource = NULL;
    this->CurrentMode = ERadioSource::Invalid;
    this->MaximumRetries = 3;
    this->FadeoutWhenUnpoweredInMS = 500;
    this->FadeoutWhenOwnerBeingDestroyedInMS = 100;
    this->MaxFadeoutTimeMS = 10000;
    this->DefaultPlayingIndex = -1;
    this->SoundMixInside = NULL;
    this->SoundMixOutside = NULL;
    this->ActivationRadius = 1000.00f;
    this->MediaSource = NULL;
    this->DelegateContextObject = NULL;
    this->MediaStartTimeFromInit = 0.00f;
}

void UStreamingRadioPlayerComponent::ToggleRadioActive() {
}

void UStreamingRadioPlayerComponent::StopRadioWithFadeout(int32 Milliseconds) {
}

void UStreamingRadioPlayerComponent::StopRadio() {
}

void UStreamingRadioPlayerComponent::StopIfNoDriver(const TScriptInterface<IFortVehicleInterface>& Vehicle) {
}

void UStreamingRadioPlayerComponent::StartRadio(int32 IdxToPlay, bool bFallbackOverride) {
}

void UStreamingRadioPlayerComponent::SoundMixUpdateWeaponState(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UStreamingRadioPlayerComponent::SoundMixUpdateTargetingState(bool bNewIsTargeting) {
}

void UStreamingRadioPlayerComponent::SetInteriorVolume(const TScriptInterface<IFortVehicleInterface>& Vehicle) {
}

void UStreamingRadioPlayerComponent::SetExteriorVolume(const TScriptInterface<IFortVehicleInterface>& Vehicle) {
}

void UStreamingRadioPlayerComponent::PlayPrevIndex() {
}

void UStreamingRadioPlayerComponent::PlayNextIndex() {
}

void UStreamingRadioPlayerComponent::PlayDefaultIndex() {
}

void UStreamingRadioPlayerComponent::OnSuccessfulURL(const FString& URL) {
}

void UStreamingRadioPlayerComponent::OnRep_RadioSourceData() {
}

void UStreamingRadioPlayerComponent::OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking) {
}





void UStreamingRadioPlayerComponent::OnOwningVehicleDied(AFortAthenaVehicle* DeadVehicle, const FGameplayTagContainer& InTags, AController* EventInstigator, AActor* DamageCauser) {
}

void UStreamingRadioPlayerComponent::OnOwnerUnpowered() {
}

void UStreamingRadioPlayerComponent::OnOwnerReFueled() {
}

void UStreamingRadioPlayerComponent::OnOwnerOutOfFuel() {
}

void UStreamingRadioPlayerComponent::OnOwnerExploded() {
}

void UStreamingRadioPlayerComponent::OnLicensedAudioSettingChanged(UFortClientSettingsRecord* Settings) {
}

void UStreamingRadioPlayerComponent::OnFailedURL(const FString& URL) {
}

void UStreamingRadioPlayerComponent::NativeOnPawnExitVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex) {
}

void UStreamingRadioPlayerComponent::NativeOnPawnExitSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex) {
}

void UStreamingRadioPlayerComponent::NativeOnPawnEnterVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex) {
}

void UStreamingRadioPlayerComponent::NativeOnPawnEnterSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex) {
}

void UStreamingRadioPlayerComponent::MediaReady(const FString& String) {
}

void UStreamingRadioPlayerComponent::MediaPlayed() {
}

void UStreamingRadioPlayerComponent::MediaLoad() {
}

void UStreamingRadioPlayerComponent::MediaFinishedOrClosed() {
}

void UStreamingRadioPlayerComponent::MediaFailedToOpen(const FString& String) {
}

void UStreamingRadioPlayerComponent::MediaExplicitClose(bool bReallyExplicit) {
}

bool UStreamingRadioPlayerComponent::IsPlayingLiveFeed() const {
    return false;
}

bool UStreamingRadioPlayerComponent::IsExternalSeat(int32 SeatIdx) const {
    return false;
}

FAthenaRadioStation UStreamingRadioPlayerComponent::GetOptionAt(int32 idx) const {
    return FAthenaRadioStation{};
}

void UStreamingRadioPlayerComponent::AuthStopRadio_Implementation() {
}
bool UStreamingRadioPlayerComponent::AuthStopRadio_Validate() {
    return true;
}

void UStreamingRadioPlayerComponent::AuthSetDisabledForCurrentPlayerState_Implementation(bool bShouldDisableForCurrentPlayerState) {
}
bool UStreamingRadioPlayerComponent::AuthSetDisabledForCurrentPlayerState_Validate(bool bShouldDisableForCurrentPlayerState) {
    return true;
}

void UStreamingRadioPlayerComponent::AuthSaveFadeOutTime_Implementation(float FadeoutSeconds) {
}
bool UStreamingRadioPlayerComponent::AuthSaveFadeOutTime_Validate(float FadeoutSeconds) {
    return true;
}

void UStreamingRadioPlayerComponent::AuthSavedSource_Implementation(FAthenaRadioStation Source) {
}
bool UStreamingRadioPlayerComponent::AuthSavedSource_Validate(FAthenaRadioStation Source) {
    return true;
}

void UStreamingRadioPlayerComponent::AuthSaveAutoStart_Implementation(bool bAutoStart) {
}
bool UStreamingRadioPlayerComponent::AuthSaveAutoStart_Validate(bool bAutoStart) {
    return true;
}

void UStreamingRadioPlayerComponent::AuthPlayIndex_Implementation(int32 Index) {
}
bool UStreamingRadioPlayerComponent::AuthPlayIndex_Validate(int32 Index) {
    return true;
}

void UStreamingRadioPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStreamingRadioPlayerComponent, bAutostartOnEntry);
    DOREPLIFETIME(UStreamingRadioPlayerComponent, bDisabledForCurrentPlayerState);
    DOREPLIFETIME(UStreamingRadioPlayerComponent, ReplicatedRadioSourceData);
    DOREPLIFETIME(UStreamingRadioPlayerComponent, DefaultPlayingIndex);
    DOREPLIFETIME(UStreamingRadioPlayerComponent, MediaStartTimeFromInit);
}


