#include "FortSkyTubePhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UFortSkyTubePhysicsComponent::UFortSkyTubePhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxTubeSpeed = 2200.00f;
    this->MaxTubeAcceleration = 3000.00f;
    this->bMagnetizeWhenNotInSkytube = true;
    this->SkyTube = NULL;
    this->PrevSkyTube = NULL;
    this->bMagnetized = true;
}

void UFortSkyTubePhysicsComponent::SetMagnetization(const bool bInMagnetized) {
}

void UFortSkyTubePhysicsComponent::OnRep_SkyTube(AFortSkyTube* PreviousSkyTube) {
}

void UFortSkyTubePhysicsComponent::OnRep_Magnetized(bool bPreviousMagnetized) {
}

bool UFortSkyTubePhysicsComponent::IsSkyTubeForceEnabled() const {
    return false;
}

bool UFortSkyTubePhysicsComponent::IsMagnetized() const {
    return bMagnetized;
}

bool UFortSkyTubePhysicsComponent::IsInSkyTube() const {
    return false;
}

void UFortSkyTubePhysicsComponent::ExitSkyTube(AFortSkyTube* InSkyTube) {
}

void UFortSkyTubePhysicsComponent::EnterSkyTube(AFortSkyTube* InSkyTube) {
}

void UFortSkyTubePhysicsComponent::ComputeAccelerations(const float DeltaTime, UPrimitiveComponent* PrimComp, FVector& OutLinearAcceleration, FVector& OutAngularAccelerationRad) {
}

void UFortSkyTubePhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortSkyTubePhysicsComponent, SkyTube);
    DOREPLIFETIME(UFortSkyTubePhysicsComponent, bMagnetized);
}


