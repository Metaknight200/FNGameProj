#pragma once
#include "CoreMinimal.h"
#include "FortVehicleOutContinuous.h"
#include "NevadaOutContinuous.generated.h"

USTRUCT(BlueprintType)
struct FNevadaOutContinuous : public FFortVehicleOutContinuous {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AltimeterTraceHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TractorBeamAppliedForceMagnitude;
    
    NEVADARUNTIME_API FNevadaOutContinuous();
};

