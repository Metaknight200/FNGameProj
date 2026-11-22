#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleDashboardWidget.h"
#include "FortAthenaVehicleDashboardWidget_Ferret.generated.h"

class AFortAthenaFerretVehicle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaVehicleDashboardWidget_Ferret : public UFortAthenaVehicleDashboardWidget {
    GENERATED_BODY()
public:
    UFortAthenaVehicleDashboardWidget_Ferret();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaFerretVehicle* GetFerretVehicle() const;
    
};

