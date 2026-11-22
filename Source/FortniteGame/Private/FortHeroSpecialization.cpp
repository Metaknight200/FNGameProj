#include "FortHeroSpecialization.h"

UFortHeroSpecialization::UFortHeroSpecialization() {
    this->AlterationType = EFortAlteration::AttributeSlot;
    this->bForceShowHeadAccessory = false;
    this->bForceShowBackpack = false;
}

TArray<TSoftObjectPtr<UCustomCharacterPart>> UFortHeroSpecialization::GetCharacterPartPtrs() const {
    return TArray<TSoftObjectPtr<UCustomCharacterPart>>();
}


