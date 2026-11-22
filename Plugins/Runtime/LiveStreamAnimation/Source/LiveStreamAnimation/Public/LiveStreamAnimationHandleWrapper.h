#pragma once
#include "CoreMinimal.h"
#include "LiveStreamAnimationHandleWrapper.generated.h"

USTRUCT(BlueprintType)
struct LIVESTREAMANIMATION_API FLiveStreamAnimationHandleWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Handle;
    
    FLiveStreamAnimationHandleWrapper();
};
FORCEINLINE uint32 GetTypeHash(const FLiveStreamAnimationHandleWrapper) { return 0; }

