#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortRarity.h"
#include "ScalableFloat.h"
#include "ESkyfirePhase.h"
#include "OrbCountLimit.h"
#include "OrbSpawnPoint.h"
#include "OrbSpawnerConfigByCategory.h"
#include "SkyfireVaultOrbSpawner.generated.h"

class AFortAthenaMutator_Skyfire;
class AFortGameplayMutator;
class USkyfirePlayerPawnComponent;

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API ASkyfireVaultOrbSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OrbSpawnerNetCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* VaultOrbClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OrbSpawnPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaximumPlayersAllowedInMothership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OrbSpawnZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayToInitialOrbSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OrbSpawnDelayAfterPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NoOrbPickedUpSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrbSpawnerConfigByCategory AbsoluteMaximumActiveOrbCountByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrbSpawnerConfigByCategory InitialOrbCountByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrbSpawnerConfigByCategory OrbCheckFrequencyByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrbSpawnerConfigByCategory ChanceToSpawnNewOrbByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrbCountLimit> OrbCountLimitsForPlayerCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FOrbCountLimit> OrbCountLimitsForRewardTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* CachedSkyfireMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkyfirePlayerPawnComponent*> CachedSkyfirePawnComponentsOnMothership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasSpawnedInitialOrbs, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedInitialOrbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOrbSpawnPoint> OrbSpawnPoints;
    
public:
    ASkyfireVaultOrbSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnInitialOrbs();
    
    UFUNCTION(BlueprintCallable)
    void PerformOrbSpawnCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnSkyfirePhaseChanged(const ESkyfirePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasSpawnedInitialOrbs();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOrbPickedUp(const AActor* Orb);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMutatorAttachedToGamestate(AFortGameplayMutator* AttachedMutator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OrbSpawned(AActor* SpawnedOrb);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitialOrbSpawnCompleted();
    
};

