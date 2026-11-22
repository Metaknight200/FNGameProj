#include "FortReplayHighlightsWindow.h"

UFortReplayHighlightsWindow::UFortReplayHighlightsWindow() {
    this->HighlightItemClass = NULL;
    this->VerticalBox_ItemContainer = NULL;
}

void UFortReplayHighlightsWindow::HandleReplayHighlightsAvailable(AFortReplaySpectator* Sender, bool bIsAvailable) {
}

void UFortReplayHighlightsWindow::HandleHighlightItemPlayEvent(UFortReplayHighlightItemBase* Sender) {
}


