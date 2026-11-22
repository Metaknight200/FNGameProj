#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TargetingDefaultResultData.generated.h"

USTRUCT(BlueprintType)
struct FTargetingDefaultResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    TARGETINGSYSTEM_API FTargetingDefaultResultData();
};

