#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuffetFlyingRicochetReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FBuffetFlyingRicochetReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    SPECIALEVENTGAMEPLAYRUNTIME_API FBuffetFlyingRicochetReplicatedData();
};

