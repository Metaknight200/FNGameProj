#include "FortHoldableButton.h"

UFortHoldableButton::UFortHoldableButton() {
    this->bIsHoldableButton = false;
    this->bIgnoreLongPress = true;
    this->HoldTime = 0.00f;
    this->StartingHoldPercentage = 0.00f;
    this->QualifyingHoldTime = 0.00f;
    this->bHoldCancelledFromMovement = false;
}









