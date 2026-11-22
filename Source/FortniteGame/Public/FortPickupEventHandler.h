#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortItemEntry.h"
#include "FortPickupEventHandler.generated.h"

class AFortPawn;
class AFortPickup;
class APlayerController;
class UFortWorldItemDefinition;

UINTERFACE(Blueprintable)
class UFortPickupEventHandler : public UInterface {
    GENERATED_BODY()
};

class IFortPickupEventHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupSpawned(AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupDropped(AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupDestroyed(AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupDespawned(AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupClaimed(AFortPickup* PickUp, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* ItemDefinition, FVector PickupLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePickupCaptured(AFortPickup* PickUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemRemoved(APlayerController* PlayerController, const FFortItemEntry& ItemEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemCaptured(APlayerController* PlayerController, const FFortItemEntry& ItemEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemAdded(APlayerController* PlayerController, const FFortItemEntry& ItemEntry);
    
};

