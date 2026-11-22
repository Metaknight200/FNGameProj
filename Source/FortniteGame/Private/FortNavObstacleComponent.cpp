#include "FortNavObstacleComponent.h"
#include "FortNavArea_Obstacle.h"

UFortNavObstacleComponent::UFortNavObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObstacleAreaClass = UFortNavArea_Obstacle::StaticClass();
}


