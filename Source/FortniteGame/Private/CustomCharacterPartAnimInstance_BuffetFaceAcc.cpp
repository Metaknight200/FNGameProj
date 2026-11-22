#include "CustomCharacterPartAnimInstance_BuffetFaceAcc.h"

UCustomCharacterPartAnimInstance_BuffetFaceAcc::UCustomCharacterPartAnimInstance_BuffetFaceAcc() {
    this->BodyMesh = NULL;
    this->RigidBodyAlpha = 0.00f;
    this->TrailAlpha = 0.00f;
    this->SkydiveFloatPoseFixAlpha = 0.00f;
    this->IsBackblingOnAlpha = 0.00f;
    this->BackpackOnHeadUpDnAlpha = 0.00f;
    this->IsLongBackblingOnAlpha = 0.00f;
    this->IsShortBackblingOnAlpha = 0.00f;
    this->IsJumpPoseFixNeededAlpha = 0.00f;
    this->RelaxSpeed = 0.00f;
    this->HeadFwdBwdRotation = 0.00f;
    this->bIsBackblingOn = false;
    this->bIsLongBackblingOn = false;
    this->bIsShortBackblingOn = false;
    this->bIsHairConstraintOn = false;
    this->RelaxSpeedInRangeA = 85.00f;
    this->RelaxSpeedInRangeB = 110.00f;
    this->RelaxSpeedOutRangeA = 1.50f;
    this->RelaxSpeedOutRangeB = 4.00f;
    this->TrailAlphaSkydiving = 0.50f;
    this->TrailAlphaFalling = 0.75f;
    this->LongBackblingThreshold = 40.00f;
    this->RigidBodyAlphaSkydiving = 0.60f;
    this->GravityStrength = -980.00f;
    this->DeltaTransformHead = TEXT("head");
    this->DeltaTransformNeck = TEXT("neck_01");
}

void UCustomCharacterPartAnimInstance_BuffetFaceAcc::GenerateBackpackAlphas() {
}


