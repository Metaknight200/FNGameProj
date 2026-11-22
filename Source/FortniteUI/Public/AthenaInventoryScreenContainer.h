#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaInventoryScreenContainer.generated.h"

class UCommonButtonLegacy;
class UCommonWidgetSwitcherLegacy;
class UFortCreativeItemListMenu;
class UFortCreativeItemListPanelData;
class UFortCreativeSettingsFlow;
class UFortTabListWidgetBase;
class UInputComponent;
class UPanelWidget;
class UScaleBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaInventoryScreenContainer : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCreativeSettingsFlow> MyIslandWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCreativeItemListMenu> CreativeInventoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonLegacy> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeItemListPanelData> ItemListPanelDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabId_Creative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabId_MyIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BlockedInputActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalBlockedInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Leto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_InventoryTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_MyIslandHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_CreativeInventoryHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeSettingsFlow* MyIslandWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeItemListMenu* CreativeInventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InventoryScreenInputComponent;
    
public:
    UAthenaInventoryScreenContainer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetCreated(const EUIExtensionSlot ExtensionSlot, UUserWidget* ExtensionWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetMyIslandWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetCreativeInventoryWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseScreen();
    
};

