#include "FortFrontendPendingAsyncLevel.h"

UFortFrontendPendingAsyncLevel::UFortFrontendPendingAsyncLevel() {
    this->SubgameStreamingLevel = NULL;
    this->FrontEndFlow = NULL;
    this->CameraOverride = EFrontEndCamera::Invalid;
}

void UFortFrontendPendingAsyncLevel::HandleLevelLoadedAsync() {
}


