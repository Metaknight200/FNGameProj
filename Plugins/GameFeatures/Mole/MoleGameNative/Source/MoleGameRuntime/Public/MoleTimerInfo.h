#pragma once
#include "CoreMinimal.h"
#include "MoleTimerInfo.generated.h"

USTRUCT(BlueprintType)
struct FMoleTimerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeFinish;
    
    MOLEGAMERUNTIME_API FMoleTimerInfo();
};

