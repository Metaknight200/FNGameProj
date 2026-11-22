#include "FortAthenaNpcPatrollingComponent.h"

UFortAthenaNpcPatrollingComponent::UFortAthenaNpcPatrollingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanPropagatePatrollingProgression = false;
    this->CachedBotController = NULL;
    this->PatrolPath = NULL;
}

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(const AFortAthenaPatrolPath* NewPatrolPath) {
}


