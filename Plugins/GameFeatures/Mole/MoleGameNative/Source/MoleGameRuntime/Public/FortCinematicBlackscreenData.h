#pragma once
#include "CoreMinimal.h"
#include "FortCinematicBlackscreenData.generated.h"

USTRUCT(BlueprintType)
struct FFortCinematicBlackscreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeToBlack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldBlack;
    
    MOLEGAMERUNTIME_API FFortCinematicBlackscreenData();
};

