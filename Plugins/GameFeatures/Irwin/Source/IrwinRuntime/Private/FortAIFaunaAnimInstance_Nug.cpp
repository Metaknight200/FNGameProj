#include "FortAIFaunaAnimInstance_Nug.h"

UFortAIFaunaAnimInstance_Nug::UFortAIFaunaAnimInstance_Nug() {
    this->bIsBeingHeld = false;
    this->LowerBodyMaskAlpha = 1.00f;
    this->bShouldExitJump = false;
    this->MovingPlayRate = 0.00f;
    this->bShouldLean = false;
    this->LeanDirection = 0.00f;
    this->bTurnAngleIsNegative = false;
    this->InterruptibleCurveName = TEXT("Interruptible");
    this->bCanTransitionIdleToIdleTurn = false;
    this->bCanTransitionIdleToLocomotionTurn = false;
    this->bCanTransitionIdleToMoving = false;
    this->bCanTransitionIdleToJumpApex = false;
    this->bCanTransitionMovingToIdle = false;
    this->bCanTransitionJumpStartToJumpApex = false;
    this->bCanTransitionJumpApexToJumpLoop = false;
    this->bCanTransitionLocomotionTurnToIdle = false;
    this->bCanTransitionLocomotionTurnToMoving = false;
    this->bCanTransitionIdleTurnToMoving = false;
    this->bCanTransitionIdleTurnToIdle = false;
    this->ShouldExitJump_SpeedThreshold = 10.00f;
    this->MovingPlayRate_SpeedThreshold = 250.00f;
    this->MovingPlayRate_SlowSpeedDivisor = 71.74f;
    this->MovingPlayRate_FastSpeedDivisor = 218.45f;
    this->MovingPlayRate_InterpSpeed = 8.00f;
    this->MovingPlayRate_MinClamp = 0.20f;
    this->MovingPlayRate_MaxClamp = 1.20f;
    this->LeanDirection_SpeedThreshold = 180.00f;
    this->ShouldLean_SpeedThreshold = 350.00f;
    this->InterruptibleCurveValue_LargeThreshold = 0.95f;
    this->Speed_MovingThreshold = 10.00f;
    this->Speed_IdleThreshold = 5.00f;
    this->IdleTurnTransition_SpeedThreshold = 100.00f;
    this->LocomotionTurnTransition_SpeedThreshold = 100.00f;
}


