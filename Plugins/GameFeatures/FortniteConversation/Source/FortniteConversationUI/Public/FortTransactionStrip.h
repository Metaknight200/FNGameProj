#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortTransactionStrip.generated.h"

class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UCommonTextBlock;
class UFortItemDefinition;
class UFortWorldItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTransactionStrip : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CostDescription;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ResourceCurrency;
    
public:
    UFortTransactionStrip();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransactionInfoReceived(int32 TransactionCost, int32 OwnedCurrency);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCountChanged(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, UFortItemDefinition* Definition, int32 Delta);
    
};

