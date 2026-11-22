#include "FortAthenaBTService_CopyBlackboardVariable.h"

UFortAthenaBTService_CopyBlackboardVariable::UFortAthenaBTService_CopyBlackboardVariable() {
    this->NodeName = TEXT("Copy Blackboard Variables");
    this->bCallTickOnSearchStart = true;
    this->bCopyOnBecomeRelevant = true;
    this->bCopyOnCeaseRelevant = false;
    this->bCopyWhenSourceValueChange = false;
}


