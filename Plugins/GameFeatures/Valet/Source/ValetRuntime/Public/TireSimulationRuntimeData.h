#pragma once
#include "CoreMinimal.h"
#include "RuntimeTerrainHandlingInfo.h"
#include "TireSimulationRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct VALETRUNTIME_API FTireSimulationRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeTerrainHandlingInfo HandlingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PoppedTireSpringLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PoppedTireSpringStiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PoppedTireSpringDamp;
    
    FTireSimulationRuntimeData();
};

