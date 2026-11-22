#include "AthenaCompassBase.h"

UAthenaCompassBase::UAthenaCompassBase() {
    this->CompassMaterial = NULL;
    this->Image_Compass = NULL;
    this->MarkerVerticalOffset = 0.00f;
    this->TimeToShowGunshotIndicators = 0.75f;
    this->GunshotIndicatorScaleOverTime = NULL;
    this->GunshotIndicatorScaleByStrength = NULL;
    this->GunshotIndicatorAlphaOverTime = NULL;
    this->GunshotIndicatorAlphaByHeading = NULL;
}


