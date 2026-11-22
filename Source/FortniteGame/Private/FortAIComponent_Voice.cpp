#include "FortAIComponent_Voice.h"
#include "Net/UnrealNetwork.h"

UFortAIComponent_Voice::UFortAIComponent_Voice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceSoundBank = NULL;
}

void UFortAIComponent_Voice::SetVoiceSoundBank(UFortTaggedSoundBank* InSoundBank) {
}

UFortTaggedSoundBank* UFortAIComponent_Voice::GetVoiceSoundBank() const {
    return VoiceSoundBank;
}

void UFortAIComponent_Voice::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAIComponent_Voice, VoiceSoundBank);
}


