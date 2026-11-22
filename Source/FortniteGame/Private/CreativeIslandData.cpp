#include "CreativeIslandData.h"

FCreativeIslandData::FCreativeIslandData() {
    // Initialize reflected value fields omitted by the dump.
    this->DeletedAt = FDateTime(0);
    this->LastLoadedDate = FDateTime(0);
    this->PublishedIslandVersion = 0;
    this->bIsDeleted = false;
}

