#pragma once
#include "CoreMinimal.h"
#include "PlatformPurchaseErrorCodeMessage.h"
#include "PlatformPurchaseErrorCodeMessages.generated.h"

USTRUCT(BlueprintType)
struct FPlatformPurchaseErrorCodeMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformPurchaseErrorCodeMessage> ErrorCodeMessageList;
    
    FORTNITEUI_API FPlatformPurchaseErrorCodeMessages();
};

