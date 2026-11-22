#pragma once
#include "CoreMinimal.h"
#include "MolePlayerTeleportedInfo.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMolePlayerTeleportedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* TeleportedPlayerState;
    
    MOLEGAMERUNTIME_API FMolePlayerTeleportedInfo();
};

