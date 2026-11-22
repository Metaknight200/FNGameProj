#include "EntityActorStaticMeshRenderComponent.h"
#include "Net/UnrealNetwork.h"

UEntityActorStaticMeshRenderComponent::UEntityActorStaticMeshRenderComponent() {
    this->ShadowVar_EnableCollision = ECollisionEnabled::QueryAndPhysics;
    this->ShadowVar_MaxDrawDistance = 8000.00f;
}

void UEntityActorStaticMeshRenderComponent::OnRep_MeshMaterials() {
}

void UEntityActorStaticMeshRenderComponent::OnRep_MaxDrawDistance() {
}

void UEntityActorStaticMeshRenderComponent::OnRep_EnableCollision() {
}

void UEntityActorStaticMeshRenderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEntityActorStaticMeshRenderComponent, ShadowVar_MeshMaterials);
    DOREPLIFETIME(UEntityActorStaticMeshRenderComponent, ShadowVar_EnableCollision);
    DOREPLIFETIME(UEntityActorStaticMeshRenderComponent, ShadowVar_MaxDrawDistance);
}


