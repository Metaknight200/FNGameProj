#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderFilterRules.h"
#include "FortAthenaLivingWorldPointProviderInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortAthenaLivingWorldPointProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAthenaLivingWorldPointProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void OnSpawnedActorFailed() PURE_VIRTUAL(OnSpawnedActorFailed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnSpawnedActorDestroyed(AActor* DestroyedActor) PURE_VIRTUAL(OnSpawnedActorDestroyed,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnSpawnedActor(AActor* SpawnedActor, const FVector& PositionFromProvider) PURE_VIRTUAL(OnSpawnedActor,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnEventRequested() PURE_VIRTUAL(OnEventRequested,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsEnabled(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter) const PURE_VIRTUAL(IsEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetValidLocation(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, const float ActorDensityComputationRadius, FVector& OutPosition, FRotator& OutRotation) const PURE_VIRTUAL(GetValidLocation, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetPointProviderLocation() PURE_VIRTUAL(GetPointProviderLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetFiltersTags(FGameplayTagContainer& FilterTags) const PURE_VIRTUAL(GetFiltersTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EnablePointProvider() PURE_VIRTUAL(EnablePointProvider,);
    
    UFUNCTION(BlueprintCallable)
    virtual void DisablePointProvider() PURE_VIRTUAL(DisablePointProvider,);
    
};

