#include "FortPhysicsObjectNavigationComponent.h"
#include "FortNavArea_Obstacle.h"

UFortPhysicsObjectNavigationComponent::UFortPhysicsObjectNavigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UFortNavArea_Obstacle::StaticClass();
    this->LowSpeedSquareThreshold = 49.00f;
    this->LowSpeedSquareDistanceThreshold = 2500.00f;
    this->LowSpeedRotationThreshold = 15.00f;
    this->LowSpeedScaleThreshold = 0.10f;
    this->ComponentAffectingNavMesh = NULL;
    this->PhysicsObjectComponent = NULL;
}

void UFortPhysicsObjectNavigationComponent::OnSleepStateChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake) {
}


