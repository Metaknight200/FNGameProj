#include "FortValetAudioController.h"

AFortValetAudioController::AFortValetAudioController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RPMResetTime_Native = 0.00f;
    this->JitterAmount_Native = 0.00f;
    this->ShiftTimeThreshold_Native = 0.00f;
    this->TimeSinceShift_Native = 0.00f;
    this->EngineRPMInterp_Native = 0.00f;
    this->EngineRPMLinear_Native = 0.00f;
    this->MinRPMRange_Native = 0.00f;
    this->MaxRPMRange_Native = 0.00f;
    this->bCurrentlyShifting_Native = false;
    this->CurrentAccelRateGearModifier_Native = 0.00f;
    this->CurrentAccelRate_Native = 0.00f;
    this->CurrentGear_Native = 0;
    this->MaxGear_Native = 0;
    this->DefaultAccelRateScalar_Native = 0.00f;
    this->GearAttackInterpSpeed_Native = 0.00f;
    this->GearReleaseInterpSpeed_Native = 0.00f;
    this->AccelRateScalarFirstGear_Native = 0.00f;
    this->AccelRateScalarMinGear_Native = 0.00f;
    this->AccelRateScalarMaxGear_Native = 0.00f;
    this->ShiftToRPMStart_Native = 0.00f;
    this->ShiftToRPMEnd_Native = 0.00f;
    this->ShiftFromRPMStart_Native = 0.00f;
    this->ShiftFromRPMEnd_Native = 0.00f;
    this->MaxRPMSawtoothDecrement_Native = 0.00f;
    this->MaxRPMSawtoothRepeatTime_Native = 0.00f;
    this->DownhillAccelScalar_Native = 0.00f;
    this->UphillAccelScalar_Native = 0.00f;
    this->RPMFloatCurveMapping = NULL;
    this->NormalizedSpeed_Native = 0.00f;
    this->SuspValue_Native = 0.00f;
    this->bIsHandbraking_Native = false;
    this->MotoSynthVolume_Native = 0.00f;
    this->MotoSynthInitialFadeInTime_Native = 0.50f;
    this->MotoSynthLogRPM_Native = 0.00f;
    this->bHasFuel_Native = false;
    this->bIsInWater_Native = false;
    this->bLocalPlayerInVehicle_Native = false;
    this->TimeLocalPlayerEnteredVehicle_Native = 0.00f;
    this->bAttemptingDirectionChange_Native = false;
    this->bPreDestroy_Native = false;
    this->bEngineLoad_Native = false;
    this->SkidAmount_Native = 0.00f;
    this->TimeSinceAwoken_Native = 0.00f;
    this->bDestroyed_Native = false;
    this->TimeSinceSurfaceChange_Native = 0.00f;
    this->OnInitialSuspensionSound = NULL;
    this->AngleForSkidding_Native = 0.00f;
    this->SpringCompressionMultiplier = 1.00f;
    this->MotoSynthMaxVolume_Native = 0.00f;
    this->Engine_Native = NULL;
    this->BoostAudioComponent_Native = NULL;
    this->SynthComponentMoto_Native = NULL;
    this->SuspensionCollisionComponent_Native = NULL;
}

void AFortValetAudioController::Update_Native() {
}


void AFortValetAudioController::OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude) {
}

void AFortValetAudioController::CacheValetVehicle(AFortDagwoodVehicle* InVehicle) {
}


