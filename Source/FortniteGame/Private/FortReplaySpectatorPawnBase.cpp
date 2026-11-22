#include "FortReplaySpectatorPawnBase.h"
#include "FortSpectatorCameraComponent.h"

AFortReplaySpectatorPawnBase::AFortReplaySpectatorPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddDefaultMovementBindings = false;
    this->SpectatorCameraComponent = CreateDefaultSubobject<UFortSpectatorCameraComponent>(TEXT("SpectatorCameraComponent0"));
    this->SpectatorCameraComponent->SetupAttachment(RootComponent);
}


