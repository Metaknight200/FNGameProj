#pragma once
#include "CoreMinimal.h"
#include "VehicleRuntimeModifiers.generated.h"

USTRUCT(BlueprintType)
struct FVehicleRuntimeModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasInfiniteFuel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportCosmeticWrap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterDestructionDelay;
    
    FORTNITEGAME_API FVehicleRuntimeModifiers();
};

