#include "FortReplayGoToTimeDialogue.h"

UFortReplayGoToTimeDialogue::UFortReplayGoToTimeDialogue() {
    this->bIsModal = true;
    this->EditableText_GoToSeconds = NULL;
    this->Button_Confirm = NULL;
    this->Button_Close = NULL;
    this->Text_HowTo = NULL;
}

void UFortReplayGoToTimeDialogue::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortReplayGoToTimeDialogue::HandleTextChanged(const FText& Text) {
}

void UFortReplayGoToTimeDialogue::HandleReplayTimelineChanged(float StartTime, float EndTime) {
}


