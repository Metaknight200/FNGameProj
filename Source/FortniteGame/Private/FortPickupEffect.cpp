#include "FortPickupEffect.h"

AFortPickupEffect::AFortPickupEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->ParentPickupActor = NULL;
    this->ItemDefinition = NULL;
    this->bDoNotShowSpawnParticles = false;
    this->bDoNotTickSkeletalMeshComponents = true;
    this->bOwnedByALocalPlayer = false;
    this->bOwnedByPlayer = false;
    this->bRandomRotation = false;
    this->PickupByNearbyPawnSound = NULL;
}





UFortItem* AFortPickupEffect::GetPickupDummyItem() const {
    return NULL;
}



UMaterialInstanceDynamic* AFortPickupEffect::ApplyCosmeticOverridesToMaterial(UMeshComponent* MeshComponent, int32 MatIndex) {
    return NULL;
}


