#include "FortPhysicsObjectCollisionEffectsData.h"

UFortPhysicsObjectCollisionEffectsData::UFortPhysicsObjectCollisionEffectsData() {
    this->MinRetriggerTime = 0.50f;
    this->MinRetriggerDistance = 20.00f;
    this->MinWaterVelocityThreshold = 0.00f;
    this->MinMediumWaterVelocityThreshold = 0.00f;
    this->MinLargeWaterVelocityThreshold = 0.00f;
    this->MaxLargeWaterVelocityThreshold = 0.00f;
    this->MinImpulseMagnitude = 50.00f;
    this->MinMediumImpulseMagnitude = 150.00f;
    this->MinLargeImpulseMagnitude = 250.00f;
    this->MaxLargeImpulseMagnitude = 0.00f;
    this->LinearVelocityThreshold = 100.00f;
    this->AngularVelocityThreshold = 30.00f;
    this->RollingCosThreshold = 0.20f;
    this->MovingBufferTime = 0.20f;
}


