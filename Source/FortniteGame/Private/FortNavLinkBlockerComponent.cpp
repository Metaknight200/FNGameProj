#include "FortNavLinkBlockerComponent.h"
#include "FortMetaNavArea_Obstacles.h"

UFortNavLinkBlockerComponent::UFortNavLinkBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->ShapeBodySetup = NULL;
    this->AreaClass = UFortMetaNavArea_Obstacles::StaticClass();
}


