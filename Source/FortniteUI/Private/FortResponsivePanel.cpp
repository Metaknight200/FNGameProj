#include "FortResponsivePanel.h"
#include "Components/SlateWrapperTypes.h"

UFortResponsivePanel::UFortResponsivePanel() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bCanStackVertically = true;
}

UFortResponsivePanelSlot* UFortResponsivePanel::AddChildToFortResponsivePanel(UWidget* Content) {
    return NULL;
}


