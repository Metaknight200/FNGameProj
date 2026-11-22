#include "FortQueryGenerator_Buildings.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_Buildings::UFortQueryGenerator_Buildings() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->BuildingGridVolumeCenter = NULL;
}


