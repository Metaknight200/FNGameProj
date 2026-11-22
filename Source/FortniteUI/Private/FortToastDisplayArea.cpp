#include "FortToastDisplayArea.h"

UFortToastDisplayArea::UFortToastDisplayArea() {
    this->ToastQueue = NULL;
    this->CurrentToast = NULL;
    this->ToastWidget_New = NULL;
    this->Toast_BattlePassPageUnlocked = NULL;
    this->PowerToastWidget = NULL;
    this->ToastWidget_MinorError = NULL;
    this->VoiceChannelChangePopup = NULL;
    this->SubscribeToastWidget = NULL;
    this->ToastWidgetDonut = NULL;
    this->HousepartyWelcome = NULL;
    this->HousepartyFOMO = NULL;
    this->HousepartyMic = NULL;
    this->IncomingFriendRequestToast = NULL;
    this->ToastSocialWidget = NULL;
}

void UFortToastDisplayArea::TestBasicToast(EFortNotificationType InNotificationType, FText InTitle, FText InDescription) {
}

void UFortToastDisplayArea::RegisterToastHandler() {
}

void UFortToastDisplayArea::HandleToastFinished() {
}

void UFortToastDisplayArea::HandleNewToastAvailable() {
}


