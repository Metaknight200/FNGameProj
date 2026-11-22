#pragma once
#include "CoreMinimal.h"
#include "SubscriptionModalInfo.h"
#include "SubscriptionModals.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionModals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubscriptionModalInfo> Modals;
    
    FORTNITEUI_API FSubscriptionModals();
};

