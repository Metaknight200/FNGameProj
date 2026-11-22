#pragma once
#include "CoreMinimal.h"
#include "FortMantisRootMotionWarpInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortMantisRootMotionWarpInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WarpTarget;
    
public:
    MANTISRUNTIME_API FFortMantisRootMotionWarpInfo();
};

