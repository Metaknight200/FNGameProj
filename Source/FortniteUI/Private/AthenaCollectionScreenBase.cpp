#include "AthenaCollectionScreenBase.h"

UAthenaCollectionScreenBase::UAthenaCollectionScreenBase() {
    this->PersonalBestMinimumFractionalDigits = 0;
    this->PersonalBestMaximumFractionalDigits = 0;
    this->ScrollBox_List = NULL;
    this->CollectionListView = NULL;
    this->Content_InfoOverlayContainer = NULL;
    this->Button_ToggleInfoOverlay = NULL;
    this->Button_Back = NULL;
    this->PlayerProgressContainer = NULL;
    this->bWantsToShowInfoOverlay = false;
    this->bForceOverlayToggleMobile = false;
    this->InfoOverlay = NULL;
    this->CollectionsDataTable = NULL;
    this->CollectionData = NULL;
}

void UAthenaCollectionScreenBase::CenterSelectedEntry() {
}







