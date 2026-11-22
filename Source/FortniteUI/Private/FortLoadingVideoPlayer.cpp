#include "FortLoadingVideoPlayer.h"

UFortLoadingVideoPlayer::UFortLoadingVideoPlayer() {
    this->VideoTexture = NULL;
    this->SoundComponent = NULL;
    this->FileMediaSource = NULL;
}

void UFortLoadingVideoPlayer::RequestSuccess(const FString& URL) {
}

void UFortLoadingVideoPlayer::RequestFailure(const FString& URL) {
}

UMediaTexture* UFortLoadingVideoPlayer::GetMediaTexture() {
    return NULL;
}

UMediaPlayer* UFortLoadingVideoPlayer::GetMediaPlayer() {
    return NULL;
}


