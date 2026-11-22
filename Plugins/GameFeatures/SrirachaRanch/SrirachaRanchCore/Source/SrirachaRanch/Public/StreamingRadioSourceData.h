#pragma once
#include "CoreMinimal.h"
#include "AthenaRadioStation.h"
#include "EStreamingRadioSourceState.h"
#include "StreamingRadioSourceData.generated.h"

USTRUCT(BlueprintType)
struct FStreamingRadioSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingRadioSourceState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRadioStation SourceOverride;
    
    SRIRACHARANCH_API FStreamingRadioSourceData();
};

