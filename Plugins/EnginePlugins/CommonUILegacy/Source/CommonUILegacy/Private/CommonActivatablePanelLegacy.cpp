#include "CommonActivatablePanelLegacy.h"

UCommonActivatablePanelLegacy::UCommonActivatablePanelLegacy() {
    this->bConsumeAllActions = false;
    this->bExposeActionsExternally = true;
    this->bShouldBypassStack = false;
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenuLegacy* PopupMenu) {
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent) {
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, UCommonPopupMenuLegacy* PopupMenu) {
}

void UCommonActivatablePanelLegacy::SetInputActionHandler(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent) {
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, FCommonActionCommited DisabledCommitEvent) {
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FCommonActionCommited DisabledCommitEvent) {
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State) {
}

void UCommonActivatablePanelLegacy::SetActionHandlerState(const UDataTable* DataTable, FName RowName, EInputActionState State) {
}

void UCommonActivatablePanelLegacy::RemoveInputActionHandler(FDataTableRowHandle InputActionRow) {
}

void UCommonActivatablePanelLegacy::RemoveAllInputActionHandlers() {
}

void UCommonActivatablePanelLegacy::PopPanel() {
}




void UCommonActivatablePanelLegacy::OnBeginOutro_Implementation() {
}

void UCommonActivatablePanelLegacy::OnBeginIntro_Implementation() {
}


bool UCommonActivatablePanelLegacy::IsIntroed() const {
    return false;
}

bool UCommonActivatablePanelLegacy::IsInActivationStack() const {
    return false;
}

bool UCommonActivatablePanelLegacy::HasInputActionHandler(FDataTableRowHandle InputActionRow) const {
    return false;
}

bool UCommonActivatablePanelLegacy::GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows) const {
    return false;
}

void UCommonActivatablePanelLegacy::EndOutro() {
}

void UCommonActivatablePanelLegacy::EndIntro() {
}

void UCommonActivatablePanelLegacy::BeginOutro() {
}

void UCommonActivatablePanelLegacy::BeginIntro() {
}

void UCommonActivatablePanelLegacy::AddInputActionNoHandler(UDataTable* DataTable, FName RowName) {
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenuLegacy* PopupMenu) {
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent) {
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, UCommonPopupMenuLegacy* PopupMenu) {
}

void UCommonActivatablePanelLegacy::AddInputActionHandler(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent) {
}


