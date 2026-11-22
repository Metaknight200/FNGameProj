#include "FortGameModeFrontEnd.h"
#include "FortGameStateFrontEnd.h"
#include "FortPlayerControllerFrontEnd.h"
#include "FortPlayerStateFrontEnd.h"
#include "FortUIBaseClass.h"

AFortGameModeFrontEnd::AFortGameModeFrontEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateFrontEnd::StaticClass();
    this->PlayerControllerClass = AFortPlayerControllerFrontEnd::StaticClass();
    this->PlayerStateClass = AFortPlayerStateFrontEnd::StaticClass();
    this->HUDClass = AFortUIBaseClass::StaticClass();
    this->TheaterMapViewer = NULL;
}


