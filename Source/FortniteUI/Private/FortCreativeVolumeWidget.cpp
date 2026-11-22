#include "FortCreativeVolumeWidget.h"

UFortCreativeVolumeWidget::UFortCreativeVolumeWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UFortCreativeVolumeWidget::OnVolumeManagerClientExitVolume(APlayerState* PlayerState, AFortVolume* Volume) {
}

void UFortCreativeVolumeWidget::OnVolumeManagerClientEnterVolume(APlayerState* PlayerState, AFortVolume* Volume) {
}

void UFortCreativeVolumeWidget::OnGameInstanceGameStateSet(AFortGameState* GameState) {
}

AFortVolume* UFortCreativeVolumeWidget::GetVolume() const {
    return NULL;
}

void UFortCreativeVolumeWidget::BindToVolumeManager() {
}


