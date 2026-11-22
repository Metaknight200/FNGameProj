#include "ProceduralParameterModifier.h"

UProceduralParameterModifier::UProceduralParameterModifier() {
    this->bEnabled = true;
    this->Contribution = 100.00f;
    this->BlendMode = EProceduralParameterModifierBlendMode::Max;
}

float UProceduralParameterModifier::GetContribution() const {
    return 0.0f;
}


