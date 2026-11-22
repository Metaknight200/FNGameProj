#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "AthenaQuickBarSlotButtonBase.h"
#include "AthenaInventoryQuickBarSlotButton.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryQuickBarSlotButton : public UAthenaQuickBarSlotButtonBase {
    GENERATED_BODY()
public:
    UAthenaInventoryQuickBarSlotButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwapStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwapComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetAdded(const EUIExtensionSlot ExtensionSlot, UUserWidget* ExtensionWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventorySwapStarted(int32 SwapSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleInventorySwapComplete();
    
};

