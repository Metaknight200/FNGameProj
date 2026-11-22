#include "FortActivityDetailsModal.h"

UFortActivityDetailsModal::UFortActivityDetailsModal() {
    this->Text_LinkCode = NULL;
    this->DetailsDisplay_SelectedActivity = NULL;
    this->Button_MobileClose = NULL;
    this->Button_Accept = NULL;
    this->Button_Back = NULL;
    this->Button_BackBoard = NULL;
}





EFortInvalidActivityReason UFortActivityDetailsModal::GetInvalidActivityReason() const {
    return EFortInvalidActivityReason::None;
}


