#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EFortRarity.h"
#include "FortRarityItemData.h"
#include "FortCraftingItemInfoWidget.generated.h"

class UAthenaInventoryItemStatsWidget;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortCraftingFormulaIngredientsWidget;
class UFortItemCategoryIndicator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RarityTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemCategoryIndicator* ItemCategoryIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaInventoryItemStatsWidget* ItemStatsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCraftingFormulaIngredientsWidget* IngredientsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_StartCrafting;
    
public:
    UFortCraftingItemInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRaritySet(const EFortRarity Rarity, const FFortRarityItemData RarityItemData);
    
};

