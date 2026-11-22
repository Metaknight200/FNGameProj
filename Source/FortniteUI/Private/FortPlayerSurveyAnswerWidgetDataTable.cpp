#include "FortPlayerSurveyAnswerWidgetDataTable.h"
#include "Templates/SubclassOf.h"

UFortPlayerSurveyAnswerWidgetDataTable::UFortPlayerSurveyAnswerWidgetDataTable() {
}

TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> UFortPlayerSurveyAnswerWidgetDataTable::GetClassForSurvey(EFortPlayerSurveyQuestionTypeLegacy QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle) const {
    return NULL;
}

void UFortPlayerSurveyAnswerWidgetDataTable::ForEach(const UFortPlayerSurveyAnswerWidgetDataTable::FForEachDelegate& Delegate) const {
}


