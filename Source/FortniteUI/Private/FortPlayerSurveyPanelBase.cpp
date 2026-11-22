#include "FortPlayerSurveyPanelBase.h"

UFortPlayerSurveyPanelBase::UFortPlayerSurveyPanelBase() {
    this->Survey = NULL;
    this->PanelContents = NULL;
}


void UFortPlayerSurveyPanelBase::SetSurvey(UFortPlayerSurveyBase* Value) {
}


void UFortPlayerSurveyPanelBase::HandlePlayerSurveyEnded() {
}

UFortPlayerSurveyBase* UFortPlayerSurveyPanelBase::GetSurvey() const {
    return Survey;
}


