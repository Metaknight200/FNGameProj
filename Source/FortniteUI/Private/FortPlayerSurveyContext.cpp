#include "FortPlayerSurveyContext.h"

UFortPlayerSurveyContext::UFortPlayerSurveyContext() {
    this->SurveyManager = NULL;
    this->SurveyTracker = NULL;
    this->SurveyScheduler = NULL;
}

void UFortPlayerSurveyContext::RequestDisplayOneSurvey() {
}

bool UFortPlayerSurveyContext::IsPlayerSurveySystemEnabled() {
    return false;
}

UFortPlayerSurveyManagerLegacy* UFortPlayerSurveyContext::GetPlayerSurveyManager() const {
    return NULL;
}


