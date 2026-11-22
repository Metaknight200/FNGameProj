#pragma once
#include "CoreMinimal.h"
#include "FortSquadStart.h"
#include "SkyfireTeleportSquadPoint.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API ASkyfireTeleportSquadPoint : public AFortSquadStart {
    GENERATED_BODY()
public:
    ASkyfireTeleportSquadPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleportComplete(AFortPlayerStateAthena* Player);
    
};

