#include "CommonVisibilityWidgetLegacy.h"

UCommonVisibilityWidgetLegacy::UCommonVisibilityWidgetLegacy() {
    this->bShowForGamepad = true;
    this->bShowForMouseAndKeyboard = true;
    this->bShowForTouch = true;
    this->bShowForPC = true;
    this->bShowForMac = true;
    this->bShowForPS4 = true;
    this->bShowForPS5 = true;
    this->bShowForXBox = true;
    this->bShowForXSX = true;
    this->bShowForIOS = true;
    this->bShowForAndroid = true;
    this->bShowForErebus = true;
    this->VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenType = ESlateVisibility::Collapsed;
}


