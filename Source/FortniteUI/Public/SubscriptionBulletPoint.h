#pragma once
#include "CoreMinimal.h"
#include "SubscriptionBulletPoint.generated.h"

USTRUCT(BlueprintType)
struct FSubscriptionBulletPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IncludedCountries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IncludedPlatforms;
    
    FORTNITEUI_API FSubscriptionBulletPoint();
};

