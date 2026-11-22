#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleDashboardWidget.h"
#include "FortHoagieVehicleReticle.generated.h"

class AFortHoagieVehicle;

UCLASS(Blueprintable, EditInlineNew)
class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortHoagieVehicle* OwningHoagieVehicle;
    
public:
    UFortHoagieVehicleReticle();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupComplete(bool bVehicleUsesFuelSystem);
    
};

