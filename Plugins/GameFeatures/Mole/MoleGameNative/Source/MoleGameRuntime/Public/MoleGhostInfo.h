#pragma once
#include "CoreMinimal.h"
#include "MoleGhostInfo.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleGhostInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* GhostPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasVotedOut;
    
    MOLEGAMERUNTIME_API FMoleGhostInfo();
};

