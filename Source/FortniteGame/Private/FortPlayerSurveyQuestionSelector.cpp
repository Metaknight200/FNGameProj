#include "FortPlayerSurveyQuestionSelector.h"

UFortPlayerSurveyQuestionSelector::UFortPlayerSurveyQuestionSelector() {
    this->Survey = NULL;
}

void UFortPlayerSurveyQuestionSelector::SetSurvey(UFortPlayerSurveyBase* Value) {
}

void UFortPlayerSurveyQuestionSelector::HandleQuestionChanged(UObject* Source, int32 Index) {
}

void UFortPlayerSurveyQuestionSelector::HandleAnswerChanged(UObject* Source, int32 Index) {
}

UFortPlayerSurveyBase* UFortPlayerSurveyQuestionSelector::GetSurvey() const {
    return Survey;
}


