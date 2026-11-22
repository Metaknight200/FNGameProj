#include "FortGameModeBase.h"
#include "FortGameStateBase.h"

AFortGameModeBase::AFortGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateBase::StaticClass();
}


