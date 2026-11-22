#include "FortMovementComp_AIChar.h"

UFortMovementComp_AIChar::UFortMovementComp_AIChar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeimos = false;
    this->CachedAthenaPathFollowingComp = NULL;
    this->CachedAthenaAIController = NULL;
}


