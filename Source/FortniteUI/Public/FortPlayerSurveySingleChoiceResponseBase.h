#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyChoiceResponseWidget.h"
#include "FortPlayerSurveySingleChoiceResponseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveySingleChoiceResponseBase : public UFortPlayerSurveyChoiceResponseWidget {
    GENERATED_BODY()
public:
    UFortPlayerSurveySingleChoiceResponseBase();

};

