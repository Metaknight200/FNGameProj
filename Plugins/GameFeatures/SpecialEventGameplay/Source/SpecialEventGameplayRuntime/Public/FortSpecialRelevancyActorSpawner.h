#pragma once
#include "CoreMinimal.h"
#include "FortActorSpawner.h"
#include "FortSpecialRelevancyActorSpawner.generated.h"

class AActor;

UCLASS(Blueprintable)
class SPECIALEVENTGAMEPLAYRUNTIME_API AFortSpecialRelevancyActorSpawner : public AFortActorSpawner {
    GENERATED_BODY()
public:
    AFortSpecialRelevancyActorSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActorSpawnedPerRelevancyGroup(const TArray<AActor*>& InSpawnedActors);
    
};

