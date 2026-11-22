#include "AthenaBroadcastPlayerEventScoreWidget.h"

UAthenaBroadcastPlayerEventScoreWidget::UAthenaBroadcastPlayerEventScoreWidget() {
    this->PlayerEventScoreText = NULL;
    this->PlayerEventScoreSwitcher = NULL;
}

void UAthenaBroadcastPlayerEventScoreWidget::OnRemoteClientEventScoreChanged(int32 NewEventScore) {
}


