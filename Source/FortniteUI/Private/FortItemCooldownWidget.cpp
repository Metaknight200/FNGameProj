#include "FortItemCooldownWidget.h"

UFortItemCooldownWidget::UFortItemCooldownWidget() {
    this->CooldownText = NULL;
    this->CooldownImage = NULL;
    this->CooldownChargingImage = NULL;
    this->CooldownPercentageMID = NULL;
    this->bAmmoRegenAvailableState = true;
}

void UFortItemCooldownWidget::TryStartUpdateCooldown_BP() {
}

void UFortItemCooldownWidget::SetItem(const UFortWorldItem* InWorldItem) {
}

void UFortItemCooldownWidget::OnWorldItemDestroyed() {
}





void UFortItemCooldownWidget::HandleLocalPlayerRevived() {
}

void UFortItemCooldownWidget::HandleLocalPlayerDied(const FFortPlayerDeathReport& DeathReport) {
}


