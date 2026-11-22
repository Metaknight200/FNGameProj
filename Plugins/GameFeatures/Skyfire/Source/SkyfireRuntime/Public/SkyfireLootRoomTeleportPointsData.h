#pragma once
#include "CoreMinimal.h"
#include "SkyfireLootRoomTeleportPointsData.generated.h"

class ASkyfireTeleportSquadPoint;

USTRUCT(BlueprintType)
struct FSkyfireLootRoomTeleportPointsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyfireTeleportSquadPoint*> TeleportPoints;
    
    SKYFIRERUNTIME_API FSkyfireLootRoomTeleportPointsData();
};

