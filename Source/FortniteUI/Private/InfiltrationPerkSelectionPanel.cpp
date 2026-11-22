#include "InfiltrationPerkSelectionPanel.h"
#include "FortAthenaMutator_PerkSystemMutator.h"

UInfiltrationPerkSelectionPanel::UInfiltrationPerkSelectionPanel() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_PerkSystemMutator::StaticClass();
    this->PerkIntroScreenWidget = NULL;
    this->PerkIntroOverlay = NULL;
}





void UInfiltrationPerkSelectionPanel::OnSelectionMade(UPerkSelectionEntryWidget* Widget) {
}

void UInfiltrationPerkSelectionPanel::OnReRollSelected() {
}


void UInfiltrationPerkSelectionPanel::NativeOnPerkIntroFinished() {
}

void UInfiltrationPerkSelectionPanel::AttempShowPerkIntro() {
}


