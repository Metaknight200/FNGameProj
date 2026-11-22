#include "CaptureComponent.h"
#include "Net/UnrealNetwork.h"

UCaptureComponent::UCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OldSmoothedProgress = 0.00f;
    this->SmoothedProgress = 0.00f;
    this->SmoothProgressTimer = 0.00f;
    this->ProgressDecaySpeed = 1.00f;
    this->ProgressReverseSpeed = 0.00f;
    this->CurrentCaptureSpeed = 1;
    this->CaptureSpeedBoost = 1.00f;
    this->CaptureSpeedBoostEmoting = 0.00f;
    this->NeutralizingTime = 5;
    this->DeneutralizingSpeed = 0;
    this->CaptureTime = 5.00f;
    this->CaptureTimeCurrent = 0.00f;
    this->PreviousCaptureState = ECaptureState::Neutral;
    this->CapturingStateOwner = 0;
    this->NeutralizingStateOwner = 0;
    this->StateOwner = 0;
    this->CaptureState = ECaptureState::Disabled;
    this->CaptureProgress = 0.00f;
    this->SmoothProgressState = ESmoothProgressState::DisabledByState;
}

void UCaptureComponent::UpdateSmoothProgressStateByCaptureState() {
}

void UCaptureComponent::UpdateProgressReverseSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers) {
}

void UCaptureComponent::UpdateCaptureSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers) {
}

void UCaptureComponent::SetProgressDecaySpeed(float NewProgressDecaySpeed) {
}

void UCaptureComponent::SetNeutralizingTime(int32 NewNeutralizingSpeed) {
}

void UCaptureComponent::SetCaptureTime(float NewCaptureTime) {
}

void UCaptureComponent::SetCaptureState(ECaptureState NewCaptureState, uint8 TriggerTeamIndex) {
}

void UCaptureComponent::SetCaptureSpeedBoostEmoting(float NewCaptureSpeedBoostEmoting) {
}

void UCaptureComponent::SetCaptureSpeedBoost(float NewCaptureSpeedBoost) {
}

void UCaptureComponent::OnRep_SmoothProgressState() {
}

void UCaptureComponent::OnRep_CaptureState(ECaptureState OldCaptureState) {
}

void UCaptureComponent::OnRep_CaptureProgress() {
}

uint8 UCaptureComponent::GetCaptureStateOwner() const {
    return 0;
}

ECaptureState UCaptureComponent::GetCaptureState() const {
    return ECaptureState::Neutral;
}

void UCaptureComponent::ForceCaptureProgress(float NewCaptureProgress) {
}

void UCaptureComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCaptureComponent, StateOwner);
    DOREPLIFETIME(UCaptureComponent, CaptureState);
    DOREPLIFETIME(UCaptureComponent, CaptureProgress);
    DOREPLIFETIME(UCaptureComponent, SmoothProgressState);
}


