#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "FortHUDElementWidget.h"
#include "FortAthenaVehicleDashboardWidget.generated.h"

class AActor;
class AFortAthenaVehicle;
class UCommonNumericTextBlock;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortAthenaVehicleDashboardWidget : public UFortHUDElementWidget, public IAthenaCoupledWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWidgetShowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* CurrentVehicleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetFuelPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisplayedFuelPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FillBlendSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedTextMaxInterpolationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetTagsToHideWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDTopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> MobileFuelGaugeHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> MobileFuelGaugeVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MobileFuelGaugePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* NumericText_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Gauge;
    
public:
    UFortAthenaVehicleDashboardWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSpeedometer(float NormalizedSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNoFuelMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVehicleHasInfiniteFuel(bool bInfiniteFuel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupVehicleFuelWidget(AActor* NewVehicle, const bool bRequestShowWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetVisibilityChanged(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBoostChargePercent(float BoostPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutOfFuel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLowFuel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFuelValueChanged(float FuelPercentage, bool bIsLowOnFuel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostChargeFilled();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAddedFuel(float NewFuelPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaVehicle* GetVehicle() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDTopSpeed() const;
    

    // Fix for true pure virtual functions not being implemented
};

