#include "FortPlayerSurveyCMSScheduler.h"

UFortPlayerSurveyCMSScheduler::UFortPlayerSurveyCMSScheduler() {
    this->CMSSurveyDataSource = NULL;
    this->SurveyTracker = NULL;
    this->SurveyManager = NULL;
    this->Player = NULL;
}

void UFortPlayerSurveyCMSScheduler::HandleSurveyFinished(UObject* Source, EFortPlayerSurveyFinishReason Reason) {
}


