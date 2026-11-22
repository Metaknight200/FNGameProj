#include "FortPlayerSurveyWidgetBaseLegacy.h"

UFortPlayerSurveyWidgetBaseLegacy::UFortPlayerSurveyWidgetBaseLegacy() : UUserWidget(FObjectInitializer::Get()) {
    this->QuestionSelectorClass = NULL;
    this->Survey = NULL;
    this->ActiveQuestionSelector = NULL;
    this->Widget_AnswerSelector = NULL;
    this->Text_SurveyTitle = NULL;
    this->Text_QuestionNumber = NULL;
    this->Text_Question = NULL;
    this->Text_Subtitle = NULL;
    this->Switcher_NextButton = NULL;
    this->Button_NextQuestion = NULL;
    this->Button_Finish = NULL;
    this->Button_Cancel = NULL;
    this->Button_Close = NULL;
}

void UFortPlayerSurveyWidgetBaseLegacy::ResetSurvey() {
}

void UFortPlayerSurveyWidgetBaseLegacy::NativeHandleSurveyChanged() {
}

void UFortPlayerSurveyWidgetBaseLegacy::NativeHandleQuestionsChanged(UObject* Source, int32 Index) {
}

void UFortPlayerSurveyWidgetBaseLegacy::NativeHandleDescriptionChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBaseLegacy::HandleQuestionChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBaseLegacy::HandleNumQuestionsChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBaseLegacy::HandleNavigationStateChanged(UObject* Source) {
}

void UFortPlayerSurveyWidgetBaseLegacy::HandleIndexChange(UObject* Source) {
}

void UFortPlayerSurveyWidgetBaseLegacy::HandleAnswerChanged(UObject* Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo) {
}


