#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "RadiusTrackingDisplayInfoArray.h"
#include "FortControllerComponent_RadiusTracker.generated.h"

class UFortMiniMapRadiusTrackerIndicator;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_RadiusTracker : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrackingDisplayInfos, meta=(AllowPrivateAccess=true))
    FRadiusTrackingDisplayInfoArray TrackingDisplayInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMiniMapRadiusTrackerIndicator* RadiusTrackerIndicator;
    
public:
    UFortControllerComponent_RadiusTracker(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateTrackingDisplayIndicators();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackingDisplayInfos();
    
};

