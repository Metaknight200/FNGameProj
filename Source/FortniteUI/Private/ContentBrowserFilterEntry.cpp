#include "ContentBrowserFilterEntry.h"

UContentBrowserFilterEntry::UContentBrowserFilterEntry() {
    this->TextBlock_FilterName = NULL;
    this->bFilterActive = false;
    this->Tag = NULL;
}


void UContentBrowserFilterEntry::UpdateButtonText() {
}

void UContentBrowserFilterEntry::SetIsFilterActive(bool bInFilterActive) {
}

bool UContentBrowserFilterEntry::IsFilterActive() const {
    return bFilterActive;
}


