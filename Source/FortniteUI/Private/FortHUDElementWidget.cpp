#include "FortHUDElementWidget.h"

UFortHUDElementWidget::UFortHUDElementWidget() {
    this->HiddenVisibility = ESlateVisibility::Collapsed;
    this->TutorialHighlight = NULL;
}


bool UFortHUDElementWidget::HasAnyTags(const FGameplayTagContainer& InTags) const {
    return false;
}

void UFortHUDElementWidget::HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags) {
}

void UFortHUDElementWidget::AppendHUDElementTags(const FGameplayTagContainer& AdditionalTags) {
}


