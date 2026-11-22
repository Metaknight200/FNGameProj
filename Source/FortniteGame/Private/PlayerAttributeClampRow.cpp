#include "PlayerAttributeClampRow.h"

FPlayerAttributeClampRow::FPlayerAttributeClampRow() {
    this->ClampType = EPlayerAttributeClampType::Minimum;
    this->ClampValue = 0.00f;
}

