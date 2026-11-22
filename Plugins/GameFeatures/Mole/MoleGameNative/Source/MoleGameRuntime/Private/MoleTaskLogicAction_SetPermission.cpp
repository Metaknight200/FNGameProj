#include "MoleTaskLogicAction_SetPermission.h"

UMoleTaskLogicAction_SetPermission::UMoleTaskLogicAction_SetPermission() {
    this->bUsesAssociatedTaskActors = true;
    this->bUsesActionRemovalPolicyBitmask = true;
    this->bGrantPermission = true;
}


