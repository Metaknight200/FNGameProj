#pragma once
#include "CoreMinimal.h"
#include "FortItemTransactionBrief.h"
#include "FortIntelBrief.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortIntelBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Objective;
    
public:
    UFortIntelBrief();

};

