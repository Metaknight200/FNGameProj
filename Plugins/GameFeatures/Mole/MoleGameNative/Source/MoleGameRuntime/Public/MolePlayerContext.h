#pragma once
#include "CoreMinimal.h"
#include "MolePlayerContext.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMolePlayerContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerContext;
    
    MOLEGAMERUNTIME_API FMolePlayerContext();
};

