#include "FortMusicManager.h"
#include "FortMusicVoice.h"

AFortMusicManager::AFortMusicManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerOwner = NULL;
    this->Voices[0] = CreateDefaultSubobject<UFortMusicVoice>(TEXT("MusicVoiceA"));
    this->Voices[1] = CreateDefaultSubobject<UFortMusicVoice>(TEXT("MusicVoiceB"));
    this->bWorldReadyCalled = false;
    this->MusicBank = NULL;
}

void AFortMusicManager::StopPrimaryMusic(bool bPlayOutro) {
}

void AFortMusicManager::StopMusicVoice(UFortMusicVoice* Voice) {
}

void AFortMusicManager::SetPrimaryMusicVolume(float InVolumeMultiplier) {
}

void AFortMusicManager::SetMusicBank(UFortMusicManagerBank* Bank) {
}

void AFortMusicManager::PlayStinger_Implementation(UFortMusicAsset* NewMusicAsset) {
}

UFortMusicVoice* AFortMusicManager::PlayMusicVoice(UFortMusicAsset* Asset) {
    return NULL;
}

void AFortMusicManager::OnVoiceFinished(UFortMusicVoice* Voice) {
}






float AFortMusicManager::GetPrimaryMusicVolume() const {
    return 0.0f;
}

UFortMusicManagerBank* AFortMusicManager::GetMusicBank() const {
    return MusicBank;
}

float AFortMusicManager::GetEventHeatPercentTotal(TEnumAsByte<EFortCombatEvents::Type> CombatEvent) {
    return 0.0f;
}

float AFortMusicManager::GetEventHeatPercent(TEnumAsByte<EFortCombatEvents::Type> CombatEvent) {
    return 0.0f;
}

UFortMusicVoice* AFortMusicManager::ChangePrimaryMusic(UFortMusicAsset* NewMusicAsset, bool bPlayStinger) {
    return NULL;
}


