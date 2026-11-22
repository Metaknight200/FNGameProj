#include "FortCreativeOptionsCategory.h"

UFortCreativeOptionsCategory::UFortCreativeOptionsCategory() : UUserWidget(FObjectInitializer::Get()) {
    this->GlobalOptionsUI = NULL;
    this->ListView_Options = NULL;
    this->Text_CategoryText = NULL;
}


UCommonListView* UFortCreativeOptionsCategory::GetOptionsList() const {
    return NULL;
}


