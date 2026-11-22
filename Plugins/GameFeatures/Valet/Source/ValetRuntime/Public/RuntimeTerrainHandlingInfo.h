#pragma once
#include "CoreMinimal.h"
#include "RuntimeTerrainHandlingInfo.generated.h"

USTRUCT(BlueprintType)
struct VALETRUNTIME_API FRuntimeTerrainHandlingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontTireFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearTireFriction;
    
    FRuntimeTerrainHandlingInfo();
};

