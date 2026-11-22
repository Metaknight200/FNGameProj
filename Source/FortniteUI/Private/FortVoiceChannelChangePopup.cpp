#include "FortVoiceChannelChangePopup.h"

UFortVoiceChannelChangePopup::UFortVoiceChannelChangePopup() {
    this->bEnableVoiceChatNotifyEverySession = true;
    this->bToastMode = false;
    this->VisiblityInSeconds = 12.00f;
    this->Anim_SimplePopup = NULL;
    this->Text_TopLine = NULL;
    this->Text_MiddleLine = NULL;
    this->Text_BottomLine = NULL;
    this->ActionButton = NULL;
    this->Button_JoinGameChat = NULL;
    this->Switcher_InputButtons = NULL;
    this->HoldKeybindWidget_Keyboard = NULL;
    this->HoldKeybindWidget_GamePad = NULL;
}


void UFortVoiceChannelChangePopup::HandleOpenCloseAnimationFinished() {
}


