#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EFortQuickBars.h"
#include "AthenaQuickBarSlotButtonBase.generated.h"

class UAthenaItemIcon;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UAthenaQuickBarSlotButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuickBars QuickbarIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemIcon* ItemIcon;
    
public:
    UAthenaQuickBarSlotButtonBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlottedItemChanged(const UFortItem* SlottedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerActivated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuickbarContentsChanged(EFortQuickBars InQuickBarIndex, const TArray<int32>& ChangedSlots);
    
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UFortItem* SelectedItem);
    
};

