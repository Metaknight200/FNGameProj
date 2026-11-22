#include "FortRootViewportLayout.h"

UFortRootViewportLayout::UFortRootViewportLayout() {
    this->CurrentStateWidget = NULL;
    this->NotificationManager = NULL;
    this->CurrentLegacyStateWidget = NULL;
    this->LetoLayoutBorderClass = NULL;
    this->WidgetQueue_ModalContent = NULL;
    this->AthenaProgressModal = NULL;
    this->ConfirmationWindow_ConfirmationWidget = NULL;
    this->ErrorWindow_Errors = NULL;
    this->ProgressModal_ControllerDisconnected = NULL;
    this->RestartModal = NULL;
    this->ToastDisplayArea_ToastHandler = NULL;
}

void UFortRootViewportLayout::HandleControllerConnectionChanged(bool bConnected) {
}


