#include "FortBTTask_CaretakerMoveTo.h"

UFortBTTask_CaretakerMoveTo::UFortBTTask_CaretakerMoveTo() {
    this->NodeName = TEXT("CaretakerMoveTo");
    this->PathObstacleAction = EPathObstacleAction::Melee;
    this->bEnableSlowdownAtGoal = false;
    this->bMoveDirectlyTowards = false;
    this->bStopAtGoal = true;
    this->bFinishMoveOnOverlap = true;
}


