#include "FortConversationScreen.h"

UFortConversationScreen::UFortConversationScreen() {
    this->bIsFocusable = true;
    this->ConversationInputComp = NULL;
    this->CurrentlySelectedIndex = -1;
    this->RadialSelectionMaterialParameterName = TEXT("Rotation");
    this->InteractActionNameKBM = TEXT("Use");
    this->ADSInputAction = TEXT("Target");
    this->InteractActionNameGamepad = TEXT("UseOrReload");
    this->MobileRadialMenuSizeOverride = 0.00f;
    this->RadialMenu_DialogOptions = NULL;
    this->Image_RadialHighlight = NULL;
    this->Keybind_Confirm = NULL;
    this->QuestBrief_Main = NULL;
    this->BuyBrief_Main = NULL;
    this->UpgradeBrief_Main = NULL;
    this->HireBrief_Main = NULL;
    this->DuelBrief_Main = NULL;
    this->IntelBrief_Main = NULL;
    this->ShowFutureStormCircleBrief_Main = NULL;
    this->RiftToGoBrief_Main = NULL;
    this->PropDisguiseBrief_Main = NULL;
    this->ChatBrief_Main = NULL;
    this->BasicBrief_Main = NULL;
    this->DataDrivenServiceBrief_Main = NULL;
    this->Switcher_Details = NULL;
    this->SizeBox_RadialMenu = NULL;
    this->Overlay_Details = NULL;
    this->Overlay_WheelContainer = NULL;
    this->Image_Background = NULL;
    this->Image_LoadingSpinner = NULL;
}






void UFortConversationScreen::EndConversation() {
}


