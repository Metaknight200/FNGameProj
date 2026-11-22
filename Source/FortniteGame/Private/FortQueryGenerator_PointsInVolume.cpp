#include "FortQueryGenerator_PointsInVolume.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UFortQueryGenerator_PointsInVolume::UFortQueryGenerator_PointsInVolume() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->NavMeshToUse = EFortNamedNavmesh::Husk;
    this->GenerateIn = UEnvQueryContext_Querier::StaticClass();
}


