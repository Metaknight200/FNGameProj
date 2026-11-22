#include "FortCameraMode.h"

UFortCameraMode::UFortCameraMode() {
    this->PlayerCamera = NULL;
    this->TransitionTime = 0.00f;
    this->TransitionOutTime = 0.00f;
    this->bOverrideTransitionOutTime = false;
    this->bResetInterpolation = true;
    this->bShouldAllowBlendingWhenActive = true;
    this->bShouldAllowBlendingWhenInactive = true;
    this->bShouldPassViewTargetCheckOnTransition = false;
}


