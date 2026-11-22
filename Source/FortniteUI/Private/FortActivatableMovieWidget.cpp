#include "FortActivatableMovieWidget.h"

UFortActivatableMovieWidget::UFortActivatableMovieWidget() {
    this->bOverwriteSkip = false;
    this->Image_White = NULL;
    this->bShowSubtitles = false;
    this->bNoAudio = false;
    this->VideoPlayer = NULL;
    this->SoundClass = NULL;
    this->SoundComponent = NULL;
    this->SubtitlePlayer = NULL;
    this->SubtitleOverlays = NULL;
    this->LastInteractionTime = 0.00f;
    this->bControlsVisible = false;
    this->Image_VideoTexture = NULL;
    this->Subtitles = NULL;
    this->Button_Skip = NULL;
    this->Image_Throbber = NULL;
    this->SafeZonePadding = NULL;
    this->ActiveSoundMix = NULL;
    this->DefaultSubmix = NULL;
    this->LicensedSubmix = NULL;
}

void UFortActivatableMovieWidget::StreamedVideoOnUrlSuccess(const FString& URL) {
}

void UFortActivatableMovieWidget::StreamedVideoOnUrlFailure(const FString& URL) {
}

void UFortActivatableMovieWidget::Stop(bool InForceClose) {
}


bool UFortActivatableMovieWidget::ShouldAutoPlayVideo(FName AssetName, bool bAllowRecord) const {
    return false;
}

void UFortActivatableMovieWidget::SetMediaPreEndTimeSeconds(float InSeconds) {
}

void UFortActivatableMovieWidget::SetAudioDisable(bool bInDisable) {
}

void UFortActivatableMovieWidget::Play() {
}

void UFortActivatableMovieWidget::LoadStreamingVideo(const FVideoWidgetConfig& Config) {
}

UMediaPlayer* UFortActivatableMovieWidget::GetMediaPlayer() const {
    return NULL;
}

void UFortActivatableMovieWidget::EnableFadeInFromWhite(bool bInEnable) {
}


