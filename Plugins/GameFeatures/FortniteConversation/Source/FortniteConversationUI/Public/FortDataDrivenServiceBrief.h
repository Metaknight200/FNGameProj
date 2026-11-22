#pragma once
#include "CoreMinimal.h"
#include "DataDrivenServiceBriefConfig.h"
#include "FortConversationOptionBrief.h"
#include "FortDataDrivenServiceBrief.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortItem;
class UFortTransactionStrip;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TitleBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StockRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTransactionStrip* TransactionStrip_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDataDrivenServiceBriefConfig> ServiceConfigs;
    
public:
    UFortDataDrivenServiceBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToPurchase(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransactionInfoReceived(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbleToPurchase();
    
};

