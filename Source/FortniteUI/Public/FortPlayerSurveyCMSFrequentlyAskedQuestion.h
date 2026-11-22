#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSQuestion.h"
#include "FortPlayerSurveyCMSFrequentlyAskedQuestion.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FrequentlyAskedQuestionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSQuestion Question;
    
    FORTNITEUI_API FFortPlayerSurveyCMSFrequentlyAskedQuestion();
};

