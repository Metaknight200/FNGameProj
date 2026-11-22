#include "FortAthenaMutator_AudioFadeOverride.h"

AFortAthenaMutator_AudioFadeOverride::AFortAthenaMutator_AudioFadeOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->FadeoutSoundMix = NULL;
}


void AFortAthenaMutator_AudioFadeOverride::HandleAudioFade(bool bFadeOut, float FadeTime) {
}


