#include "FortMatchXPTotalEntry.h"

UFortMatchXPTotalEntry::UFortMatchXPTotalEntry() {
    this->bIsTotal = false;
    this->NumericText_XPValue = NULL;
    this->TextBlock_XPType = NULL;
    this->TextBlock_XPSymbol = NULL;
}

void UFortMatchXPTotalEntry::InitializeXPCounter() {
}

int32 UFortMatchXPTotalEntry::GetXPTarget() {
    return 0;
}


