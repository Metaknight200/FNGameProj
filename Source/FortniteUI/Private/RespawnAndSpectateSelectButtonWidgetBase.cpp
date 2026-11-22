#include "RespawnAndSpectateSelectButtonWidgetBase.h"

URespawnAndSpectateSelectButtonWidgetBase::URespawnAndSpectateSelectButtonWidgetBase() {
    this->TargetImageSizeBox = NULL;
    this->DefaultButtonImageSizeBox = NULL;
    this->TargetButton = NULL;
    this->TargetImage = NULL;
    this->DefaultButtonImage = NULL;
    this->TargetNameTextWidget = NULL;
    this->Switcher_TargetState = NULL;
    this->ButtonIndex = -1;
    this->bIsSelectable = false;
}





void URespawnAndSpectateSelectButtonWidgetBase::OnSelectionMade() {
}

void URespawnAndSpectateSelectButtonWidgetBase::OnSelectionHovered() {
}




