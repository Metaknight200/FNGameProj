#include "MolePostGameScreen.h"

UMolePostGameScreen::UMolePostGameScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->PostGameInputComponent = NULL;
    this->MobileAutoGoBackToMenuTime = 6.00f;
    this->Listview_Accolades = NULL;
}

void UMolePostGameScreen::StartMobileAutoGoBackToMenu() {
}



