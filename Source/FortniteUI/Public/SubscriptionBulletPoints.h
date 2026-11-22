#pragma once
#include "CoreMinimal.h"
#include "SubscriptionBulletPoint.h"
#include "SubscriptionBulletPoints.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionBulletPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubscriptionBulletPoint> BulletPoints;
    
    FORTNITEUI_API FSubscriptionBulletPoints();
};

