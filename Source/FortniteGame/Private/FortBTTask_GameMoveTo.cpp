#include "FortBTTask_GameMoveTo.h"

UFortBTTask_GameMoveTo::UFortBTTask_GameMoveTo() {
    this->NodeName = TEXT("FortMoveTo");
    this->PathObstacleAction = EPathObstacleAction::Melee;
    this->PushBumpedPawnClass = NULL;
    this->bDetectUnexpectedPathBlockingObstacles = true;
    this->bEnableSlowdownAtGoal = false;
    this->bStopAtGoal = true;
    this->bFinishMoveOnOverlap = true;
    this->bDeimosFlavor = false;
}


