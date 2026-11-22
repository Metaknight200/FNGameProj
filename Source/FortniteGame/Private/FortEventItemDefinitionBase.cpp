#include "FortEventItemDefinitionBase.h"
#include "EFortItemType.h"

UFortEventItemDefinitionBase::UFortEventItemDefinitionBase() {
    this->ItemType = EFortItemType::EventDescription;
    this->bNeverPersisted = true;
    this->EventPriority = 0;
    this->bActivateByDefault = false;
}

void UFortEventItemDefinitionBase::CreateCalendarPayload() {
}


