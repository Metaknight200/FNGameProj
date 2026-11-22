#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSFrequentlyAskedQuestionID.h"
#include "FortPlayerSurveyCMSQuestion.h"
#include "FortPlayerSurveyCMSQuestionContainer.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSQuestionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSQuestion Question;
    
    FORTNITEUI_API FFortPlayerSurveyCMSQuestionContainer();
};

