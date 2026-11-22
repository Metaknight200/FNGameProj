#include "FortInteractContextInfo.h"

UFortInteractContextInfo::UFortInteractContextInfo() {
    this->ContextOverrideWidget = NULL;
    this->SecondContextOverrideWidget = NULL;
    this->ReceivingActor = NULL;
    this->InteractComponent = NULL;
    this->OptionalObjectData = NULL;
    this->LongInteractSound = NULL;
    this->OptionalHUDDisplayWidget = NULL;
    this->InteractionBeingAttempted = FirstInteraction;
    this->RequiredDuration = 0.00f;
    this->SecondRequiredDuration = 0.00f;
    this->bShowCountDown = false;
    this->bShowFirstInteraction = true;
    this->bShowSecondInteraction = false;
    this->bIsSecondInteractionActive = false;
    this->bDisplayTextOnly = false;
    this->bSuppressInteractionWidget = false;
    this->bHasCustomInteractionWidget = false;
    this->bSuppressSimpleInteractionWidgetForTouch = true;
    this->InteractContextInfoType = EFortInteractContextInfoType::Standard;
}

bool UFortInteractContextInfo::HasValidSecondContextOverride() const {
    return false;
}

bool UFortInteractContextInfo::HasValidContextOverride() const {
    return false;
}


