#include "FortCreativeVolumePerformanceMetricWidget.h"

UFortCreativeVolumePerformanceMetricWidget::UFortCreativeVolumePerformanceMetricWidget() {
    this->VolumePerformanceMetricCategory = EFortBudgetCategory::Memory;
    this->LastCostPreviewOfSelectedActor = 0;
}

void UFortCreativeVolumePerformanceMetricWidget::OnVolumePerformanceMetricsUpdated(const FVolumePerformanceMetrics& VolumePerformanceMetrics) {
}

void UFortCreativeVolumePerformanceMetricWidget::OnVolumeManagerVolumeStateChanged(ESpatialLoadingState VolumeState, AFortVolume* Volume) {
}




