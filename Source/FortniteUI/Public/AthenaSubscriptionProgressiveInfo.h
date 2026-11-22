#pragma once
#include "CoreMinimal.h"
#include "VideoWidgetConfig.h"
#include "AthenaSubscriptionProgressiveInfo.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSubscriptionProgressiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoWidgetConfig SizzleVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> InfoModalEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewStagesUnlockFinePrint;
    
    FORTNITEUI_API FAthenaSubscriptionProgressiveInfo();
};

