#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortVehicleInPersistent.h"
#include "EHoagieState.h"
#include "HoagieInPersistent.generated.h"

class UFortHoagieVehicleConfigs;

USTRUCT(BlueprintType)
struct FHoagieInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoagieState CurrentHoagieState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRotorImpulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotorHitLinearImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotorHitAngularImpulse;
    
    HOAGIERUNTIME_API FHoagieInPersistent();
};

