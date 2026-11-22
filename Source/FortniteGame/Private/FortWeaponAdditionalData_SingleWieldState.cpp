#include "FortWeaponAdditionalData_SingleWieldState.h"

UFortWeaponAdditionalData_SingleWieldState::UFortWeaponAdditionalData_SingleWieldState() {
    this->bHideOffhandMesh = true;
    this->bUseWeaponHandSocketOverride = false;
    this->bUseSeparatePreviewOffsets = true;
    this->FrontendPreviewScale = 1.00f;
    this->AnimationStyleToUse = EFortWeaponCoreAnimation::Melee;
    this->LiveAbility = NULL;
    this->LiveAnimSet = NULL;
    this->LiveMontage = NULL;
}


