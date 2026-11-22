#include "FortBTService_ActivateAbility.h"

UFortBTService_ActivateAbility::UFortBTService_ActivateAbility() {
    this->NodeName = TEXT("Activate Ability");
    this->bRequireCanHitTargetWithAbility = true;
    this->bPawnTargetsOnly = false;
}


