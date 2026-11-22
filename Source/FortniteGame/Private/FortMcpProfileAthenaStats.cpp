#include "FortMcpProfileAthenaStats.h"

UFortMcpProfileAthenaStats::UFortMcpProfileAthenaStats() {
    this->LifeTimeStats = NULL;
}

UAthenaSeasonStats* UFortMcpProfileAthenaStats::GetLifetimeStats() {
    return NULL;
}

TArray<UAthenaSeasonStats*> UFortMcpProfileAthenaStats::GetLifeTimeAndSeasonList() {
    return TArray<UAthenaSeasonStats*>();
}


