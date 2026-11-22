#include "FortExpeditionDetailsWidget.h"

UFortExpeditionDetailsWidget::UFortExpeditionDetailsWidget() {
    this->ExpeditionSquadSlotsView = NULL;
    this->ItemViewContext_ExpeditionSlotsView = NULL;
}

void UFortExpeditionDetailsWidget::SetData_Implementation(UFortExpeditionItem* InItem) {
}

void UFortExpeditionDetailsWidget::SetCurrentSquadId(FName SquadId) {
}

void UFortExpeditionDetailsWidget::RequestAbandonExpedition() {
}

void UFortExpeditionDetailsWidget::HandleAbandonExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSuccess) {
}


