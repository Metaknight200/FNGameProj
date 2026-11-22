#pragma once
#include "CoreMinimal.h"
#include "AthenaSubscriptionMonthlyRewards.h"
#include "AthenaSubscriptionProgressiveInfo.h"
#include "AthenaSubscriptionPurchaseDetails.h"
#include "SubscriptionModals.h"
#include "AthenaSubscriptionInfo.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSubscriptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaSubscriptionMonthlyRewards CurrentRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaSubscriptionMonthlyRewards NextRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaSubscriptionProgressiveInfo ProgressiveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaSubscriptionPurchaseDetails PurchaseSubscriptionDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubscriptionDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlockedBenefitsNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscriptionModals SubModals;
    
    FORTNITEUI_API FAthenaSubscriptionInfo();
};

