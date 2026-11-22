#include "SidekickOverlay.h"

USidekickOverlay::USidekickOverlay() {
    this->HBox_Outer = NULL;
    this->EntryBox_Self = NULL;
    this->EntryBox_Party = NULL;
    this->EntryBox_Streams = NULL;
    this->Spacer_Viewport = NULL;
    this->Text_Houseparty = NULL;
    this->Widget_StreamLimited = NULL;
    this->MaximumConcurrentStreams = 4;
    this->MinVideoDisplayDuration = 5.00f;
    this->FOMOSessionDurationHours = 4.00f;
    this->AvatarBaseURL = TEXT("https://res.cloudinary.com/lifeonair/image/upload/h_128,w_128,dpr_1/");
    this->AutoUpdatePeriod = 0.10f;
    this->MaximumSimultaneousReactions = 5;
    this->MaxStreamingThumbnailSizeX = 630;
    this->MaxStreamingThumbnailSizeY = 630;
    this->StreamingThumbnailCaptureInterval = 30.00f;
    this->GameStreamingAudioCaptureSubmix = NULL;
}


