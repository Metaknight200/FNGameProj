#pragma once
#include "CoreMinimal.h"
#include "FortPhysicsObjectNavigationComponent.h"
#include "FortVehicleNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehicleNavModifierComponent : public UFortPhysicsObjectNavigationComponent {
    GENERATED_BODY()
public:
    UFortVehicleNavModifierComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleSleepStateChanged(const bool bIsAwake);
    
};

