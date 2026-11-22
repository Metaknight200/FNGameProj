#include "FortCreativeIslandSelectListTab.h"

UFortCreativeIslandSelectListTab::UFortCreativeIslandSelectListTab() {
    this->ListView_Activities = NULL;
    this->Button_Select = NULL;
    this->Button_Remove = NULL;
    this->Button_Favorite = NULL;
    this->Switcher_IslandsList = NULL;
    this->Overlay_IslandListContent = NULL;
    this->Overlay_NoIslandsContent = NULL;
    this->Overlay_NoFavorites = NULL;
    this->Text_NoIslands = NULL;
    this->Widget_LaunchError = NULL;
    this->Image_LoadingIndicator = NULL;
    this->IslandDetailsPanel = NULL;
    this->ActivityProvider = NULL;
    this->LastItemToTriggerLoading = NULL;
}

void UFortCreativeIslandSelectListTab::HandleListScrolled(float ItemOffset, float DistanceRemaining) {
}

void UFortCreativeIslandSelectListTab::HandleIslandSelectionChanged(UObject* Item) {
}


