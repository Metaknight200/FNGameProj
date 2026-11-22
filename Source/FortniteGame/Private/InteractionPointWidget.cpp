#include "InteractionPointWidget.h"

UInteractionPointWidget::UInteractionPointWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Switcher_Icons = NULL;
    this->TextBlock_Distance = NULL;
    this->TargetActor = NULL;
    this->bScaleIconByDistance = false;
    this->MinIconScale = 0.50f;
    this->MinIconScaleDistance = 7500.00f;
    this->MaxIconScale = 1.00f;
    this->MaxIconScaleDistance = 100.00f;
    this->HideIconWhenCloseDistance = -1.00f;
    this->DistanceUpdateInterval = 0.10f;
    this->bValidSwitcher = false;
}

void UInteractionPointWidget::UpdateDistance() {
}

void UInteractionPointWidget::StopDistanceUpdateTimer() {
}

void UInteractionPointWidget::StartDistanceUpdateTimer() {
}

void UInteractionPointWidget::SetDistanceText(float Distance) {
}


