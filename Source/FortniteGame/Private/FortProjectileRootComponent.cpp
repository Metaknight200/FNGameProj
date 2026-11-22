#include "FortProjectileRootComponent.h"
#include "FortMetaNavArea_Obstacles.h"

UFortProjectileRootComponent::UFortProjectileRootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UFortMetaNavArea_Obstacles::StaticClass();
}


