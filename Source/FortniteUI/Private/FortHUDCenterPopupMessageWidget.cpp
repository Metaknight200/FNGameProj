#include "FortHUDCenterPopupMessageWidget.h"

UFortHUDCenterPopupMessageWidget::UFortHUDCenterPopupMessageWidget() {
    this->CenterPopupModalWidget = NULL;
}

void UFortHUDCenterPopupMessageWidget::UpdateState() {
}


ECenterPopupMessageStateEnum UFortHUDCenterPopupMessageWidget::GetCenterPopupMessageState() const {
    return ECenterPopupMessageStateEnum::NotVisible;
}


