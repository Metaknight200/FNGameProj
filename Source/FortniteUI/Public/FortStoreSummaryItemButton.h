#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortStoreSummaryItemButton.generated.h"

class UFortInventoryContext;
class UMenuAnchor;
class UStoreCardObject;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortStoreSummaryItemButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAnItemMarkedForMulching;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoreCardObject* StoreCardObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortStoreSummaryItemButton();

    UFUNCTION(BlueprintCallable)
    void UpdateMulchListWithItem(bool bAddingItem);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreCardObject(UStoreCardObject* CardObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMenuOpenChanged(bool bIsOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemMulchStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStoreCardObject* GetStoreCardObject() const;
    
private:
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetPopupMenu();
    
};

