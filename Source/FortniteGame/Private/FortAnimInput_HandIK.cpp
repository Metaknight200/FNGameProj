#include "FortAnimInput_HandIK.h"

FFortAnimInput_HandIK::FFortAnimInput_HandIK() {
    this->IKAlphaOverrideInterpSpeed = 0.00f;
    this->IKSpaceSwitchOverrideInterpSpeed = 0.00f;
    this->HandIKRetargetingWeight = 0.00f;
    this->HandsInRootSpaceAlpha = 0.00f;
    this->LeftHandIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->LeftHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
    this->RightHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
}

