#include "ProjectileTrajectorySplineInfo.h"

FProjectileTrajectorySplineInfo::FProjectileTrajectorySplineInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->InitialLocation = FVector::ZeroVector;
    this->InitialVelocity = FVector::ZeroVector;
    this->Instigator = NULL;
    this->MaxSpeed = 0.00f;
    this->Gravity = 0.00f;
    this->Friction = 0.00f;
    this->Bounciness = 0.00f;
    this->TimeStep = 0.00f;
    this->TraceExtent = 0.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->MaxBounces = 0;
    this->MaxSteps = 0;
    this->MaxDistanceBetweenSplinePoints = 0.00f;
    this->InitialDistance = 0.00f;
    this->LinearDamping = 0.00f;
}

