#include "AthenaGadgetFuelWidget.h"

UAthenaGadgetFuelWidget::UAthenaGadgetFuelWidget() {
    this->FortFuelGadgetVisualType = EFortFuelGadgetVisualType::FuelMeter;
    this->FuelGaugeProgressImage = NULL;
    this->CurrentChargesText = NULL;
}

void UAthenaGadgetFuelWidget::SetItem(UFortWorldItem* Item) {
}


