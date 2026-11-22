#include "FortQueryGenerator_MutatorBaseQueryResults.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UFortQueryGenerator_MutatorBaseQueryResults::UFortQueryGenerator_MutatorBaseQueryResults() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
}


