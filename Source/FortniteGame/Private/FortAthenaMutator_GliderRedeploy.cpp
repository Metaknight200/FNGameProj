#include "FortAthenaMutator_GliderRedeploy.h"

AFortAthenaMutator_GliderRedeploy::AFortAthenaMutator_GliderRedeploy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->bGliderRedeploy = true;
}


