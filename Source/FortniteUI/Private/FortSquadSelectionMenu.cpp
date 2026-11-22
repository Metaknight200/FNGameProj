#include "FortSquadSelectionMenu.h"

UFortSquadSelectionMenu::UFortSquadSelectionMenu() {
    this->ButtonGroup = NULL;
    this->TeamEntryBox_Squads = NULL;
    this->Button_ConfirmMove = NULL;
    this->Button_CancelMove = NULL;
    this->RichText_ActionPrompt = NULL;
    this->Button_ChangeParticipation = NULL;
    this->Switcher_Buttons = NULL;
    this->Mobile_Overlay = NULL;
}


void UFortSquadSelectionMenu::HandleMemberEntryClicked(UCommonButtonLegacy* MemberEntryButton, int32 EntryIdx) {
}

void UFortSquadSelectionMenu::HandleExitAction() {
}


