#include "FortOptionsMenuInputData.h"

UFortOptionsMenuInputData::UFortOptionsMenuInputData() {
    this->ElementNumber = 0;
    this->TabText = NULL;
}

float UFortOptionsMenuInputData::GetInputScale() const {
    return 0.0f;
}

EFortInputActionGroup UFortOptionsMenuInputData::GetInputActionGroup() const {
    return EFortInputActionGroup::AllModes;
}


