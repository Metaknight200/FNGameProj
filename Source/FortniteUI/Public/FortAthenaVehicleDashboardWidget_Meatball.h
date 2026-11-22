#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleDashboardWidget.h"
#include "FortAthenaVehicleDashboardWidget_Meatball.generated.h"

class AFortMeatballVehicle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaVehicleDashboardWidget_Meatball : public UFortAthenaVehicleDashboardWidget {
    GENERATED_BODY()
public:
    UFortAthenaVehicleDashboardWidget_Meatball();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMeatballVehicle* GetMeatballVehicle() const;
    
};

