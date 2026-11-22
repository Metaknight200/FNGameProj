#include "FortPickupsParent.h"

AFortPickupsParent::AFortPickupsParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultBaseMaterial = NULL;
    this->LootGiftMaterialSkelMesh = NULL;
    this->LootGiftMaterialStaticMesh = NULL;
    this->bIsBluGloPickup = false;
    this->bIsSkeletalMeshComponent = false;
    this->bHasUniqueMaterialIds = false;
    this->bActivateRarityParticleSystems = true;
    this->bIsLootGiftForOthers = false;
    this->CurrentViewDistance = 0.00f;
    this->PickupRarityLevel = 0;
    this->CullDistanceStW = 2500.00f;
    this->CullDistanceAthena = 8000.00f;
    this->CullDistanceBacchus = 2000.00f;
    this->BackgroundParticleSystemComponentCullDistance = 7000.00f;
    this->SkelMeshComponent = NULL;
    this->StaticMeshComponent = NULL;
    this->MeshPrimitiveComponent = NULL;
    this->BackgroundParticleSystemComponent = NULL;
}

void AFortPickupsParent::SetupStretchMIDsInternal() {
}

EFortRarity AFortPickupsParent::GetClientCosmeticRarity(const UFortItem* Item) const {
    return EFortRarity::Common;
}


