#include "FortPlayerSurveyDispatcher.h"

UFortPlayerSurveyDispatcher::UFortPlayerSurveyDispatcher() {
    this->WidgetClass = NULL;
    this->OwningPlayer = NULL;
    this->SurveyContext = NULL;
    this->CurrentWidget = NULL;
}

void UFortPlayerSurveyDispatcher::SetOwningPlayer(APlayerController* Value) {
}

void UFortPlayerSurveyDispatcher::HandleSurveyDismissed(UFortPlayerSurveyPanelBase* Source) {
}

void UFortPlayerSurveyDispatcher::HandleFirstActivation(UCommonActivatablePanelLegacy* Panel) {
}

void UFortPlayerSurveyDispatcher::HandleDisplayOneSurvey() {
}

void UFortPlayerSurveyDispatcher::DisplaySurveys(int32 SurveyCount) {
}


