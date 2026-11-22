#include "FortAthenaAIBotEvaluator_EvasiveManeuvers.h"

UFortAthenaAIBotEvaluator_EvasiveManeuvers::UFortAthenaAIBotEvaluator_EvasiveManeuvers() {
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->JetpackStrafeExecutionStatusName = TEXT("AIEvaluator_JetpackStrafe_ExecutionStatus");
    this->DodgeName = TEXT("AIEvaluator_Dodge_ExecutionStatus");
    this->DestinationKeyName = TEXT("AIEvaluator_Dodge_Destination");
    this->bDoCrouching = true;
    this->bDoDodging = true;
    this->bDoJumping = true;
    this->bDoJumpingDistanceCheck = true;
    this->bDoJetpackStrafing = false;
    this->bDoJetpackStrafingDistanceCheck = true;
    this->JetpackStrafingRequiredFuelPercent = 0.50f;
    this->JetpackStrafeNavPadding = 150.00f;
    this->CacheEMDigestedSkillSet = NULL;
}

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}


