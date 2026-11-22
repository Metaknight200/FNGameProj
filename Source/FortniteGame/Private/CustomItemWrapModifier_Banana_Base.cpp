#include "CustomItemWrapModifier_Banana_Base.h"

ACustomItemWrapModifier_Banana_Base::ACustomItemWrapModifier_Banana_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeTime = 1800.00f;
    this->ConstrastParameterName = TEXT("GradientHeightLerpContrast");
    this->OffsetParameterName = TEXT("Wrap Gradient_ GradientOffset");
    this->FrontendContrastValue = 0.10f;
    this->FrontendOffsetValue = -0.50f;
    this->MinOffsetValue = -0.75f;
    this->MaxOffsetValue = 0.00f;
}


