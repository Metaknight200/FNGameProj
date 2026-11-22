#pragma once
#include "CoreMinimal.h"
#include "MoleTaskScoreEventData.generated.h"

USTRUCT(BlueprintType)
struct FMoleTaskScoreEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreGoal;
    
    MOLEGAMERUNTIME_API FMoleTaskScoreEventData();
};

