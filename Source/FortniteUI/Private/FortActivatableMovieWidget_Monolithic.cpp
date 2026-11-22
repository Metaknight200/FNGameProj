#include "FortActivatableMovieWidget_Monolithic.h"

UFortActivatableMovieWidget_Monolithic::UFortActivatableMovieWidget_Monolithic() {
    this->MediaSourceMono = NULL;
    this->StreamedMediaPlayer = NULL;
    this->Image_White = NULL;
}

void UFortActivatableMovieWidget_Monolithic::StreamedVideoOnUrlSuccess(const FString& URL) {
}

void UFortActivatableMovieWidget_Monolithic::StreamedVideoOnUrlFailure(const FString& URL) {
}


void UFortActivatableMovieWidget_Monolithic::Play() {
}

void UFortActivatableMovieWidget_Monolithic::LoadStreamingVideo(FVideoConfig_Mono Config, UFortStreamMediaSource* StreamMediaSource, bool& bNoAutoPlay, bool bStartWithWhite) {
}

void UFortActivatableMovieWidget_Monolithic::EnableFadeInFromWhite(bool bInEnable) {
}


