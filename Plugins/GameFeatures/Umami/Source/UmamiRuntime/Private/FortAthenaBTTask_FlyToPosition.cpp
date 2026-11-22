#include "FortAthenaBTTask_FlyToPosition.h"

UFortAthenaBTTask_FlyToPosition::UFortAthenaBTTask_FlyToPosition() {
    this->NodeName = TEXT("FortAthenaFlyToPosition");
    this->bShouldSlowdownWhenApproachingGoal = true;
    this->bProjectStartOnNavArea = true;
    this->bDirectMovementOnProjectionFailure = false;
}


