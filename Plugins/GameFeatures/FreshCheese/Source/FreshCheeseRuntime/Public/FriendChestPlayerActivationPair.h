#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FriendChestPlayerActivationPair.generated.h"

class AFortPlayerPawnAthena;

USTRUCT(BlueprintType)
struct FFriendChestPlayerActivationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ActivationTimer;
    
    FRESHCHEESERUNTIME_API FFriendChestPlayerActivationPair();
};

