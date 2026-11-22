#include "FortAthenaVehicleDashboardWidget.h"

UFortAthenaVehicleDashboardWidget::UFortAthenaVehicleDashboardWidget() {
    this->bIsWidgetShowing = false;
    this->CurrentVehicleActor = NULL;
    this->CurrentSpeed = 0.00f;
    this->TargetFuelPercent = 0.00f;
    this->DisplayedFuelPercent = 0.00f;
    this->FillBlendSpeed = 0.00f;
    this->SpeedTextMaxInterpolationRate = 0.30f;
    this->HUDTopSpeed = 90.00f;
    this->MobileFuelGaugeHorizontalAlignment = HAlign_Fill;
    this->MobileFuelGaugeVerticalAlignment = VAlign_Fill;
    this->NumericText_Speed = NULL;
    this->Overlay_Gauge = NULL;
}




void UFortAthenaVehicleDashboardWidget::SetupVehicleFuelWidget(AActor* NewVehicle, const bool bRequestShowWidget) {
}









void UFortAthenaVehicleDashboardWidget::OnAddedFuel(float NewFuelPercent) {
}

AFortAthenaVehicle* UFortAthenaVehicleDashboardWidget::GetVehicle() const {
    return NULL;
}

float UFortAthenaVehicleDashboardWidget::GetHUDTopSpeed() const {
    return 0.0f;
}


