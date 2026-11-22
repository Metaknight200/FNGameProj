#include "AthenaMOTDBase.h"

FAthenaMOTDBase::FAthenaMOTDBase() {
    // Initialize reflected value fields omitted by the dump.
    this->CustomDarkColor = FColor(0, 0, 0, 0);
    this->CustomLightColor = FColor(0, 0, 0, 0);
    this->EntryType = EAthenaNewsEntryType::Text;
    this->bHasCustomColor = false;
}

