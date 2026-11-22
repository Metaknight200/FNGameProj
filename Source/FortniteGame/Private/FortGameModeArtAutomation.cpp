#include "FortGameModeArtAutomation.h"
#include "GameFramework/SpectatorPawn.h"

AFortGameModeArtAutomation::AFortGameModeArtAutomation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = ASpectatorPawn::StaticClass();
}


