#include "ProfileUpdateSingle.h"

FProfileUpdateSingle::FProfileUpdateSingle() {
    // Initialize reflected value fields omitted by the dump.
    this->LockExpiration = FDateTime(0);
    this->ProfileRevision = 0;
    this->ProfileChangesBaseRevision = 0;
    this->ProfileCommandRevision = 0;
}

