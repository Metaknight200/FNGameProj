#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSFrequentlyAskedQuestionID.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FORTNITEUI_API FFortPlayerSurveyCMSFrequentlyAskedQuestionID();
};

