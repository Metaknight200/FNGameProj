#include "CustomCharacterPartAnimInstance_Whiff_Cape.h"

UCustomCharacterPartAnimInstance_Whiff_Cape::UCustomCharacterPartAnimInstance_Whiff_Cape() {
    this->SkydivingVectorForceScalingFactor = 0.10f;
    this->bIsInTheAir = false;
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::SetCompLinearScaleForSkydiving() {
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::CollectWindVector() {
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::CollectFinalWindGravity() {
}

FVector UCustomCharacterPartAnimInstance_Whiff_Cape::CalculateDanceGravity() {
    return FVector{};
}


