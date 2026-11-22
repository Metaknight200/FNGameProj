#include "FortCreativeIslandSelectScreen.h"

UFortCreativeIslandSelectScreen::UFortCreativeIslandSelectScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->Tab_Group = NULL;
    this->Widget_Switcher = NULL;
    this->Button_CloseMobile = NULL;
    this->Button_Cancel = NULL;
}

void UFortCreativeIslandSelectScreen::HandleTabChanged(int32 TabIndex) {
}


