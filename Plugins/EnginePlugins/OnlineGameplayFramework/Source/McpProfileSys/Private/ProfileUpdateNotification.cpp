#include "ProfileUpdateNotification.h"

FProfileUpdateNotification::FProfileUpdateNotification() {
    // Initialize reflected value fields omitted by the dump.
    this->LockExpiration = FDateTime(0);
    this->CommandRevision = 0;
    this->Revision = 0;
}

