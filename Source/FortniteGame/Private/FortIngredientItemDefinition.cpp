#include "FortIngredientItemDefinition.h"
#include "EFortItemType.h"

UFortIngredientItemDefinition::UFortIngredientItemDefinition() {
    this->ItemType = EFortItemType::Ingredient;
    this->bSupportsQuickbarFocus = false;
}


