#include "FortAIFaunaAnimInstance_Burt.h"

UFortAIFaunaAnimInstance_Burt::UFortAIFaunaAnimInstance_Burt() {
    this->MovingPlayRate = 0.00f;
    this->LocomotionPoseAdditiveAlpha = 0.00f;
    this->bEnableHeadTiltUpAdditive = false;
    this->bTurnAngleIsNegative = false;
    this->DisableLocomotionAdditiveCurveName = TEXT("DisableLocomotionAdditive");
    this->InterruptibleCurveName = TEXT("Interruptible");
    this->bCanTransitionIdleToApex = false;
    this->bCanTransitionIdleToMoving = false;
    this->bCanTransitionMovingToIdle = false;
    this->bCanTransitionLandToIdle = false;
    this->bCanTransitionLandToJumpStart = false;
    this->bCanTransitionJumpStartToApex = false;
    this->bCanTransitionApexToFall = false;
    this->bCanTransitionFallToLand = false;
    this->bCanTransitionIdleTurnToIdle = false;
    this->bCanTransitionLocomotionTurnToIdle = false;
    this->bCanTransitionLocomotionTurnToMoving = false;
    this->bCanTransitionIdleTurnToMoving = false;
    this->MovingPlayRate_SpeedThreshold = 150.00f;
    this->MovingPlayRate_SlowSpeedDivisor = 150.00f;
    this->MovingPlayRate_FastSpeedDivisor = 600.00f;
    this->MovingPlayRate_MinClamp = 0.20f;
    this->MovingPlayRate_MaxClamp = 1.20f;
    this->MovingPlayRate_InterpSpeed = 6.00f;
    this->LocomotionPoseAdditiveAlpha_InterpSpeed = 8.00f;
    this->EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier = 2.00f;
    this->EnableHeadTiltUpAdditive_ModOperand = 20.00f;
    this->InterruptibleCurveValue_LargeThreshold = 0.95f;
    this->InterruptibleCurveValue_TurnAngleThreshold = 0.50f;
    this->Speed_MovingThreshold = 10.00f;
    this->Speed_IdleThreshold = 5.00f;
    this->TurnAngle_LargeThreshold = 90.00f;
}


