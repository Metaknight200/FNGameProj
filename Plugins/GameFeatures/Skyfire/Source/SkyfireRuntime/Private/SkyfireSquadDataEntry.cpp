#include "SkyfireSquadDataEntry.h"

FSkyfireSquadDataEntry::FSkyfireSquadDataEntry() {
    this->SquadId = 0;
    this->EarnedLootRarity = EFortRarity::Common;
    this->TeleportToLootRoomTime = 0.00f;
    this->bHasTeleportedToLootRoom = false;
    this->PlayspaceTeleportSquadPoint = NULL;
    this->PrisonTeleportSquadPoint = NULL;
}

