#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderFilterRules.h"
#include "FortAthenaLivingWorldPointProviderInterface.h"
#include "FortAthenaLivingWorldPointProviderSpawnLimiter.h"
#include "FortAthenaPatrolPathPointProvider.generated.h"

class AFortAthenaPatrolPath;
class AFortGameStateAthena;

UCLASS(Blueprintable)
class AFortAthenaPatrolPathPointProvider : public AActor, public IFortAthenaLivingWorldPointProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorSpawnedResult, AActor*, SpawnedActor, bool, bResult);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FiltersTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaPatrolPath* AssociatedPatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnOnPatrolPath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorSpawnedResult OnActorSpawnedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaPatrolPath> RuntimePatrolPathWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:
    AFortAthenaPatrolPathPointProvider(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnablePointProvider();
    
    UFUNCTION(BlueprintCallable)
    void DisablePointProvider();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorFailed() override PURE_VIRTUAL(OnSpawnedActorFailed,);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroyed(AActor* DestroyedActor) override PURE_VIRTUAL(OnSpawnedActorDestroyed,);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActor(AActor* SpawnedActor, const FVector& PositionFromProvider) override PURE_VIRTUAL(OnSpawnedActor,);
    
    UFUNCTION(BlueprintCallable)
    void OnEventRequested() override PURE_VIRTUAL(OnEventRequested,);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnabled(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter) const override PURE_VIRTUAL(IsEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetValidLocation(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, const float ActorDensityComputationRadius, FVector& OutPosition, FRotator& OutRotation) const override PURE_VIRTUAL(GetValidLocation, return false;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPointProviderLocation() override PURE_VIRTUAL(GetPointProviderLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    void GetFiltersTags(FGameplayTagContainer& FilterTags) const override PURE_VIRTUAL(GetFiltersTags,);
    
};

