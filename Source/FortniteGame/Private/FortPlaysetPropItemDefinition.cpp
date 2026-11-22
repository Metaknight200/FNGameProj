#include "FortPlaysetPropItemDefinition.h"
#include "EFortItemType.h"

UFortPlaysetPropItemDefinition::UFortPlaysetPropItemDefinition() {
    this->ItemType = EFortItemType::PlaysetProp;
    this->ActorSaveRecord = NULL;
    this->bExplicitlyNotBrowsable = false;
    this->bImplicitlyNotBrowsable = false;
}


