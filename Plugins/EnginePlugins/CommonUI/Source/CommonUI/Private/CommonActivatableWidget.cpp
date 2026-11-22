#include "CommonActivatableWidget.h"

UCommonActivatableWidget::UCommonActivatableWidget() {
    this->bAutoActivate = false;
    this->bIsBackHandler = false;
    this->bSupportsActivationFocus = true;
    this->bIsModal = false;
    this->bAutoRestoreFocus = false;
    this->bSetVisibilityOnActivated = false;
    this->ActivatedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->bSetVisibilityOnDeactivated = false;
    this->DeactivatedVisibility = ESlateVisibility::Collapsed;
    this->bIsActive = false;
}

void UCommonActivatableWidget::SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive) {
}

bool UCommonActivatableWidget::IsActivated() const {
    return false;
}

UWidget* UCommonActivatableWidget::GetDesiredFocusTarget() const {
    return NULL;
}

void UCommonActivatableWidget::DeactivateWidget() {
}





void UCommonActivatableWidget::BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget) {
}

void UCommonActivatableWidget::ActivateWidget() {
}


