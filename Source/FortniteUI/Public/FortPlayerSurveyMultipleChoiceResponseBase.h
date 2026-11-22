#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyChoiceResponseWidget.h"
#include "FortPlayerSurveyMultipleChoiceResponseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyMultipleChoiceResponseBase : public UFortPlayerSurveyChoiceResponseWidget {
    GENERATED_BODY()
public:
    UFortPlayerSurveyMultipleChoiceResponseBase();

};

