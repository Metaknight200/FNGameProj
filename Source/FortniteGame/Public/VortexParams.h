#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VortexParams.generated.h"

USTRUCT(BlueprintType)
struct FVortexParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorGravityScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityFloorTerminalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsWidth;
    
    FORTNITEGAME_API FVortexParams();
};

