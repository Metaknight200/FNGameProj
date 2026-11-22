#pragma once
#include "CoreMinimal.h"
#include "AthenaQuickBarSlotExtensionWidgetBase.h"
#include "AthenaQuickBarSlotCraftingIndicator.generated.h"

class AFortWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForIngredientChangesWhenCraftable;
    
public:
    UAthenaQuickBarSlotCraftingIndicator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCraftableItemChanged(const bool bIsCraftableItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIngredientChanged(const bool bCanCraftNow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanCraftNowChanged(const bool bCanCraftNow);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
};

