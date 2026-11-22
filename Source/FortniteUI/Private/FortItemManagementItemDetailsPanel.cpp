#include "FortItemManagementItemDetailsPanel.h"

UFortItemManagementItemDetailsPanel::UFortItemManagementItemDetailsPanel() {
    this->HasItemMarkedForMulching = false;
    this->InventoryContext = NULL;
}



TArray<UFortAmmoItemDefinition*> UFortItemManagementItemDetailsPanel::GetAmmoTypeItemDefinitions() {
    return TArray<UFortAmmoItemDefinition*>();
}


