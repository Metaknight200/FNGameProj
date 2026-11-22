#include "LevelSaveRecord.h"

ULevelSaveRecord::ULevelSaveRecord() {
    this->SaveVersion = 20;
    this->bCompressed = false;
    this->LastRecordID = 0;
    this->PlayerPersistenceUserWipeNumber = 0;
    this->TaskQueue = NULL;
    this->bRequiresGridPlacement = false;
}

void ULevelSaveRecord::FailsafeTimerExpired() {
}


