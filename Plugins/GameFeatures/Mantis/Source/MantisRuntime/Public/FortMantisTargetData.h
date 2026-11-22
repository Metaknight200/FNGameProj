#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "FortMantisRootMotionWarpInfo.h"
#include "FortMantisTargetData.generated.h"

USTRUCT(BlueprintType)
struct FFortMantisTargetData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMantisRootMotionWarpInfo TechniqueWarpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechniqueDataIndex;
    
    MANTISRUNTIME_API FFortMantisTargetData();
};

