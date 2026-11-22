#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionContentTab.h"
#include "SubscriptionContentTabData.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionContentTabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubscriptionContentTab TabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicTab;
    
    FORTNITEUI_API FSubscriptionContentTabData();
};

