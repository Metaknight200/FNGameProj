#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData.generated.h"

class UCommonButtonLegacy;

USTRUCT(BlueprintType)
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* ButtonWidget;
    
    FORTNITEUI_API FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData();
};

