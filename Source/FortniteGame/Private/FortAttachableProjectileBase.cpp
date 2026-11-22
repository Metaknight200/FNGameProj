#include "FortAttachableProjectileBase.h"
#include "Net/UnrealNetwork.h"

AFortAttachableProjectileBase::AFortAttachableProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortAttachableProjectileBase::ServerAttachToActor(const FHitResult& Hit, AActor* AttachToActor, float StickyOffsetFromPhysicsMesh, float StickyOffsetFromBoneCenter, float NarrowPlacementAgainstVelocityThreshold) {
}

void AFortAttachableProjectileBase::OnRep_ReplicatedAttachedInfo() {
}




AActor* AFortAttachableProjectileBase::GetAttachedToActor() {
    return NULL;
}

void AFortAttachableProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAttachableProjectileBase, AttachedInfo);
}


