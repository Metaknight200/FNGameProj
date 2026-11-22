#include "FortPotContentsPopup.h"
#include "Components/SlateWrapperTypes.h"

UFortPotContentsPopup::UFortPotContentsPopup() : UUserWidget(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::Collapsed;
    this->MaxItemsToShow = 4;
    this->TileView_PotContents = NULL;
    this->Text_MoreItems = NULL;
    this->Overlay_Popup = NULL;
}

void UFortPotContentsPopup::SetOwningCraftingObject(ACraftingObjectBGA* InCraftingObject) {
}


