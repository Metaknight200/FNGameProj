#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaEquippedItemCraftingIndicator.generated.h"

class AFortWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaEquippedItemCraftingIndicator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCraftableItemChanged(const bool bIsCraftableItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanCraftNowChanged(const bool bCanCraftNow);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
};

