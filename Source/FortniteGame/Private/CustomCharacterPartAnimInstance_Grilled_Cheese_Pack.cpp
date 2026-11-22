#include "CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.h"

UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack() {
    this->ActiveKill = false;
    this->crackCount = 0.00f;
    this->crackSpin = 25.00f;
    this->crackSpinSpeed = 0.50f;
    this->InterpSpeed = 15.00f;
    this->isCrackCount = false;
    this->KillCount = 0.00f;
    this->killCrackArray.AddDefaulted(4);
    this->onCrackSpinSpeed = 23.00f;
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateSpinSettings() {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateFloatCubes() {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateCrackSpinLogic(float DeltaTime) {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateCracks() {
}

float UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::SpinFNC(float Speed, float InitialValue) {
    return 0.0f;
}


