#include "LiveStreamScreen.h"
#include "Components/SlateWrapperTypes.h"
#include "EInputPriority.h"

ULiveStreamScreen::ULiveStreamScreen() {
    this->Visibility = ESlateVisibility::Visible;
    this->InputPriority = EInputPriority::Modal;
    this->AutomaticallyDismissPanel = false;
    this->StreamMediaSource = NULL;
}

void ULiveStreamScreen::OnRetrieveVideoUrlResult(const FString& URL) {
}


