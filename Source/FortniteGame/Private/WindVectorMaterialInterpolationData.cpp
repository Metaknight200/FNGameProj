#include "WindVectorMaterialInterpolationData.h"

FWindVectorMaterialInterpolationData::FWindVectorMaterialInterpolationData() {
    // Initialize reflected value fields omitted by the dump.
    this->LerpFromValue = FLinearColor::Transparent;
    this->LerpToValue = FLinearColor::Transparent;
    this->MaterialParameterIndex = 0;
}

