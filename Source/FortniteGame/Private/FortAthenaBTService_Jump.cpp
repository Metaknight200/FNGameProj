#include "FortAthenaBTService_Jump.h"

UFortAthenaBTService_Jump::UFortAthenaBTService_Jump() {
    this->NodeName = TEXT("Player Bot Jump");
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->JumpInputReleaseDelay = 1.00f;
}


