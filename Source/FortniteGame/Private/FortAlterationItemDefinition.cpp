#include "FortAlterationItemDefinition.h"
#include "EFortItemType.h"

UFortAlterationItemDefinition::UFortAlterationItemDefinition() {
    this->ItemType = EFortItemType::Alteration;
    this->bInventorySizeLimited = true;
    this->AlterationType = EFortAlteration::AttributeSlot;
}

TEnumAsByte<EFortAlteration::Type> UFortAlterationItemDefinition::GetAlterationType() const {
    return EFortAlteration::AttributeSlot;
}


