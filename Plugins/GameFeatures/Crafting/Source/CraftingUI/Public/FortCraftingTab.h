#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "GameplayTagContainer.h"
#include "FortCraftingTab.generated.h"

class UAthenaQuickbarEditorBase;
class UCommonListView;
class UFortCraftingItemInfoWidget;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCraftingTab : public UCommonActivatableWidget, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PrimaryIngredientTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCraftingItemInfoWidget* CraftingItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickbarEditorBase* QuickbarEditor;
    
public:
    UFortCraftingTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFormulaListUpdated(const int32 NumFormulas);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* Item);
    

    // Fix for true pure virtual functions not being implemented
};

