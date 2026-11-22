#pragma once
#include "CoreMinimal.h"
#include "ECannotBuyReason.h"
#include "FortItemTransactionBrief.h"
#include "FortBuyBrief.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBuyBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
    UFortBuyBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason);
    
};

