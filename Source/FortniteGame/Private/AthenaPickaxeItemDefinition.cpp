#include "AthenaPickaxeItemDefinition.h"
#include "EFortItemType.h"

UAthenaPickaxeItemDefinition::UAthenaPickaxeItemDefinition() {
    this->ItemType = EFortItemType::AthenaPickaxe;
    this->WeaponDefinition = NULL;
    this->MainMeshAttachmentSocketName = TEXT("pack");
    this->OffhandMeshAttachmentSocketName = TEXT("pack");
}


