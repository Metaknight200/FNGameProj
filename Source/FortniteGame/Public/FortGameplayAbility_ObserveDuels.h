#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DuelOverlayData.h"
#include "EDuelState.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_ObserveDuels.generated.h"

class AActor;
class AController;
class AFortPlayerPawn;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFortGameplayAbility_ObserveDuels : public UFortGameplayAbility {
    GENERATED_BODY()
public:
    UFortGameplayAbility_ObserveDuels();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDuelChange(EDuelState NewDuelState, const FDuelOverlayData& ChangedDuelOverlayData);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDuelistDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddDuel(AFortPlayerPawn* ChallengerPlayerPawn, AFortPlayerPawn* ChallengedNPC);
    
};

