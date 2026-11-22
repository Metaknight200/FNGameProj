#pragma once
#include "CoreMinimal.h"
#include "GiftUINotificationInfo.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FGiftUINotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> SoftItemPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FGiftUINotificationInfo();
};

