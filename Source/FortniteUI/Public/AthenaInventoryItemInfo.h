#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaItemElementWidgetBase.h"
#include "AthenaInventoryItemInfo.generated.h"

class UAthenaInventoryItemStatsWidget;
class UAthenaItemIcon;
class UAthenaItemTierWidget;
class UCommonTextBlock;
class UFortItem;
class UImage;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryItemInfo : public UAthenaItemElementWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemIcon* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemTierWidget* ItemTierWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaInventoryItemStatsWidget* ItemStatsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectItemInputRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemRarityTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryIconTextureParamName;
    
public:
    UAthenaInventoryItemInfo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRarityTextUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemNameTextUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDescriptionTextUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCategoryTextUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCategoryIconUpdated(const bool bHasCategoryIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectItemInput(const bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetAdded(UUserWidget* ExtensionWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* SelectedItem);
    
};

