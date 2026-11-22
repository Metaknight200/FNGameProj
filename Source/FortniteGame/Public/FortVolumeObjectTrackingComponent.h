#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortCreativeBudgetTracker.h"
#include "FortCreativeClassInstanceTracker.h"
#include "FortCreativeGridCellBudget.h"
#include "VolumePerformanceMetrics.h"
#include "FortVolumeObjectTrackingComponent.generated.h"

class AActor;
class AFortVolume;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVolumeObjectTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolume* ParentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnVolumePerformanceMetricsReplicated, meta=(AllowPrivateAccess=true))
    FVolumePerformanceMetrics VolumePerformanceMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker TransientTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BudgetTracker, meta=(AllowPrivateAccess=true))
    FFortCreativeBudgetTracker BudgetTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker ClassTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHeatmapEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHeatmapIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ObjectTrackingHeatmapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=On_RepObjectTrackingHeatmap, meta=(AllowPrivateAccess=true))
    TArray<uint8> ObjectTrackingHeatmapHighPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=On_RepObjectTrackingHeatmap, meta=(AllowPrivateAccess=true))
    TArray<uint8> ObjectTrackingOverBudgetHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerInfluenceDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeGridCellBudget> CreativeHeatmapThermometerBudgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CreativeHeatmapThermometerCellSize;
    
public:
    UFortVolumeObjectTrackingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumePerformanceMetricsReplicated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BudgetTracker();
    
    UFUNCTION(BlueprintCallable)
    void On_RepObjectTrackingHeatmap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeatmapEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateHeatmap();
    
    UFUNCTION(BlueprintCallable)
    void AddActorAtLocation(AActor* Actor, const FVector& Location);
    
};

