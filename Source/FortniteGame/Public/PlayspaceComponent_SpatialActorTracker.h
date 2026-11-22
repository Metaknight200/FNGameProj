#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESceneQueryShape.h"
#include "FortPlayspaceComponent.h"
#include "PlayspaceComponent_SpatialActorTracker.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPlayspaceComponent_SpatialActorTracker : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOverlapsOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSceneQueryOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneQueryShape SceneQueryShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> SceneQueryObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReScanTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReScanFrequencyInSeconds;
    
public:
    UPlayspaceComponent_SpatialActorTracker(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleTrackedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<TSoftObjectPtr<AActor>> GetTrackedActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTrackedActors() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ActorExitVolume(AActor* OverlapingVolume, AActor* LeavingActor);
    
    UFUNCTION(BlueprintCallable)
    void ActorEnteredVolume(AActor* OverlapingVolume, AActor* EnteringActor);
    
};

