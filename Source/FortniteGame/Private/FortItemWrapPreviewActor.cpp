#include "FortItemWrapPreviewActor.h"

AFortItemWrapPreviewActor::AFortItemWrapPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyWrap = NULL;
    this->ItemWrapModifier = NULL;
}

void AFortItemWrapPreviewActor::StartLoadingNextPreviewActor(int32 SlotIndex) {
}



void AFortItemWrapPreviewActor::ApplyWrapToSkelMesh(USkeletalMeshComponent* MeshComp) {
}


