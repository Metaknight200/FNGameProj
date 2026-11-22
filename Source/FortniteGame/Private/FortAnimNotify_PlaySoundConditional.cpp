#include "FortAnimNotify_PlaySoundConditional.h"

UFortAnimNotify_PlaySoundConditional::UFortAnimNotify_PlaySoundConditional() {
}

void UFortAnimNotify_PlaySoundConditional::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    if (MeshComp && ShouldTriggerAnimNotify(MeshComp, Animation)) {
        Super::Notify(MeshComp, Animation);
    }
}



