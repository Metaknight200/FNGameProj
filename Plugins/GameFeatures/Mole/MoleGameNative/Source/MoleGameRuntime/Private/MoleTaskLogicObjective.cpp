#include "MoleTaskLogicObjective.h"
#include "Net/UnrealNetwork.h"

UMoleTaskLogicObjective::UMoleTaskLogicObjective() {
    this->bReplicates = true;
    this->CapturedInitialValue = 0.00f;
    this->CapturedTargetValue = 0.00f;
    this->CurrentStatus = EMoleTaskObjectiveStatus::Unresolved;
    this->bAllowClientCompletion = false;
    this->bValidateDistFromAssociatedActors = true;
    this->bValidateMinCompletionTime = true;
    this->bInterruptTaskOnValidationFailure = true;
    this->bClearProgressOnTaskInterruption = true;
    this->bHasPerformedInitialCapture = false;
    this->bAttemptSetPrimaryActiveTaskOnValueDelta = true;
    this->bAttemptHighlightAssociatedActorsIfPrimaryActiveTask = true;
    this->bAttemptApplyIndicatorsToAssociatedActorsIfPrimaryActiveTask = true;
    this->bRequirePermissionForEmphasisFX = false;
}

void UMoleTaskLogicObjective::SetObjectiveStatus(EMoleTaskObjectiveStatus InNewStatus) {
}

void UMoleTaskLogicObjective::ServerSuggestObjectiveStatus_Implementation(EMoleTaskObjectiveStatus InNewSuggestedStatus) {
}
bool UMoleTaskLogicObjective::ServerSuggestObjectiveStatus_Validate(EMoleTaskObjectiveStatus InNewSuggestedStatus) {
    return true;
}

void UMoleTaskLogicObjective::ServerSetAsPrimaryActiveTask_Implementation() {
}
bool UMoleTaskLogicObjective::ServerSetAsPrimaryActiveTask_Validate() {
    return true;
}

void UMoleTaskLogicObjective::OnRep_CurrentValue() {
}

void UMoleTaskLogicObjective::OnRep_CurrentStatus() {
}

void UMoleTaskLogicObjective::OnRep_CapturedTargetValue() {
}

void UMoleTaskLogicObjective::OnRep_CapturedInitialValue() {
}

FText UMoleTaskLogicObjective::GetObjectiveText() const {
    return FText::GetEmpty();
}

EMoleTaskObjectiveStatus UMoleTaskLogicObjective::GetObjectiveStatus() const {
    return EMoleTaskObjectiveStatus::Unresolved;
}

float UMoleTaskLogicObjective::GetCurrentValue() const {
    return 0.0f;
}

float UMoleTaskLogicObjective::GetCapturedTargetValue() const {
    return CapturedTargetValue;
}

float UMoleTaskLogicObjective::GetCapturedInitialValue() const {
    return CapturedInitialValue;
}

void UMoleTaskLogicObjective::CheckObjectiveStatus() {
}

float UMoleTaskLogicObjective::CaptureTargetValue_Implementation() {
    return 0.0f;
}

float UMoleTaskLogicObjective::CaptureInitialValue_Implementation() {
    return 0.0f;
}

void UMoleTaskLogicObjective::ApplyCurrentValueDelta(float Delta) {
}

void UMoleTaskLogicObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleTaskLogicObjective, CurrentValue);
    DOREPLIFETIME(UMoleTaskLogicObjective, CapturedInitialValue);
    DOREPLIFETIME(UMoleTaskLogicObjective, CapturedTargetValue);
    DOREPLIFETIME(UMoleTaskLogicObjective, CurrentStatus);
}


