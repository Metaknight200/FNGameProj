#include "AthenaWidgetLibrary.h"

UAthenaWidgetLibrary::UAthenaWidgetLibrary() {
}

bool UAthenaWidgetLibrary::IsPlayingReplay(const UObject* WorldContextObject) {
    return false;
}

APlayerState* UAthenaWidgetLibrary::GetRelevantPlayerState(const APlayerController* PlayerController) {
    return NULL;
}


