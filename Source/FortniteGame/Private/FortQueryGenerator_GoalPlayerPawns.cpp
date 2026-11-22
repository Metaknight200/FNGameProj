#include "FortQueryGenerator_GoalPlayerPawns.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_GoalPlayerPawns::UFortQueryGenerator_GoalPlayerPawns() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->bOnlyAthenaGameParticipants = true;
}


