#pragma once
#include "CoreMinimal.h"
#include "EFortBudgetCategory.h"
#include "ESpatialLoadingState.h"
#include "VolumePerformanceMetrics.h"
#include "FortCreativeVolumeWidget.h"
#include "FortCreativeVolumePerformanceMetricWidget.generated.h"

class AFortVolume;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeVolumePerformanceMetricWidget : public UFortCreativeVolumeWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumePerformanceMetrics LastVolumePerformanceMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBudgetCategory VolumePerformanceMetricCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCostPreviewOfSelectedActor;
    
public:
    UFortCreativeVolumePerformanceMetricWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumePerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeManagerVolumeStateChanged(ESpatialLoadingState VolumeState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumePerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCostPreviewOfSelectedActorUpdated(const int32 CostPreviewOfSelectedActor);
    
};

