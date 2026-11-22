#pragma once
#include "CoreMinimal.h"
#include "MoleMessageLobbyCountdown.generated.h"

USTRUCT(BlueprintType)
struct FMoleMessageLobbyCountdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsRemaining;
    
    MOLEGAMERUNTIME_API FMoleMessageLobbyCountdown();
};

