#include "BiplaneAsyncOutPersistent.h"

FBiplaneAsyncOutPersistent::FBiplaneAsyncOutPersistent() {
    this->bIsEngineOn = false;
    this->bIsFlying = false;
    this->bAutoStartEngineInAir = false;
    this->bEngineStartIsBeingHeld = false;
}

