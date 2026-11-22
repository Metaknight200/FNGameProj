#include "MoleTaskLogicAction.h"

UMoleTaskLogicAction::UMoleTaskLogicAction() {
    this->ActionRemovalPolicyBitmask = 15;
    this->bUsesActionRemovalPolicyBitmask = false;
}

void UMoleTaskLogicAction::OnActionRemovalPolicyInvoked_Implementation() {
}


