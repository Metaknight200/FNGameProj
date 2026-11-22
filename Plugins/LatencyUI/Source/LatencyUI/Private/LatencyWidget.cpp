#include "LatencyWidget.h"

ULatencyWidget::ULatencyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TotalLatencyUI = NULL;
    this->GameLatencyUI = NULL;
    this->RenderLatencyUI = NULL;
    this->OSWorkLatencyUI = NULL;
    this->DriverLatencyUI = NULL;
    this->GPURenderLatencyUI = NULL;
    this->TweakLatencyUI = NULL;
}

void ULatencyWidget::StopTimer() {
}

void ULatencyWidget::StartTimer() {
}


