#pragma once
#include "CoreMinimal.h"
#include "PlatformPurchaseErrorCodeMessages.h"
#include "PlatformPurchaseMessaging.generated.h"

USTRUCT(BlueprintType)
struct FPlatformPurchaseMessaging {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformPurchaseErrorCodeMessages ErrorCodeMessages;
    
    FORTNITEUI_API FPlatformPurchaseMessaging();
};

