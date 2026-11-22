#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "DestroyBlockerOffsetConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FDestroyBlockerOffsetConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat XOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat YOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZOffset;
    
    UMAMIRUNTIME_API FDestroyBlockerOffsetConfiguration();
};

