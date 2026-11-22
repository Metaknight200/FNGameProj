#include "ReactorGradeGameplayCue_ChargeUp.h"

AReactorGradeGameplayCue_ChargeUp::AReactorGradeGameplayCue_ChargeUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Pawn = NULL;
    this->TraceChannel = ECC_WorldStatic;
}

void AReactorGradeGameplayCue_ChargeUp::UpdateAimEndPoint() {
}


FVector AReactorGradeGameplayCue_ChargeUp::GetFoundEndPoint() const {
    return FVector{};
}


