#include "CommonInputManagerLegacy.h"

UCommonInputManagerLegacy::UCommonInputManagerLegacy() {
}

void UCommonInputManagerLegacy::SuspendStartingOperationProcessing() {
}

bool UCommonInputManagerLegacy::StopListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent) {
    return false;
}

bool UCommonInputManagerLegacy::StartListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent) {
    return false;
}

void UCommonInputManagerLegacy::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority) {
}

void UCommonInputManagerLegacy::ResumeStartingOperationProcessing() {
}

void UCommonInputManagerLegacy::PushActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow) {
}

void UCommonInputManagerLegacy::PopActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel) {
}

bool UCommonInputManagerLegacy::IsPanelOnStack(const UCommonActivatablePanelLegacy* InPanel) const {
    return false;
}

bool UCommonInputManagerLegacy::IsInputSuspended() const {
    return false;
}

UCommonActivatablePanelLegacy* UCommonInputManagerLegacy::GetTopPanel() const {
    return NULL;
}

int32 UCommonInputManagerLegacy::GetGlobalInputHandlerPriorityFilter() const {
    return 0;
}

bool UCommonInputManagerLegacy::GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions) {
    return false;
}


