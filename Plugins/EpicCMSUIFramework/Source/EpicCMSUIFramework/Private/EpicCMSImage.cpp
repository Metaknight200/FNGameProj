#include "EpicCMSImage.h"

UEpicCMSImage::UEpicCMSImage() {
    this->bMatchImageSize = true;
    this->ExternalMedia = NULL;
    this->bDownloadingExternalMedia = false;
}

void UEpicCMSImage::SetMediaURL(const FString& MediaUrl) {
}


