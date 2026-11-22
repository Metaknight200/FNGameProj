#include "FortSurveyNumericalChoiceWidget.h"

UFortSurveyNumericalChoiceWidget::UFortSurveyNumericalChoiceWidget() {
    this->DummyButton = NULL;
    this->Text_MinRating = NULL;
    this->Text_MaxRating = NULL;
}

void UFortSurveyNumericalChoiceWidget::UpdateText() {
}

void UFortSurveyNumericalChoiceWidget::UpdateRatingButtons() {
}

void UFortSurveyNumericalChoiceWidget::HandlePlayerRequestAnswer(int32 AnswerIndex) {
}

UWidget* UFortSurveyNumericalChoiceWidget::HandleGetDefaultFocusedWidget() const {
    return NULL;
}


