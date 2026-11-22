#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInternalPersistent.h"
#include "FortHeliFlightModel.h"
#include "HoagieInternal.generated.h"

USTRUCT(BlueprintType)
struct FHoagieInternal : public FFortVehicleInternalPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHeliFlightModel FlightModel;
    
    HOAGIERUNTIME_API FHoagieInternal();
};

