#include "FortQueryGenerator_HotspotSlots.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "FortQueryItemType_PointOrSlot.h"

UFortQueryGenerator_HotspotSlots::UFortQueryGenerator_HotspotSlots() {
    this->ItemType = UFortQueryItemType_PointOrSlot::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->bUseTetherZone = false;
    this->HotspotClass = NULL;
}


