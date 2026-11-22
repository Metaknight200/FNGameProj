#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSConditionGroup.h"
#include "FortPlayerSurveyCMSCustomTextReplacement.h"
#include "FortPlayerSurveyCMSFrequentlyAskedQuestion.h"
#include "FortPlayerSurveyCMSSurvey.h"
#include "FortPlayerSurveyCMSData.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSConditionGroup> ConditionGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSSurvey> Surveys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurveysEnabled;
    
    FORTNITEUI_API FFortPlayerSurveyCMSData();
};

