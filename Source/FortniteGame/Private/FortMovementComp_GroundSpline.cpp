#include "FortMovementComp_GroundSpline.h"
#include "Net/UnrealNetwork.h"

UFortMovementComp_GroundSpline::UFortMovementComp_GroundSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineLocationOffsetZ = 0.00f;
    this->bOffsetZIsAbsolute = false;
    this->bTickGroundSplineMovement = false;
    this->NumberOfMoveRetriesPerTick = 11;
    this->ClimbSpeedPercent = 0.50f;
    this->PitchSpeed = 0.00f;
    this->PitchThreshold = 0.00f;
    this->PitchThresholdSmoothing = 0.00f;
    this->LinearJerk = 0.00f;
    this->YawJerk = 0.00f;
    this->GroundCheckFrequency = 0.20f;
    this->GroundCheckDistance = 0.00f;
    this->AttemptUnstickMinimumAngleDegrees = 45.00f;
    this->PawnPushTime = 0.00f;
    this->ClientImmediatelySnapToReplicatedLocationTime = 3.00f;
    this->ClientImmediatelySnapToReplicatedLocationDistanceMinimumSquared = 360000.00f;
    this->PawnPushForceMultiplier = 1.00f;
    this->GameplayEffectClassDestroyBuildings = NULL;
    this->SplineDistanceReplicationRecoveryPercent = 0.10f;
    this->SplineDistanceReplicationRecoveryMinDistancePerSecond = 100.00f;
    this->SpeedTimeReplicationRecoveryPercent = 0.10f;
    this->AbilitySystemComponent = NULL;
}

void UFortMovementComp_GroundSpline::TeleportToDistanceOnSpline(USplineComponent* NewTravelSpline, float Distance) {
}

void UFortMovementComp_GroundSpline::SetTargetSpeeds(const FGroundSplineSpeedData& NewTargetSpeeds) {
}

void UFortMovementComp_GroundSpline::SetSpline(USplineComponent* NewTravelSpline, float NewDistanceOnSpline) {
}

void UFortMovementComp_GroundSpline::SetAbilitySystemComponent(UAbilitySystemComponent* NewAbilitySystemComponent) {
}

void UFortMovementComp_GroundSpline::OnRep_ReplicatedTargetSpeeds() {
}

void UFortMovementComp_GroundSpline::OnRep_ReplicatedSplineLocationData() {
}

bool UFortMovementComp_GroundSpline::GetTransformAtDistanceOnSpline(FTransform& OutTransform, float Distance) const {
    return false;
}

FGroundSplineSpeedData UFortMovementComp_GroundSpline::GetTargetSpeeds() const {
    return FGroundSplineSpeedData{};
}

float UFortMovementComp_GroundSpline::GetSplineDistance() const {
    return 0.0f;
}

USplineComponent* UFortMovementComp_GroundSpline::GetSpline() const {
    return NULL;
}

FGroundSplineSpeedData UFortMovementComp_GroundSpline::GetCurrentSpeeds() const {
    return FGroundSplineSpeedData{};
}

void UFortMovementComp_GroundSpline::ClientOnlySnapToServerLocationAndSpeed() {
}

void UFortMovementComp_GroundSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMovementComp_GroundSpline, bTickGroundSplineMovement);
    DOREPLIFETIME(UFortMovementComp_GroundSpline, ReplicatedSplineLocationData);
    DOREPLIFETIME(UFortMovementComp_GroundSpline, ReplicatedTargetSpeeds);
}


