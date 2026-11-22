#include "FortBTContext_SuppressGoalUpdate.h"

UFortBTContext_SuppressGoalUpdate::UFortBTContext_SuppressGoalUpdate() {
    this->NodeName = TEXT("Suppress Goal Updates");
    this->bUnregisterFromGoalManager = false;
}


