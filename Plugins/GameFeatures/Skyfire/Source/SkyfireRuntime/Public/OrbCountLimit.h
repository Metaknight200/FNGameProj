#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "OrbCountLimit.generated.h"

USTRUCT(BlueprintType)
struct FOrbCountLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LimitValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumOrbCount;
    
    SKYFIRERUNTIME_API FOrbCountLimit();
};

