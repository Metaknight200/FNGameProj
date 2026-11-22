#include "DiscoCaptureWidgetBase.h"

UDiscoCaptureWidgetBase::UDiscoCaptureWidgetBase() {
    this->LastViewedTeam = 0;
}

void UDiscoCaptureWidgetBase::UpdateDiscoCaptureUI() {
}

void UDiscoCaptureWidgetBase::UpdateAllUI() {
}


void UDiscoCaptureWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

AAthenaCapturePoint* UDiscoCaptureWidgetBase::GetClosestCapturePoint(AFortPlayerPawnAthena* ViewPawn) {
    return NULL;
}


