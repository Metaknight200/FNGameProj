#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaInventoryItemTileButton.generated.h"

class UAthenaItemIcon;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryItemTileButton : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemIcon* ItemIcon;
    
public:
    UAthenaInventoryItemTileButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChanged(const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemToRepresent() const;
    

    // Fix for true pure virtual functions not being implemented
};

