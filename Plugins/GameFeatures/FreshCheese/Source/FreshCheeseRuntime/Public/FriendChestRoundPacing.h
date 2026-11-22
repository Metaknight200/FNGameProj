#pragma once
#include "CoreMinimal.h"
#include "FriendChestRoundPacing.generated.h"

USTRUCT(BlueprintType)
struct FFriendChestRoundPacing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NumTargetsPerRound;
    
    FRESHCHEESERUNTIME_API FFriendChestRoundPacing();
};

