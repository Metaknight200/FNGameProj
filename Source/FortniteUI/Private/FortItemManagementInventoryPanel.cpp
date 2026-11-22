#include "FortItemManagementInventoryPanel.h"

UFortItemManagementInventoryPanel::UFortItemManagementInventoryPanel() {
    this->CurrentSortType = EInventoryContentSortType::ByRating;
    this->FilterTabButtonType = NULL;
    this->FilterTabButtonStyle = NULL;
    this->FilterTabList = NULL;
    this->TileViewLoadGuard = NULL;
    this->TileView = NULL;
    this->CraftingPanel = NULL;
    this->CraftingTileViewLoadGuard = NULL;
    this->CraftingTileView = NULL;
    this->StoragePanel = NULL;
    this->StorageTileViewLoadGuard = NULL;
    this->StorageTileView = NULL;
    this->MulchRestrictionReasonText = NULL;
    this->SmallTileSize = EFortItemCardSize::S;
    this->LargeTileSize = EFortItemCardSize::M;
    this->bCanDragItems = false;
    this->InventoryContext = NULL;
    this->WidgetToCenter = NULL;
}

void UFortItemManagementInventoryPanel::UpdateSchematicTiles() {
}

void UFortItemManagementInventoryPanel::ToggleTileSize() {
}

void UFortItemManagementInventoryPanel::TogglePrioritizeFavorites() {
}

void UFortItemManagementInventoryPanel::SwitchPanelFocus() {
}

void UFortItemManagementInventoryPanel::SetSortType(EInventoryContentSortType SortType) {
}

void UFortItemManagementInventoryPanel::SetFilter(const FName FilterName) {
}

void UFortItemManagementInventoryPanel::RequestFocusEquipSlots() {
}

void UFortItemManagementInventoryPanel::RefreshCraftingSort() {
}


void UFortItemManagementInventoryPanel::MarkAllItemsAsSeen() {
}

bool UFortItemManagementInventoryPanel::IsSwitchPanelAvailable() const {
    return false;
}

bool UFortItemManagementInventoryPanel::IsSelectedItem(const UFortItem* Item) const {
    return false;
}

bool UFortItemManagementInventoryPanel::HasUnlockedStorageSlots() const {
    return false;
}



void UFortItemManagementInventoryPanel::HandleItemBeginDrag(UObject* Item) {
}

void UFortItemManagementInventoryPanel::HandleInventoryUpdatedEvent() {
}


void UFortItemManagementInventoryPanel::HandleFilterTabSelected(FName TabNameID) {
}

void UFortItemManagementInventoryPanel::HandleFilterTabButtonCreated(FName TabNameID, UCommonButtonBase* TabButton) {
}





void UFortItemManagementInventoryPanel::HandleCustomInventoryFilterChanged() {
}


void UFortItemManagementInventoryPanel::HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget) {
}

void UFortItemManagementInventoryPanel::HandleCraftItemStarted() {
}

TArray<UFortItemDefinition*> UFortItemManagementInventoryPanel::GetUpgradeItemDefinitionsForCurrentInventory() const {
    return TArray<UFortItemDefinition*>();
}

TArray<EInventoryContentSortType> UFortItemManagementInventoryPanel::GetSupportedSortTypesForCurrentInventory() const {
    return TArray<EInventoryContentSortType>();
}

bool UFortItemManagementInventoryPanel::GetShouldPrioritizeFavorites() {
    return false;
}

FText UFortItemManagementInventoryPanel::GetQualifiedFilterDisplayName() const {
    return FText::GetEmpty();
}

void UFortItemManagementInventoryPanel::CycleSortType() {
}

bool UFortItemManagementInventoryPanel::CanDragItems() const {
    return false;
}

void UFortItemManagementInventoryPanel::AdvanceSelection() {
}

void UFortItemManagementInventoryPanel::AddItemStackToMulch(UFortItem* Item, int32 Count) {
}


