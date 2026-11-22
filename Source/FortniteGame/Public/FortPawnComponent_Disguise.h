#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortPawnComponent_DisguiseRevealReason.h"
#include "FortPawnComponent.h"
#include "FortPawnComponent_Disguise.generated.h"

class AActor;
class AController;
class UFortAthenaAIRuntimeParameters_AIBotDisguise;
class UFortAthenaAIRuntimeParameters_NPCBehavior;
class UFortGameStateComponent_AffiliationManager;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPawnComponent_Disguise : public UFortPawnComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_AIBotDisguise* CachedAIDisguiseParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerDetectedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RevealPlayerProximityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_AffiliationManager* AffiliationManager;
    
public:
    UFortPawnComponent_Disguise(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RevealDisguise(const AActor* RevealInstigator, EFortPawnComponent_DisguiseRevealReason RevealReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeRevealed() const;
    
};

