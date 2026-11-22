#include "FortAthenaMOTDWidget.h"

UFortAthenaMOTDWidget::UFortAthenaMOTDWidget() {
    this->MOTDButtonGroup = NULL;
    this->MOTDTileClass = NULL;
    this->NewVideoPlayerClass = NULL;
    this->ActivationFrontendCamera = EFrontEndCamera::StoreItemInspect;
    this->Button_SpecialAction = NULL;
    this->Button_SecondarySpecialAction = NULL;
    this->Button_NormalAction = NULL;
    this->Button_SecondaryNormalAction = NULL;
    this->Text_MatchmakingNotice = NULL;
    this->CMSImage_SelectedNewsImage = NULL;
    this->CMSImage_SelectedNewsImage_Blurred = NULL;
    this->RichTextBlock_SelectedNewsTitle = NULL;
    this->RichTextBlock_SelectedNewsBody = NULL;
    this->Button_Close = NULL;
    this->EntryBox_MOTDEntries = NULL;
    this->ActivityProvider = NULL;
}







void UFortAthenaMOTDWidget::SelectNewsByIndex(int32 Index) {
}



bool UFortAthenaMOTDWidget::PlayFirstAutoPlayVideo() {
    return false;
}





void UFortAthenaMOTDWidget::NavigateToRightNews() {
}

void UFortAthenaMOTDWidget::NavigateToLeftNews() {
}

void UFortAthenaMOTDWidget::HandleSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32 ButtonIndex) {
}

void UFortAthenaMOTDWidget::HandleImageLoaded() {
}

int32 UFortAthenaMOTDWidget::GetNewsCount() const {
    return 0;
}

FAthenaMOTDBase UFortAthenaMOTDWidget::GetNewsByIndex(int32 Index) const {
    return FAthenaMOTDBase{};
}

FAthenaMOTDBase UFortAthenaMOTDWidget::BP_GetSelectedNews() const {
    return FAthenaMOTDBase{};
}

bool UFortAthenaMOTDWidget::AutoPlayedVideo() const {
    return false;
}


