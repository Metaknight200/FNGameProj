#include "PlaysetPreview.h"
#include "Net/UnrealNetwork.h"

UPlaysetPreview::UPlaysetPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewPlaysetStaticMeshActor = NULL;
    this->PlaysetMesh = NULL;
    this->PlaysetMaterial = NULL;
}

void UPlaysetPreview::UpdatePreviewMeshScale() {
}

void UPlaysetPreview::ServerSetPreviewLocation_Implementation(const FVector& NewPreviewLocation) {
}
bool UPlaysetPreview::ServerSetPreviewLocation_Validate(const FVector& NewPreviewLocation) {
    return true;
}

void UPlaysetPreview::OnRep_PlaysetToPlace() {
}

void UPlaysetPreview::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetPreview, PlaysetToPlace);
}


