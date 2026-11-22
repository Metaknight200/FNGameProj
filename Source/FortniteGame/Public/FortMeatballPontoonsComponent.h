#pragma once
#include "CoreMinimal.h"
#include "FortVehiclePontoonsComponent.h"
#include "FortMeatballPontoonsComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent {
    GENERATED_BODY()
public:
    UFortMeatballPontoonsComponent(const FObjectInitializer& ObjectInitializer);

};

