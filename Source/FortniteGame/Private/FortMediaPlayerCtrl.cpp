#include "FortMediaPlayerCtrl.h"

UFortMediaPlayerCtrl::UFortMediaPlayerCtrl() {
    this->MediaPlayer = NULL;
    this->MediaSource = NULL;
    this->InitialBufferDurationInSeconds = 4.00f;
    this->SegmentBufferDurationInSeconds = 2.00f;
    this->ServerTimeOffsetSmoothingFactor = 20.00f;
    this->MaxConsecutiveDesyncedFrames = 30;
}

void UFortMediaPlayerCtrl::SetPlayerStartTime(float InRequestSentTime) {
}

bool UFortMediaPlayerCtrl::Play() {
    return false;
}

bool UFortMediaPlayerCtrl::OpenSourceWithOptions(UMediaSource* InMediaSource, const FMediaPlayerOptions& InOptions) {
    return false;
}

bool UFortMediaPlayerCtrl::GetPlayerStateIsPreparing() const {
    return false;
}


