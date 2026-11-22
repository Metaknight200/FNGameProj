#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyLocalizableText.h"
#include "FortPlayerSurveyCMSCustomTextReplacement.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSCustomTextReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextReplacementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyLocalizableText> TextReplacementValues;
    
    FORTNITEUI_API FFortPlayerSurveyCMSCustomTextReplacement();
};

