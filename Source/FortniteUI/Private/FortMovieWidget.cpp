#include "FortMovieWidget.h"

UFortMovieWidget::UFortMovieWidget() {
    this->MediaPlayer = NULL;
    this->MediaTexture = NULL;
    this->bIncludeAudio = true;
    this->SoundComponent = NULL;
}

bool UFortMovieWidget::SetMediaSource(UMediaPlayer* InMediaPlayer, UMediaSource* InMediaSource, const FMediaPlayerOptions& PlayerOptions, bool bPlayOnOpen, bool bLooping) {
    return false;
}

void UFortMovieWidget::RequestStopMovie() {
}

void UFortMovieWidget::RequestPlayMovie(bool bShouldRewind) {
}


bool UFortMovieWidget::HasPlayerForSource(UMediaSource* InMediaSource) const {
    return false;
}

UMediaTexture* UFortMovieWidget::GetMediaTexture() const {
    return MediaTexture;
}

UMediaSoundComponent* UFortMovieWidget::GetMediaSoundComponent() const {
    return NULL;
}

UMediaPlayer* UFortMovieWidget::GetMediaPlayer() const {
    return MediaPlayer;
}

void UFortMovieWidget::CleanupMediaPlayer() {
}


