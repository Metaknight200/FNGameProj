#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderFilterRules.h"
#include "FortAthenaLivingWorldPointProviderInterface.h"
#include "FortAthenaLivingWorldPointProviderSpawnLimiter.h"
#include "FortAthenaLivingWorldVolume.generated.h"

class AActor;
class AFortGameStateAthena;
class UEnvQuery;

UCLASS(Blueprintable)
class AFortAthenaLivingWorldVolume : public AVolume, public IFortAthenaLivingWorldPointProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorSpawnedResult, AActor*, SpawnedActor, bool, bResult);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FiltersTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DeactivationTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivationTagsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvironmentQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveUsedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EQSRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterLevelIndexMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterLevelIndexMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorSpawnedResult OnActorSpawnedResult;
    
public:
    AFortAthenaLivingWorldVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEQSQueryConfigParam(const FName ParameterName, float Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void RunEQS();
    
    UFUNCTION(BlueprintCallable)
    void OnPointProviderRegistered(const TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>& PointProvider);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsPointProviderEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePointProvider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesStartEnabled() const;
    
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

