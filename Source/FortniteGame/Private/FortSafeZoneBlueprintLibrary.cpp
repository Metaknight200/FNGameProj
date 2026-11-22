#include "FortSafeZoneBlueprintLibrary.h"

UFortSafeZoneBlueprintLibrary::UFortSafeZoneBlueprintLibrary() {
}

TScriptInterface<IFortSafeZoneInterface> UFortSafeZoneBlueprintLibrary::GetRelevantSafeZoneInterface(APlayerState* PlayerContext) {
    return NULL;
}


