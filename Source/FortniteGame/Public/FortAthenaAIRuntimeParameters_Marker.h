#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Marker.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIRuntimeParameters_Marker : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSupportsMarkerWithFaction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MarkerPropagationMaxDistanceSQ;
    
public:
    UFortAthenaAIRuntimeParameters_Marker();

};

