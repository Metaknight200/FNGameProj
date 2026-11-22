#include "FortWeaponMeleeDualWieldItemDefinition.h"

UFortWeaponMeleeDualWieldItemDefinition::UFortWeaponMeleeDualWieldItemDefinition() {
    this->ManagedVFX_OffhandDefaults = NULL;
    this->AnimTrailsOffhandWidth = 1.00f;
    this->bUseAnimTrailsOffhand = true;
    this->bAttachAnimTrailsOffhandToWeapon = false;
}

USkeletalMesh* UFortWeaponMeleeDualWieldItemDefinition::GetWeaponMeshOffhandOverride() const {
    return NULL;
}


