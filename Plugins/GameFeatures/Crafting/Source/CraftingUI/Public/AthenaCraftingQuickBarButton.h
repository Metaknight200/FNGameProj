#pragma once
#include "CoreMinimal.h"
#include "AthenaQuickBarSlotButtonBase.h"
#include "AthenaCraftingQuickBarButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase {
    GENERATED_BODY()
public:
    UAthenaCraftingQuickBarButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCraftableItemChanged(const bool bIsCraftableItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanCraftNowChanged(const bool bCanCraftNow);
    
};

