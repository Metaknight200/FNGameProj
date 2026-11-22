#pragma once
#include "CoreMinimal.h"
#include "EMcpSubscriptionState.h"
#include "AthenaSubscriptionMonthlyRewards.h"
#include "AthenaSubscriptionExpectedRewards.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSubscriptionExpectedRewards : public FAthenaSubscriptionMonthlyRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMcpSubscriptionState SubscriptionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkinDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MtxDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingNextSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingNextBattlepassImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingNextBattlepassTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingNextSkinTileImage;
    
    FORTNITEUI_API FAthenaSubscriptionExpectedRewards();
};

