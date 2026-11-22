#include "AthenaContextTutorialIndicator.h"

UAthenaContextTutorialIndicator::UAthenaContextTutorialIndicator() {
    this->OffscreenMaxTreshold = -1.60f;
    this->Overlay_Icon_1 = NULL;
    this->ScreenEdgePaddingSizePercent = 0.05f;
}

void UAthenaContextTutorialIndicator::SwitchIndicatorSize() {
}






float UAthenaContextTutorialIndicator::GetMinTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetMaxTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetMaxOffscreenTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetCurrentDotProduct() const {
    return 0.0f;
}


