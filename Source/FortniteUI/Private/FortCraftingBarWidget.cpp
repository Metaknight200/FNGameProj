#include "FortCraftingBarWidget.h"

UFortCraftingBarWidget::UFortCraftingBarWidget() {
    this->CraftingText = NULL;
    this->CraftingProgressBar = NULL;
    this->CompletedRemainVisibleTime = 2.00f;
}

void UFortCraftingBarWidget::SetHideCraftingBar(bool bInHideCraftBar) {
}

void UFortCraftingBarWidget::OnCompletedSetHidden() {
}

void UFortCraftingBarWidget::HandlePlayerStoppedCrafting(bool bSuccess, EFortCraftFailCause CraftFailureCause) {
}

void UFortCraftingBarWidget::HandlePlayerStartedCrafting() {
}


