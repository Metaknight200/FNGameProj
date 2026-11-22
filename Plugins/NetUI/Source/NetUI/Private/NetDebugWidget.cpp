#include "NetDebugWidget.h"

UNetDebugWidget::UNetDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PingUI = NULL;
    this->PacketInRateUI = NULL;
    this->PacketOutRateUI = NULL;
    this->PacketInLossUI = NULL;
    this->PacketOutLossUI = NULL;
    this->UpBandwidthUI = NULL;
    this->DownBandwidthUI = NULL;
}

void UNetDebugWidget::StopTimer() {
}

void UNetDebugWidget::StartTimer() {
}


