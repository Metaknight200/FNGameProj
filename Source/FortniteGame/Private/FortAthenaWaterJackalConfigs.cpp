#include "FortAthenaWaterJackalConfigs.h"

UFortAthenaWaterJackalConfigs::UFortAthenaWaterJackalConfigs() {
    this->RopeAccelRangeMin = 1024.00f;
    this->RopeAccelRangeMax = 5524.00f;
    this->RopeAccelRangeDefault = 1524.00f;
    this->RopeAccel = 10000.00f;
    this->ReverseCorrectionRopeAccelMultiplier = 1.50f;
    this->MaxSpeedForAccel = 50.00f;
    this->YawAngularDrag = 10.00f;
    this->LinearDrag = 0.50f;
    this->CustomLateralFriction = 3.00f;
}


