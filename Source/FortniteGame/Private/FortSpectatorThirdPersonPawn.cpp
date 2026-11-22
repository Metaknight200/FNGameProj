#include "FortSpectatorThirdPersonPawn.h"
#include "FortSpectatorCamComp_ThirdPerson.h"

AFortSpectatorThirdPersonPawn::AFortSpectatorThirdPersonPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortSpectatorCamComp_ThirdPerson>(TEXT("SpectatorCameraComponent0"))) {
    this->SpectatorCameraComponent->SetupAttachment(RootComponent);
}


