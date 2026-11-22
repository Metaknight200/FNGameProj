#include "AthenaInventoryScreenContainer.h"

UAthenaInventoryScreenContainer::UAthenaInventoryScreenContainer() {
    this->TabButtonClass = NULL;
    this->ItemListPanelDataClass = NULL;
    this->TabId_Creative = TEXT("Creative");
    this->TabId_MyIsland = TEXT("MYISLAND");
    this->ScaleBox_Leto = NULL;
    this->TabList_Inventory = NULL;
    this->Switcher_InventoryTabs = NULL;
    this->Panel_MyIslandHost = NULL;
    this->Panel_CreativeInventoryHost = NULL;
    this->MyIslandWidget = NULL;
    this->CreativeInventoryWidget = NULL;
    this->InventoryScreenInputComponent = NULL;
}


UUserWidget* UAthenaInventoryScreenContainer::GetMyIslandWidget() {
    return NULL;
}

UUserWidget* UAthenaInventoryScreenContainer::GetCreativeInventoryWidget() {
    return NULL;
}

void UAthenaInventoryScreenContainer::CloseScreen() {
}


