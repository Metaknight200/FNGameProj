#include "AthenaXPBarWidget.h"

UAthenaXPBarWidget::UAthenaXPBarWidget() {
    this->XpDisplayed = 0;
    this->XpWaitingToBeEarned = 0;
}



void UAthenaXPBarWidget::OnXpEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaXPBarWidget::OnRegisteredWithQuestManager() {
}

void UAthenaXPBarWidget::OnLevelUp(int32 NewLevel) {
}

void UAthenaXPBarWidget::OnForwardedXPEvent(const FXPUIEvent& XPEvent) {
}


void UAthenaXPBarWidget::DoneUpdatingBar() {
}


