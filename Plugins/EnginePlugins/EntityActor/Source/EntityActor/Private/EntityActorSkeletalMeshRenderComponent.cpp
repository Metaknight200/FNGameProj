#include "EntityActorSkeletalMeshRenderComponent.h"

UEntityActorSkeletalMeshRenderComponent::UEntityActorSkeletalMeshRenderComponent() {
    this->bAddedMeshRenderComponent = false;
    this->ShadowVar_SkeletalMesh = NULL;
    this->ShadowVar_EnableCollision = ECollisionEnabled::QueryAndPhysics;
}


