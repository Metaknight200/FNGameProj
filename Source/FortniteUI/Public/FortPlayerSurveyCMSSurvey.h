#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSCondition.h"
#include "FortPlayerSurveyCMSCustomTextReplacement.h"
#include "FortPlayerSurveyCMSQuestionContainer.h"
#include "FortPlayerSurveyCMSSurvey.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSSurvey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SurveyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SurveyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConditionGroupIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSQuestionContainer> Questions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeQuestionOrder;
    
    FORTNITEUI_API FFortPlayerSurveyCMSSurvey();
};

