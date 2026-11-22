#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleDashboardWidget.h"
#include "ENevadaFlightStates.h"
#include "Blueprint/UserWidgetPool.h"
#include "Templates/SubclassOf.h"
#include "FortNevadaVehicleReticle.generated.h"

class AFortNevadaVehicle;
class UNevadaTargetIndicator;

UCLASS(Blueprintable, EditInlineNew)
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNevadaTargetIndicator> NevadaTargetIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNevadaTargetIndicator* TargetIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortNevadaVehicle* OwningNevadaVehicle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool IndicatorPool;
    
public:
    UFortNevadaVehicleReticle();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleStateChanged(const ENevadaFlightStates VehicleState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamEnabledChanged(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamDetached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamDeactivated(const float Cooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnergyCanonFired(const float Cooldown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnergyCannonEnabledChanged(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBatteryChanged(float BatteryLevel);
    
};

