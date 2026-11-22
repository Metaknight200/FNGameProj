#include "FortUIStateWidget_ForcedIntro.h"
#include "Components/SlateWrapperTypes.h"

UFortUIStateWidget_ForcedIntro::UFortUIStateWidget_ForcedIntro() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->LoadingScreenDefinition = NULL;
    this->Button_StartMatch = NULL;
}

void UFortUIStateWidget_ForcedIntro::StartMatch() {
}

TSoftClassPtr<UUserWidget> UFortUIStateWidget_ForcedIntro::GetPlaylistLoadingScreenWidget() const {
    return NULL;
}


