#include "CommonWidgetSwitcherLegacy.h"

UCommonWidgetSwitcherLegacy::UCommonWidgetSwitcherLegacy() {
    this->bWidgetActivationEnabled = true;
    this->bOutroPanelBelow = true;
}

void UCommonWidgetSwitcherLegacy::SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange) {
}

void UCommonWidgetSwitcherLegacy::SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange) {
}

void UCommonWidgetSwitcherLegacy::HandleActiveWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel) {
}

void UCommonWidgetSwitcherLegacy::DeactivateWidget() {
}

void UCommonWidgetSwitcherLegacy::ActivateWidget() {
}


