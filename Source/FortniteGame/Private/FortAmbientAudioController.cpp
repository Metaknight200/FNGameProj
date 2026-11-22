#include "FortAmbientAudioController.h"

UFortAmbientAudioController::UFortAmbientAudioController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultAudioBank = NULL;
    this->PlayerController = NULL;
    this->PauseFadeTime = 1.00f;
}

void UFortAmbientAudioController::SetAudioBankOverride(UFortPOIAmbientAudioBank* BankOverride) {
}

void UFortAmbientAudioController::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase::Type> CurrentDayPhase, TEnumAsByte<EFortDayPhase::Type> PreviousDayPhase, bool bAtCreation) {
}

UFortAmbientAudioController* UFortAmbientAudioController::GetAmbientAudioControllerFromContext(UObject* WorldContextObject) {
    return NULL;
}

void UFortAmbientAudioController::ClearAudioBankOverride() {
}


