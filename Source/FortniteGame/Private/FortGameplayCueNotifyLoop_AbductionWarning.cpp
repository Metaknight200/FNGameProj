#include "FortGameplayCueNotifyLoop_AbductionWarning.h"

AFortGameplayCueNotifyLoop_AbductionWarning::AFortGameplayCueNotifyLoop_AbductionWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistance = 0.00f;
    this->TargetActor = NULL;
    this->WarningFXSystemComponent = NULL;
    this->WarningFXNiagaraComponent = NULL;
    this->WarningAudioComponent = NULL;
    this->RadialForceLoop = NULL;
}


