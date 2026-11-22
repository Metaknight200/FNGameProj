#pragma once
#include "CoreMinimal.h"
#include "FortConversationOptionBrief.h"
#include "FortItemTransactionBrief.generated.h"

class UFortItem;
class UFortTransactionStrip;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemTransactionBrief : public UFortConversationOptionBrief {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTransactionStrip* TransactionStrip_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* DisplayItem;
    
public:
    UFortItemTransactionBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransactionInfoReceived(UFortItem* Item);
    
};

