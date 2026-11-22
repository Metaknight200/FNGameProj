#pragma once
#include "CoreMinimal.h"
#include "EvasiveManeuver_Step_Digested.generated.h"

USTRUCT(BlueprintType)
struct FEvasiveManeuver_Step_Digested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UpMultiplier;
    
    UMAMIRUNTIME_API FEvasiveManeuver_Step_Digested();
};

