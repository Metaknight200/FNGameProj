#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameStateComponent.h"
#include "Styling/SlateBrush.h"
#include "FortLivingWorldConfigOverride.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaLivingWorldManager.generated.h"

class AActor;
class AFortAthenaPatrolPath;
class AFortGameStateAthena;
class IFortAthenaLivingWorldPointProviderInterface;
class UFortAthenaLivingWorldPointProviderInterface;
class UFortAthenaLivingWorldConfigData;
class UFortAthenaLivingWorldEncounter;
class UFortAthenaLivingWorldEncounterInstance;
class UFortAthenaSpawnerDataBase;
class UFortSeasonalEventManager;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaLivingWorldManager : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaLivingWorldConfigData> DefaultLagerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortLivingWorldConfigOverride> LagerConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LagerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> PointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpecialActorMinimapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialActorMinimapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpecialActorCompassIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialActorCompassIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaSpawnerDataBase>> LoadedSpawnerDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> LoadedActorDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* CachedWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaLivingWorldConfigData* CachedConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSeasonalEventManager* CachedSeasonalEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActorClassToPreloadOnClient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ActorClassToPreloadOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RuntimePointProviderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> RuntimePointProviderOwners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* EQSHelper;
    
public:
    UFortAthenaLivingWorldManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TrySpawnEvent(FDataTableRowHandle EventEntry, const FTransform SpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAthenaLivingWorldEncounterInstance* StartEncounter(const TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterType, const TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders);
    
    UFUNCTION(BlueprintCallable)
    void RequestEventGeneration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 QueryEventBudget(FDataTableRowHandle EventEntry, const AActor* SpawnLocation) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroy(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorClassToPreloadOnClient();
    
    UFUNCTION(BlueprintCallable)
    void OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LivingWorldManagerUnregisterPointProvider(AActor* PointProvider);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleVerboseLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleGenerateEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleActorMinimap();
    
    UFUNCTION(BlueprintCallable)
    static void LivingWorldManagerRegisterPointProvider(AActor* PointProvider);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerGenerateEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerFlush();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
    
};

