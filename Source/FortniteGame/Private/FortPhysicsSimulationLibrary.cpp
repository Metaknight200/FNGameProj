#include "FortPhysicsSimulationLibrary.h"

UFortPhysicsSimulationLibrary::UFortPhysicsSimulationLibrary() {
}

void UFortPhysicsSimulationLibrary::WakeUp(AActor* PhysicsObject) {
}

void UFortPhysicsSimulationLibrary::SetPhysicsLinearVelocity(AActor* PhysicsObject, FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::SetPhysicsAngularVelocity(AActor* PhysicsObject, FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::PutToSleep(AActor* PhysicsObject) {
}

void UFortPhysicsSimulationLibrary::OverridePhysicsReplicationErrorCorrection(AActor* PhysicsObject, FRigidBodyErrorCorrection NewErrorCorrection) {
}

bool UFortPhysicsSimulationLibrary::IsPhysicsObjectActiveInSimulation(const AActor* PhysicsObject) {
    return false;
}

EFortPhysicsSimSize UFortPhysicsSimulationLibrary::GetPhysicsObjectSimSize(const AActor* PhysicsObject) {
    return EFortPhysicsSimSize::Small;
}

bool UFortPhysicsSimulationLibrary::DoesPhysicsObjectMeetSizeRequirement(const AActor* PhysicsObject, const EFortPhysicsSimSize SizeRequirement) {
    return false;
}

bool UFortPhysicsSimulationLibrary::DoesPhysicsObjectHaveGravity(const AActor* PhysicsObject) {
    return false;
}

void UFortPhysicsSimulationLibrary::DeactivateSimulation(AActor* PhysicsObject) {
}

FVector UFortPhysicsSimulationLibrary::ComputeTorqueForTargetRotation(AActor* PhysicsObject, const FRotator& TargetRotation, float Stiffness, float Damping, float MaxAccel) {
    return FVector{};
}

void UFortPhysicsSimulationLibrary::ClearPhysicsReplicationErrorCorrection(AActor* PhysicsObject) {
}

bool UFortPhysicsSimulationLibrary::CanActorSimulatePhysics(const AActor* Actor) {
    return false;
}

void UFortPhysicsSimulationLibrary::AddPhysicsTorque(AActor* PhysicsObject, FVector Torque, FName BoneName, bool bAccelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsImpulseAtLocation(AActor* PhysicsObject, FVector Impulse, FVector Location, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsImpulse(AActor* PhysicsObject, FVector Impulse, FName BoneName, bool bVelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsForce(AActor* PhysicsObject, FVector Force, FName BoneName, bool bAccelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsAngularImpulse(AActor* PhysicsObject, FVector AngularImpulse, FName BoneName, bool bVelChange) {
}

void UFortPhysicsSimulationLibrary::ActivateSimulation(AActor* PhysicsObject) {
}


