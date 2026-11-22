#include "DadBroHealthWidget.h"
#include "FortAthenaMutator_DadBro.h"

UDadBroHealthWidget::UDadBroHealthWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_DadBro::StaticClass();
    this->DadBroMutator = NULL;
    this->BossHealthRatio = 1.00f;
    this->BossAIPawn = NULL;
}

void UDadBroHealthWidget::UpdateFinalBossBattle() {
}



void UDadBroHealthWidget::HandleMashPhaseChanged(int32 NewPhase) {
}

void UDadBroHealthWidget::HandleDadBroSpawned(AFortAIPawn* DadBroPawn) {
}


