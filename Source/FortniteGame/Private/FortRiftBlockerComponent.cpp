#include "FortRiftBlockerComponent.h"
#include "FortMetaNavArea_Obstacles.h"

UFortRiftBlockerComponent::UFortRiftBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->ShapeBodySetup = NULL;
    this->AreaClass = UFortMetaNavArea_Obstacles::StaticClass();
    this->bStartActive = false;
}


