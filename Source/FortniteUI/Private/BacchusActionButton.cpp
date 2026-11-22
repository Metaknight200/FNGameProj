#include "BacchusActionButton.h"

UBacchusActionButton::UBacchusActionButton() {
    this->bCapturesInput = true;
}

void UBacchusActionButton::OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}

void UBacchusActionButton::AddActionMappings(TArray<FBacchusActionIconMapping> NewActionMappings) {
}


