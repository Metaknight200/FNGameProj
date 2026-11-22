#include "AthenaCobaltStormShield.h"
#include "Net/UnrealNetwork.h"

AAthenaCobaltStormShield::AAthenaCobaltStormShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->ShieldBoundarySound = NULL;
    this->LowpassAudioListenerRange = 3000.00f;
    this->LowpassAudioValueOutside = 1500.00f;
    this->LowpassAudioValueInside = 20000.00f;
    this->LowpassAudioInterpSpeed = 10.00f;
    this->CachedMutator = NULL;
    this->ClientStormShieldShrinkTimerValue = -1.00f;
    this->ShieldBoundaryAudio = NULL;
}

void AAthenaCobaltStormShield::StormShieldShrinkTimerComplete() {
}

void AAthenaCobaltStormShield::OnRep_ClientStormShieldShrinkTimerValue() {
}

void AAthenaCobaltStormShield::ClientStormShieldShrinkTimerComplete() {
}

void AAthenaCobaltStormShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaCobaltStormShield, CachedMutator);
    DOREPLIFETIME(AAthenaCobaltStormShield, ClientStormShieldShrinkTimerValue);
}


