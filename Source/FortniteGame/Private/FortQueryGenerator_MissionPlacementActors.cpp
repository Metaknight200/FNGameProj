#include "FortQueryGenerator_MissionPlacementActors.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UFortQueryGenerator_MissionPlacementActors::UFortQueryGenerator_MissionPlacementActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


