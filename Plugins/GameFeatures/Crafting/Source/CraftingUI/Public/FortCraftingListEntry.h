#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortCraftingListEntry.generated.h"

class UAthenaItemIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCraftingListEntry : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemIcon* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCraftItem;
    
public:
    UFortCraftingListEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingListItemSet();
    

    // Fix for true pure virtual functions not being implemented
};

