#include "FortCurieManagerComponentEntry.h"

FFortCurieManagerComponentEntry::FFortCurieManagerComponentEntry() {
    this->bIsActive = false;
    this->Priority = (ECurieManagerComponentPriority)0;
    this->ManagerType = NULL;
    this->Config = NULL;
}

