#include "PlayspacePlayerController.h"
#include "PlayspaceControllerComponent_PlayerSpawning.h"

APlayspacePlayerController::APlayspacePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bUsePlayerSpawningComponent = false;
    this->ControllerSpawningComponent = UPlayspaceControllerComponent_PlayerSpawning::StaticClass();
}


