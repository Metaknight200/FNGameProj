#include "TowhookParams.h"

FTowhookParams::FTowhookParams() {
    this->MaxCableLength = 0.00f;
    this->MinCableLength = 0.00f;
    this->bUseSpring = false;
    this->bUseRope = false;
    this->bUseAsTractorBeam = false;
    this->SpringStiffness = 0.00f;
    this->SpringDamping = 0.00f;
    this->SpringMaxStiffnessForce = 0.00f;
    this->SpringMaxStiffnessVelocity = 0.00f;
    this->SpringDeformationRate = 0.00f;
    this->RopeGive = 0.00f;
    this->RopeBreakForce = 0.00f;
    this->RopeYankForce = 0.00f;
    this->ExtendSpeedKmh = 0.00f;
    this->ContractSpeedKmh = 0.00f;
    this->bApplySpringToSelf = false;
    this->bApplySpringToOther = false;
    this->bTakeUpSlack = false;
    this->bEnableParentDominates = false;
    this->bAttachToOwnersVehicle = false;
    this->TractorBeamRestLength = 0.00f;
    this->TractorBeamUpSpringStiffness = 0.00f;
    this->TractorBeamSideSpringStiffness = 0.00f;
    this->TractorBeamUpSpringDamping = 0.00f;
    this->TractorBeamSideSpringDamping = 0.00f;
    this->TractorBeamMaxStiffnessTime = 0.00f;
}

