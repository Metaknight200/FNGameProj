#include "FortVolumeObjectTrackingComponent.h"
#include "Net/UnrealNetwork.h"

UFortVolumeObjectTrackingComponent::UFortVolumeObjectTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentVolume = NULL;
    this->bHeatmapEnabled = false;
    this->bHeatmapIsDirty = false;
    this->ObjectTrackingHeatmapSize = 0;
    this->TargetUpdateTime = 0.00f;
    this->CreativeHeatmapThermometerInfluenceDistanceMultiplier = 1.00f;
    this->CreativeHeatmapThermometerCellSize = 4096.00f;
}

void UFortVolumeObjectTrackingComponent::RemoveActor(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

void UFortVolumeObjectTrackingComponent::OnVolumePerformanceMetricsReplicated() {
}

void UFortVolumeObjectTrackingComponent::OnRep_BudgetTracker() {
}

void UFortVolumeObjectTrackingComponent::On_RepObjectTrackingHeatmap() {
}

bool UFortVolumeObjectTrackingComponent::IsHeatmapEnabled() const {
    return bHeatmapEnabled;
}

void UFortVolumeObjectTrackingComponent::CalculateHeatmap() {
}

void UFortVolumeObjectTrackingComponent::AddActorAtLocation(AActor* Actor, const FVector& Location) {
}

void UFortVolumeObjectTrackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, VolumePerformanceMetrics);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, TransientTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, BudgetTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ClassTracker);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, bHeatmapEnabled);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingHeatmapSize);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingHeatmapHighPrecision);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, ObjectTrackingOverBudgetHeatmap);
    DOREPLIFETIME(UFortVolumeObjectTrackingComponent, CreativeHeatmapThermometerCellSize);
}


