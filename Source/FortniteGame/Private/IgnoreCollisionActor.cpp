#include "IgnoreCollisionActor.h"

FIgnoreCollisionActor::FIgnoreCollisionActor() {
    this->IgnoreActor = NULL;
    this->TimeIgnoreStarted = 0.00f;
    this->IgnoreDuration = 0.00f;
}

