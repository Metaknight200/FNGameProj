#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "ELivingWorldPointProviderSpawnLimiterBehavior.h"
#include "FortAthenaLivingWorldPointProviderSpawnLimiter.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaLivingWorldPointProviderSpawnLimiter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELivingWorldPointProviderSpawnLimiterBehavior Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNumberOfSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetLimitWhenEnabling;
    
public:
    LAGERRUNTIME_API FFortAthenaLivingWorldPointProviderSpawnLimiter();
};

