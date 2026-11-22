#include "FortAmmoItemDefinition.h"
#include "EFortItemType.h"

UFortAmmoItemDefinition::UFortAmmoItemDefinition() {
    this->ItemType = EFortItemType::Ammo;
    this->bAllowMultipleStacks = false;
    this->bInventorySizeLimited = false;
    this->bTriggersFeedbackLines = false;
    this->WorldItemClassOverride = NULL;
    this->ItemOptions = NULL;
}

TSoftObjectPtr<UTexture2D> UFortAmmoItemDefinition::GetHUDAmmoSmallPreviewImage() const {
    return NULL;
}


