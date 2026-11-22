#include "InfiltrationStatusWidget.h"
#include "FortAthenaMutator_Infiltration.h"

UInfiltrationStatusWidget::UInfiltrationStatusWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Infiltration::StaticClass();
    this->SpamThrottle = 2.00f;
}

bool UInfiltrationStatusWidget::IsLocalPlayerDefending() const {
    return false;
}

bool UInfiltrationStatusWidget::IsLocalPlayerAttacking() const {
    return false;
}

bool UInfiltrationStatusWidget::IsCurrentlyADraw() const {
    return false;
}

USoundBase* UInfiltrationStatusWidget::GetSoundFromIntelState(EIntelStateEnum InState, bool bIsDefender) const {
    return NULL;
}

int32 UInfiltrationStatusWidget::GetNumOfRounds() const {
    return 0;
}

uint8 UInfiltrationStatusWidget::GetDefendingTeam() const {
    return 0;
}

int32 UInfiltrationStatusWidget::GetCurrentRound() const {
    return 0;
}

uint8 UInfiltrationStatusWidget::GetAttackingTeam() const {
    return 0;
}


