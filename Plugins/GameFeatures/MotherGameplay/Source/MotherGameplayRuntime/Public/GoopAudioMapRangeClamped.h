#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GoopAudioMapRangeClamped.generated.h"

USTRUCT(BlueprintType)
struct FGoopAudioMapRangeClamped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutRange;
    
    MOTHERGAMEPLAYRUNTIME_API FGoopAudioMapRangeClamped();
};

