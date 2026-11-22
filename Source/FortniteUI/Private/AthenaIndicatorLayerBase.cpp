#include "AthenaIndicatorLayerBase.h"

UAthenaIndicatorLayerBase::UAthenaIndicatorLayerBase() {
    this->GeneralIndicators = NULL;
    this->NameIndicators = NULL;
    this->PlayerIndicatorClass = NULL;
    this->PlayerIndicatorPoolSize = 0;
    this->PlayerVM = NULL;
    this->TeamIndicatorMesh = NULL;
    this->bWasTargeting = false;
}



