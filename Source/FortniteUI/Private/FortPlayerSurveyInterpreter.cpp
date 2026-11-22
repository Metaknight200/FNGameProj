#include "FortPlayerSurveyInterpreter.h"
#include "FortPlayerSurveyCMSTracker.h"

UFortPlayerSurveyInterpreter::UFortPlayerSurveyInterpreter() {
    this->CMSContext = NULL;
    this->CMSTracker = CreateDefaultSubobject<UFortPlayerSurveyCMSTracker>(TEXT("CMSTracker"));
}


