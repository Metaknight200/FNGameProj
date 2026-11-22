#include "FortActivityTileDetailsDisplay.h"

UFortActivityTileDetailsDisplay::UFortActivityTileDetailsDisplay() {
    this->Text_ActivityName = NULL;
    this->Text_PlayerCount = NULL;
    this->Button_Favorite = NULL;
    this->Button_Details = NULL;
    this->ActivityBrowserTag_EpicOriginal = NULL;
}








bool UFortActivityTileDetailsDisplay::IsActivityFavorited() const {
    return false;
}

bool UFortActivityTileDetailsDisplay::IsActivityEpicCreated() const {
    return false;
}

EFortInvalidActivityReason UFortActivityTileDetailsDisplay::GetInvalidActivityReason() const {
    return EFortInvalidActivityReason::None;
}


