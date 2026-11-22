#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "FortItemEntry.h"
#include "SelectItemToSpawnDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeItemListMenu.generated.h"

class AActor;
class UCommonButtonLegacy;
class UCommonWidgetSwitcherLegacy;
class UContentBrowserFiltersPanel;
class UDataTable;
class UFortCreativeItemListPanelData;
class UFortCreativeItemListTabPanel;
class UFortCreativeMenuQuickbar;
class UFortItemDefinition;
class UFortTabListWidgetBase;
class UObject;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeItemListMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeItemListPanelData> PanelDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemListSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemListCategorySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListPanelData* ItemListPanelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeItemListTabPanel> InventoryTabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonLegacy> InventoryTabButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_Categories;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectItemToSpawnDelegate BP_OnItemSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListTabPanel* ChestTabPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListTabPanel* DownloadOnDemandTabPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListTabPanel* SubItemsTabPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_NoItemInChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_CommandBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeMenuQuickbar* MenuQuickbar_QuickBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ResetChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CreateChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_AddToQuickBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_OpenItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PlaceNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_AddToChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CreateLlama;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_RemoveFromChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Download;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentBrowserFiltersPanel* FiltersPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastUsedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemDetailsInputRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DownloadOnDemandInputRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortCreativeItemListTabPanel*> TabMap;
    
public:
    UFortCreativeItemListMenu();

    UFUNCTION(BlueprintCallable)
    void SpawnContainer(TSubclassOf<AActor> SupplyDropClass);
    
    UFUNCTION(BlueprintCallable)
    void SetSubTabOpened(bool bIsOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshChestWidgetState();
    
    UFUNCTION(BlueprintCallable)
    bool PlaceSelectionInMoveTool();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSelection();
    
    UFUNCTION(BlueprintCallable)
    bool OpenDownloadOnDemand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionOpened(const FFortItemEntry& PreviousSelectedItem, const FName PreviousTab);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDetailsInputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitSubTab();
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeQuickbarComponentLoaded();
    
    UFUNCTION(BlueprintCallable)
    void LoadItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubTabOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeTabs();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(FName TabId);
    
    UFUNCTION(BlueprintCallable)
    void HandleResetDownloadOnDemandTabs();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuickbarPanelIsFocused(bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemSelectionChanged(const FFortItemEntry& ItemToSpawn, UFortCreativeItemListTabPanel* Tab);
    
    UFUNCTION(BlueprintCallable)
    void HandleHermesCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterPanelIsFocused(bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipItem(const FFortItemEntry& ItemEntry);
    
    UFUNCTION(BlueprintCallable)
    void HandleDownloadOnDemandRefreshProjectDef();
    
    UFUNCTION(BlueprintCallable)
    void HandleDownloadOnDemandNewItemDefReceived(UFortItemDefinition* NewItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void HandleDownloadOnDemandDownloadingFailure(UFortItemDefinition* Definition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleDownloadOnDemandAddProjectDef(const FString& Tag, UFortItemDefinition* Definition);
    
    UFUNCTION(BlueprintCallable)
    void HandleChestItemCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddSelectionToMoveToolComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCreativeItemListTabPanel* GetCurrentTab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortItemEntry GetCurrentSelection() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteDefaultActionOnSelection();
    
    UFUNCTION(BlueprintCallable)
    bool EquipSelection();
    
    UFUNCTION(BlueprintCallable)
    bool EquipItem(const FFortItemEntry& ItemEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool CanPlayerCreateInVolume(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip(const FFortItemEntry& SelectedItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddToChest(const FFortItemEntry& SelectedItem) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnItemEquipped(FFortItemEntry ItemToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnCloseFromContentBrowser();
    
    UFUNCTION(BlueprintCallable)
    bool AddSelectionToQuickBar();
    
};

