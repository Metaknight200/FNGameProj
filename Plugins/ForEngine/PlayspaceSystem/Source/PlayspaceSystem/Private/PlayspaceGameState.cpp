#include "PlayspaceGameState.h"
#include "Playspace.h"

APlayspaceGameState::APlayspaceGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootPlayspaceClass = APlayspace::StaticClass();
    this->bUsePlayspaceSystem = false;
    this->bUsePlayerSpawningComponent = false;
    this->PlayspaceManagerComponentCached = NULL;
    this->PlayerSpawningManagerCached = NULL;
}


