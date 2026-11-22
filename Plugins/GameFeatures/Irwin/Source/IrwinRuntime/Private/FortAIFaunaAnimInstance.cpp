#include "FortAIFaunaAnimInstance.h"

UFortAIFaunaAnimInstance::UFortAIFaunaAnimInstance() {
    this->AverageSpeed = 0.00f;
    this->AverageSpeedTimeFrame = 1.00f;
    this->bHasValidAimTarget = false;
    this->bIsSurfaceSwimming = false;
    this->bIsMovingOnGround = true;
    this->LookAtAlpha = 0.00f;
    this->MaxDistanceToPlayerForLookAt = -1.00f;
    this->LookAtTooFarFromPlayerTimeOut = 2.00f;
    this->bDisableLookAtDuringMontage = true;
    this->DisableHeadTrackingCurveName = TEXT("DisableHeadTracking");
}

void UFortAIFaunaAnimInstance::CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds) {
}


