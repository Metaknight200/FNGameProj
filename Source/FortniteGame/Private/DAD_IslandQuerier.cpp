#include "DAD_IslandQuerier.h"

UDAD_IslandQuerier::UDAD_IslandQuerier() {
    this->WellKnownIslands = NULL;
    this->bResolveMetrics = true;
    this->UpdateMetricsInterval = 60.00f;
}

FString UDAD_IslandQuerier::GetIslandCodeByWellKnownName(const FString& WellKnownIslandName) const {
    return TEXT("");
}


