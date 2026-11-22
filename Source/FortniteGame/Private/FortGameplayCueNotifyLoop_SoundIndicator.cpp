#include "FortGameplayCueNotifyLoop_SoundIndicator.h"

AFortGameplayCueNotifyLoop_SoundIndicator::AFortGameplayCueNotifyLoop_SoundIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickEnabled = true;
    this->SoundIndicatorType = EFortSoundIndicatorTypes::FootStep;
    this->SoundIndicatorMaxDistance = 0.00f;
    this->ShowAffiliations.AddDefaulted(2);
    this->SoundIndicatorIconOverride = NULL;
}


