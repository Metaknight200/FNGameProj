#include "FortCreativeLockDevice.h"

AFortCreativeLockDevice::AFortCreativeLockDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedLocalController = NULL;
}

void AFortCreativeLockDevice::HandleLocalPawnExitPreviewArea() {
}

void AFortCreativeLockDevice::HandleLocalPawnEnterToPreviewArea(APawn* Pawn) {
}


