#include "AthenaInventoryPanelContainer.h"

UAthenaInventoryPanelContainer::UAthenaInventoryPanelContainer() {
    this->bIsBackHandler = true;
    this->TabButtonClass = NULL;
    this->TabList = NULL;
    this->Switcher_Tabs = NULL;
    this->ItemInfoWidget = NULL;
}

void UAthenaInventoryPanelContainer::HandleInventoryTabChanged(UWidget* NewActiveWidget, int32 WidgetIndex) {
}


