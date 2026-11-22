#include "MashPhaseWidget.h"
#include "FortAthenaMutator_Mash.h"

UMashPhaseWidget::UMashPhaseWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Mash::StaticClass();
    this->CurrentPhase = EMashPhase::NotStarted;
    this->CurrentObjectiveAreaIndex = 0;
    this->MashMutatorRef = NULL;
    this->CachedLocalPlayerController = NULL;
    this->CachedIsLocalPlayerAlive = true;
}







void UMashPhaseWidget::HandlePlayersLeftChanged(int32 InPlayersLeft) {
}

void UMashPhaseWidget::HandleMashPhaseChanged(int32 NewPhase) {
}

void UMashPhaseWidget::HandleCountdownUpdate() {
}

void UMashPhaseWidget::HandleCountdownStarted(const int32 TimeRemaining) {
}

void UMashPhaseWidget::HandleCountdownFinished() {
}


