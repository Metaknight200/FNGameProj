#include "FortExpeditionBuildSquadWidget.h"

UFortExpeditionBuildSquadWidget::UFortExpeditionBuildSquadWidget() {
    this->ExpeditionSquadSlotsView = NULL;
    this->ExpeditionSquadSlotDetails = NULL;
    this->ExpeditionSquadSlotPicker = NULL;
    this->ItemViewContext_ExpeditionSlotsView = NULL;
    this->ItemViewContext_ExpeditionSlotItemPicker = NULL;
}

void UFortExpeditionBuildSquadWidget::SetData_Implementation(UFortExpeditionItem* InItem) {
}

void UFortExpeditionBuildSquadWidget::SetCurrentSquadId(FName SquadId) {
}


void UFortExpeditionBuildSquadWidget::OnRefreshBuildSquadWidget_Implementation() {
}

bool UFortExpeditionBuildSquadWidget::IsSquadSlotLocked(int32 SlotIndex) const {
    return false;
}

bool UFortExpeditionBuildSquadWidget::IsExpeditionValidToStart() {
    return false;
}

void UFortExpeditionBuildSquadWidget::HandleRequestStartExpedition(bool& bPassThrough) {
}

void UFortExpeditionBuildSquadWidget::HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex) {
}

void UFortExpeditionBuildSquadWidget::ClearTemporaryExpeditionSquadState(bool bPreviewOnly) {
}


