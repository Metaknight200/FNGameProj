#include "FortPlayerAnimInstance_OstrichGunner.h"

UFortPlayerAnimInstance_OstrichGunner::UFortPlayerAnimInstance_OstrichGunner() {
    this->BodyRecoilAlphaValue = 0.00f;
    this->BodyRecoilAlphaWhenShotgunIsFired = 0.60f;
    this->BodyRecoilAlphaNoShotgunFired = 0.00f;
    this->bIsMechShotgunFired = false;
    this->bIsMechBeginFired = false;
    this->bIsRocketFiring = false;
}


