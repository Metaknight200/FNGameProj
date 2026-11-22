#include "FortGameplayCueNotify_Actor.h"

AFortGameplayCueNotify_Actor::AFortGameplayCueNotify_Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoDestroyOnRemove = true;
    this->ExecutionTarget = NULL;
}


