#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPlatformPurchaseErrorCodeModalEntry.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlatformPurchaseErrorCodeModalEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
public:
    UFortPlatformPurchaseErrorCodeModalEntry();

};

