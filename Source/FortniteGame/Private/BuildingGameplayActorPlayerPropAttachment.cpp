#include "BuildingGameplayActorPlayerPropAttachment.h"

ABuildingGameplayActorPlayerPropAttachment::ABuildingGameplayActorPlayerPropAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bClientAttachmentErrorCorrectionEnabled = false;
    this->bUseTransformedCalcBounds = true;
}

void ABuildingGameplayActorPlayerPropAttachment::LogState(const FString& CallingContext) const {
}

void ABuildingGameplayActorPlayerPropAttachment::InitProp(AActor* PropActorToAttach) {
}

bool ABuildingGameplayActorPlayerPropAttachment::DoesMeshComponentHaveVisibleMaterial(const UStaticMeshComponent* StaticMeshComponent) const {
    return false;
}

void ABuildingGameplayActorPlayerPropAttachment::CalcWorldSpaceBounds(AActor* PropActor, FVector& Origin, FVector& Extent) const {
}

void ABuildingGameplayActorPlayerPropAttachment::AttachProp(AActor* PropActorToAttach) {
}


