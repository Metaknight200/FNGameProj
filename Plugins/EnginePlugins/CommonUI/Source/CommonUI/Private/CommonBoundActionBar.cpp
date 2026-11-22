#include "CommonBoundActionBar.h"

UCommonBoundActionBar::UCommonBoundActionBar() : Super(FObjectInitializer::Get()) {
    this->ActionButtonClass = NULL;
    this->bDisplayOwningPlayerActionsOnly = true;
    this->bIgnoreDuplicateActions = true;
}

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions) {
}


