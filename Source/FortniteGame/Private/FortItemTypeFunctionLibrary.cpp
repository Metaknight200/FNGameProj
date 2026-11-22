#include "FortItemTypeFunctionLibrary.h"

UFortItemTypeFunctionLibrary::UFortItemTypeFunctionLibrary() {
}

FText UFortItemTypeFunctionLibrary::ToText(EFortItemType ItemType, bool UsePlural) {
    return FText::GetEmpty();
}

EFortItemType UFortItemTypeFunctionLibrary::GetTemplateType(EFortItemType ItemType) {
    return EFortItemType::WorldItem;
}


