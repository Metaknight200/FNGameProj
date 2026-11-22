#include "BallerRaceIntroWidget.h"
#include "FortAthenaMutator_BallerRace.h"

UBallerRaceIntroWidget::UBallerRaceIntroWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_BallerRace::StaticClass();
    this->LengthOfCountdown = 5.00f;
}




