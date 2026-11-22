#include "FortInteractionIndicatorWidget.h"
#include "Templates/SubclassOf.h"

UFortInteractionIndicatorWidget::UFortInteractionIndicatorWidget() {
    this->Switcher_PrimaryContext = NULL;
    this->Switcher_SecondaryContext = NULL;
}

void UFortInteractionIndicatorWidget::HandleRemoveContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget, bool bPrimary) {
}

void UFortInteractionIndicatorWidget::HandleAddContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget, bool bPrimary) {
}

UFortInteractContextInfoWidget* UFortInteractionIndicatorWidget::ActivateContextOverride(const TSubclassOf<UFortInteractContextInfoWidget>& ContextOverrideWidget, const UFortInteractContextInfo* ContextInfo, bool bPrimary) {
    return NULL;
}


