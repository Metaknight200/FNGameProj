#pragma once
#include "CoreMinimal.h"
#include "StreamingRadioPlayerComponent.h"
#include "StreamingRadioPlayerComponent_Valet.generated.h"

class AFortDagwoodVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent {
    GENERATED_BODY()
public:
    UStreamingRadioPlayerComponent_Valet(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ValetVehicleExploded(AFortDagwoodVehicle* Veh);
    
};

