#include "AthenaWinConditionMsgBase.h"

UAthenaWinConditionMsgBase::UAthenaWinConditionMsgBase() {
}

void UAthenaWinConditionMsgBase::OnShowHUDMessage(FHUDMessageData MessageData) {
}

void UAthenaWinConditionMsgBase::HandleSpatialLoadingStateChanged(ESpatialLoadingState NewState, AFortVolume* Volume) {
}

void UAthenaWinConditionMsgBase::HandlePlaylistInitialized() {
}

void UAthenaWinConditionMsgBase::HandleMinigameEnded() {
}

void UAthenaWinConditionMsgBase::HandleGameStateInitialized(AFortGameState* GameState) {
}

void UAthenaWinConditionMsgBase::HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaWinConditionMsgBase::HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

FSlateColor UAthenaWinConditionMsgBase::GetTextFillColor(const FRichTextStyleRow& Row) const {
    return FSlateColor{};
}




void UAthenaWinConditionMsgBase::BindVolumeManagerEvents() {
}


