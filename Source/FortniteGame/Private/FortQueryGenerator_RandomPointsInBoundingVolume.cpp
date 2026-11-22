#include "FortQueryGenerator_RandomPointsInBoundingVolume.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_RandomPointsInBoundingVolume::UFortQueryGenerator_RandomPointsInBoundingVolume() {
    this->GenerateIn = UEnvQueryContext_Querier::StaticClass();
}


