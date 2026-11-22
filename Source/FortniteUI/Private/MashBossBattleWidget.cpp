#include "MashBossBattleWidget.h"
#include "FortAthenaMutator_Mash.h"

UMashBossBattleWidget::UMashBossBattleWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Mash::StaticClass();
    this->MashMutatorRef = NULL;
    this->CurrentBossHealth = 0.00f;
    this->TotalBossHealth = 0.00f;
    this->BossHealthRatio = 1.00f;
    this->BossAIPawn = NULL;
}

void UMashBossBattleWidget::UpdateFinalBossBattle() {
}



void UMashBossBattleWidget::HandleMashPhaseChanged(int32 NewPhase) {
}


