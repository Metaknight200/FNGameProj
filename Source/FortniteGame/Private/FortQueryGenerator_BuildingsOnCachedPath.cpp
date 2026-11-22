#include "FortQueryGenerator_BuildingsOnCachedPath.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_BuildingsOnCachedPath::UFortQueryGenerator_BuildingsOnCachedPath() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->CachedPathSource = NULL;
}


