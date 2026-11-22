#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EvasiveManeuver_Step.generated.h"

USTRUCT(BlueprintType)
struct FEvasiveManeuver_Step {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UpMultiplier;
    
    UMAMIRUNTIME_API FEvasiveManeuver_Step();
};

