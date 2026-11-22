#include "FortVehicleInfoIndicatorWidget.h"

UFortVehicleInfoIndicatorWidget::UFortVehicleInfoIndicatorWidget() {
    this->TimeToHideWhenDamaged = 3.00f;
}

void UFortVehicleInfoIndicatorWidget::SetVehicle(AActor* NewVehicle) {
}

void UFortVehicleInfoIndicatorWidget::OnVehicleHealthChanged_Implementation() {
}


APawn* UFortVehicleInfoIndicatorWidget::GetControlledPawn() const {
    return NULL;
}


