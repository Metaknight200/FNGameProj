#include "FortQueryGenerator_TerrainDonut.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UFortQueryGenerator_TerrainDonut::UFortQueryGenerator_TerrainDonut() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bFilterAllowTerrain = true;
    this->bFilterAllowBuildings = false;
}


