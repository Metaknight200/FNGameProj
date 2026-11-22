#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ItemAttachedActor.generated.h"

class AFortPickup;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class APawn;
class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ItemAttachedActor : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_ItemAttachedActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveItemFromPickupSpawnsQueuedMap(UFortItemDefinition* ItemDefinition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPossessedPawn(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCreatedPickupProjectile(const AFortPlayerControllerAthena* PlayerController, const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCreatedPickup(const AFortPlayerController* PlayerController, AFortPickup* PickUp);
    
};

