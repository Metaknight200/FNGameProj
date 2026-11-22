#include "SpatialGamePlayActorLoadingStateUpdatedContext.h"

FSpatialGamePlayActorLoadingStateUpdatedContext::FSpatialGamePlayActorLoadingStateUpdatedContext() {
    this->SpatialGameplayInterfaceActor = NULL;
    this->State = ESpatialLoadingState::Uninitialized;
}

