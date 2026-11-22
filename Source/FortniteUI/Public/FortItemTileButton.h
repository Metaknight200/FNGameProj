#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "EFortItemCardSize.h"
#include "FortItemListEntryWidgetInterface.h"
#include "FortItemTileButton.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;
class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemTileButton : public UCommonButtonLegacy, public IUserObjectListEntry, public IFortItemListEntryWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRewardCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortItemTileButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTileSizeOverrideCheck(EFortItemCardSize SizeIn, EFortItemCardSize& SizeOut) const;
    

    // Fix for true pure virtual functions not being implemented
};

