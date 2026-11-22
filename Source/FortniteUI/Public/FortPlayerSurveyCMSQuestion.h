#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyLocalizableText.h"
#include "FortPlayerSurveyCMSQuestion.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSQuestion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyLocalizableText QuestionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumberOfOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyLocalizableText> Responses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeResponseOrder;
    
    FORTNITEUI_API FFortPlayerSurveyCMSQuestion();
};

