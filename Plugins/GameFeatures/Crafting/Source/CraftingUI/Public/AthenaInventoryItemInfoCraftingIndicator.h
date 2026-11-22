#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaInventoryItemInfoCraftingIndicator.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaInventoryItemInfoCraftingIndicator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCraftableItemChanged(const bool bIsCraftableItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanCraftNowChanged(const bool bCanCraftNow);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* SelectedItem);
    
};

