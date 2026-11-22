#include "AthenaPetItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UAthenaPetItemDefinition::UAthenaPetItemDefinition() {
    this->ItemType = EFortItemType::AthenaPetCosmetic;
    this->PetAttachRule = EAthenaPetAttachRule::AttachToBackpack;
}

TSubclassOf<AFortPlayerPet> UAthenaPetItemDefinition::GetPetPrefabClass() const {
    return NULL;
}


