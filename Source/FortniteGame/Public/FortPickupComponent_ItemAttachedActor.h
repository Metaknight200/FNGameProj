#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortPickupComponent_ItemAttachedActor.generated.h"

class AActor;
class AFortPawn;
class AFortPickup;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPickupComponent_ItemAttachedActor : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedActor;
    
public:
    UFortPickupComponent_ItemAttachedActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPickupPickedUpByPlayer(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AttachActorToPickup(AFortPickup* PickUp, AActor* ActorToAttach);
    
};

