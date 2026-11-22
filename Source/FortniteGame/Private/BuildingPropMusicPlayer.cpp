#include "BuildingPropMusicPlayer.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

ABuildingPropMusicPlayer::ABuildingPropMusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowInteract = false;
    this->bAllowWeakSpots = false;
    this->bCheckAlternateHotfixValue = false;
    this->bPlayingByDefault = false;
    this->bPlayRandomSong = false;
    this->MusicTrackTable = NULL;
    this->SongAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SongAudioComponent"));
    this->PlaybackType = EMusicTrackPlayback::Enabled;
    this->SongAudioComponent->SetupAttachment(RootComponent);
}

void ABuildingPropMusicPlayer::StartSongForOptionsChange() {
}

void ABuildingPropMusicPlayer::OnRep_PlayingSongData() {
}

void ABuildingPropMusicPlayer::LoadThenPlaySong_Implementation() {
}

void ABuildingPropMusicPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingPropMusicPlayer, MusicArray);
    DOREPLIFETIME(ABuildingPropMusicPlayer, PlayingSongData);
}


