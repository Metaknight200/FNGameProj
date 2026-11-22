#include "FortWrapSkeletalMeshActor.h"

AFortWrapSkeletalMeshActor::AFortWrapSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WrapToApply = NULL;
    this->WrapMaterialType = EItemWrapMaterialType::WeaponWrap;
    this->ItemWrapModifier = NULL;
    this->bHasSectionLimit = true;
    this->MaterialSectionMask = 1;
}

void AFortWrapSkeletalMeshActor::SetWrap(UAthenaItemWrapDefinition* NewWrap, EItemWrapMaterialType MaterialType) {
}

ACustomItemWrapModifier* AFortWrapSkeletalMeshActor::GetWrapModifier() const {
    return NULL;
}


