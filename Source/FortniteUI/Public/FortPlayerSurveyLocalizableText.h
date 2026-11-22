#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyLocalizableText.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyLocalizableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizedText;
    
    FORTNITEUI_API FFortPlayerSurveyLocalizableText();
};

