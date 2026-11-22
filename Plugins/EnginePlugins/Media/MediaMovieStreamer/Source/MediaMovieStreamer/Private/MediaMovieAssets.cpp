#include "MediaMovieAssets.h"

UMediaMovieAssets::UMediaMovieAssets() {
    this->MediaPlayer = NULL;
    this->MediaSoundComponent = NULL;
    this->MediaSource = NULL;
    this->MediaTexture = NULL;
}

void UMediaMovieAssets::OnMediaEnd() {
}


