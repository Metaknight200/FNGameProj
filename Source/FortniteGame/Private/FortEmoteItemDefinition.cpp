#include "FortEmoteItemDefinition.h"
#include "EFortItemType.h"

UFortEmoteItemDefinition::UFortEmoteItemDefinition() {
    this->ItemType = EFortItemType::Emote;
    this->bNeverPersisted = true;
}

FText UFortEmoteItemDefinition::GetCommandName() const {
    return FText::GetEmpty();
}


