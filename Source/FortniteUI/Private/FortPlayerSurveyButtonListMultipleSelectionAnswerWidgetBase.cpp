#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase.h"

UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase() {
}

void UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::SetChoiceButtons(const TArray<UCommonButtonLegacy*>& InButtonWidgets) {
}

void UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::NativeHandleButtonClicked(UCommonButtonLegacy* AssociatedButton) {
}



FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::GetFocusInfo() const {
    return FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo{};
}

UCommonButtonLegacy* UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::GetButtonAtIndex(int32 Index) const {
    return NULL;
}

int32 UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase::FindButtonIndex(UCommonButtonLegacy* Button) const {
    return 0;
}


