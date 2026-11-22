#pragma once
#include "CoreMinimal.h"
#include "EPreventAbilityUseReason.h"
#include "FortItemTransactionBrief.h"
#include "FortApplyAbilityBrief.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortApplyAbilityBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseServiceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Display;
    
public:
    UFortApplyAbilityBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToPurchase(EPreventAbilityUseReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbleToPurchase();
    
};

