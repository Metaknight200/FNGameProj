#pragma once
#include "CoreMinimal.h"
#include "EPreventUseStormCircleServiceReason.h"
#include "FortItemTransactionBrief.h"
#include "FortShowFutureStormCircleBrief.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseServiceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Display;
    
public:
    UFortShowFutureStormCircleBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbleToPurchase();
    
};

