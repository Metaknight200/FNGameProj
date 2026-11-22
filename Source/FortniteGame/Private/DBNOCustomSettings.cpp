#include "DBNOCustomSettings.h"

FDBNOCustomSettings::FDBNOCustomSettings() {
    this->Enabled = EDBNOMutatorType::Default;
    this->TenacityDepletionRate = 0.00f;
    this->ReviveHealthPercentage = 0.00f;
    this->bAllowRevives = false;
    this->bAllowCarry = false;
    this->TimeToRevive = 0.00f;
    this->bAlertTeam = false;
    this->LastManStandingMode = false;
    this->bAllowInterrogation = false;
    this->bAllowInterrogationReveal = false;
    this->SelectedTeam = 0;
    this->bTeamAffectsAllButSelected = false;
    this->SelectedClass = 0;
    this->bClassAffectsAllButSelected = false;
}

