#include "FortPlayerSurveyQuestionMultipleSelection.h"

UFortPlayerSurveyQuestionMultipleSelection::UFortPlayerSurveyQuestionMultipleSelection() {
    this->MinNumAnswers = 0;
    this->MaxNumAnswers = 0;
}

bool UFortPlayerSurveyQuestionMultipleSelection::TryGetMaxNumAnswers(int32& OutMaxNumAnswers) const {
    return false;
}


