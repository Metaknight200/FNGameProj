#include "FortItemPreviewScreen.h"
#include "FortItemView.h"

UFortItemPreviewScreen::UFortItemPreviewScreen() {
    this->AnimationToHideItemInfo = NULL;
    this->bAutoShowDetails = true;
    this->bItemDetailsHidden = true;
    this->HideItemInfoHeaderDurationSecs = 5.00f;
    this->bAllowItemRotation = true;
    this->bAllowItemZooming = true;
    this->FrontEndCamera = EFrontEndCamera::BattlePass;
    this->PreviewSceneChanger = NULL;
    this->ItemViewObject = CreateDefaultSubobject<UFortItemView>(TEXT("ItemViewObject"));
    this->CameraEntryTransitionDuration = 0.00f;
    this->CameraEntryTransitionCurve = NULL;
    this->Widget_CameraFrame = NULL;
    this->Button_PreviewAction = NULL;
    this->OverrideFocusWidget = NULL;
}

void UFortItemPreviewScreen::ShowItemDetails() {
}


void UFortItemPreviewScreen::HideItemDetails() {
}


