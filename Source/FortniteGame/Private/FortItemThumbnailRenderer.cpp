#include "FortItemThumbnailRenderer.h"
#include "Templates/SubclassOf.h"

UFortItemThumbnailRenderer::UFortItemThumbnailRenderer() {
    this->PreviewMaterial = NULL;
    this->CaptureEnvironmentActorClass = NULL;
    this->ItemDefinition = NULL;
    this->PreviewMaterialInstance = NULL;
}

void UFortItemThumbnailRenderer::UpdateItemCapture() {
}

void UFortItemThumbnailRenderer::SetItemDefinition(UFortItemDefinition* InItemDefinition) {
}

void UFortItemThumbnailRenderer::InvalidateCapture() {
}

AFortItemCaptureActor* UFortItemThumbnailRenderer::GetOrCreateCaptureActor(TSubclassOf<AFortItemCaptureActor> ThumbnailCaptureTarget) {
    return NULL;
}

UMaterialInstanceDynamic* UFortItemThumbnailRenderer::GetItemPreviewMaterial() {
    return NULL;
}


