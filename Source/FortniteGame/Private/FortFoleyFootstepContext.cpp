#include "FortFoleyFootstepContext.h"

UFortFoleyFootstepContext::UFortFoleyFootstepContext() {
    this->StepType = EFortFootstepAudioType::Walk;
    this->SurfaceType = EFortFootstepSurfaceType::Default;
    this->RelativePosition = EFortFootstepPosition::Parallel;
    this->bIs1P = false;
    this->bIsThreat = false;
}


