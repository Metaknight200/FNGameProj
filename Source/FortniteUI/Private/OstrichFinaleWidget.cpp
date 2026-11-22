#include "OstrichFinaleWidget.h"

UOstrichFinaleWidget::UOstrichFinaleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DestructDisplayUpdateFrequency = 0.10f;
    this->FinishBroadcastOffset = 0.30f;
    this->OwningVehicle = NULL;
}








