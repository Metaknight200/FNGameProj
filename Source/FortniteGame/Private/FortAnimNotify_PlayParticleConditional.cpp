#include "FortAnimNotify_PlayParticleConditional.h"

UFortAnimNotify_PlayParticleConditional::UFortAnimNotify_PlayParticleConditional() {
}

void UFortAnimNotify_PlayParticleConditional::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    if (MeshComp && ShouldTriggerAnimNotify(MeshComp, Animation)) {
        Super::Notify(MeshComp, Animation);
    }
}



