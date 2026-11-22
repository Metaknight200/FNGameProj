#include "FortFriendSubscriptionToastWidget.h"

UFortFriendSubscriptionToastWidget::UFortFriendSubscriptionToastWidget() {
    this->Anim_SimplePopup = NULL;
    this->DisplayTime = 5.00f;
    this->HoldDuration = 1.00f;
    this->DebounceHours = 336;
    this->Text_Nudge = NULL;
    this->Button_Cursor = NULL;
    this->Button_Hold = NULL;
    this->Switcher_InputButtons = NULL;
    this->Action_HoldKeybindWidget = NULL;
}

void UFortFriendSubscriptionToastWidget::HandleOpenCloseAnimationFinished() {
}

void UFortFriendSubscriptionToastWidget::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void UFortFriendSubscriptionToastWidget::HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}


