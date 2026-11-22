#include "TireInfo.h"

FTireInfo::FTireInfo() {
    this->TireStaticMesh = NULL;
    this->UndercarriageCollisionStaticMesh = NULL;
    this->PoppedTireSpringLength = 0.00f;
    this->PoppedTireSpringStiff = 0.00f;
    this->PoppedTireSpringDamp = 0.00f;
    this->TireMeshYaw = 0.00f;
    this->TireMeshLateralAdjustment = 0.00f;
    this->TireMeshScaleFront = 0.00f;
    this->TireMeshScaleRear = 0.00f;
    this->UprightRollStiff = 0.00f;
    this->UprightRollDamp = 0.00f;
    this->UprightPitchStiff = 0.00f;
    this->UprightPitchDamp = 0.00f;
    this->UprightYawStiff = 0.00f;
    this->UprightYawDamp = 0.00f;
    this->MidAxleForwardAdjust = 0.00f;
    this->TireDirtLoop = NULL;
    this->TireGrassLoop = NULL;
    this->TireRoadLoop = NULL;
    this->SuspensionLight = NULL;
    this->SuspensionMedium = NULL;
    this->SuspensionHeavy = NULL;
    this->AppliedGameplayEffect = NULL;
}

