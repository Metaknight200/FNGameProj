#pragma once
#include "CoreMinimal.h"
#include "FortVehicleInPersistent.h"
#include "DagwoodRuntimeModifiers.h"
#include "ETireStates.h"
#include "DagwoodInPersistent.generated.h"

class UFortDagwoodVehicleConfigs;

USTRUCT(BlueprintType)
struct FDagwoodInPersistent : public FFortVehicleInPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETireStates> TireStates;
    
    VALETRUNTIME_API FDagwoodInPersistent();
};

