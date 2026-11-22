#pragma once
#include "CoreMinimal.h"
#include "PlatformPurchaseErrorCodeMessage.generated.h"

USTRUCT(BlueprintType)
struct FPlatformPurchaseErrorCodeMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Messages;
    
    FORTNITEUI_API FPlatformPurchaseErrorCodeMessage();
};

