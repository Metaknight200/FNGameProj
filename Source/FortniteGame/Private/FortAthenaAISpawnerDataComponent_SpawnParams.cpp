#include "FortAthenaAISpawnerDataComponent_SpawnParams.h"

UFortAthenaAISpawnerDataComponent_SpawnParams::UFortAthenaAISpawnerDataComponent_SpawnParams() {
    this->PawnClass = NULL;
    this->bSpawnInAir = false;
    this->bSetSkyDivingFromBus = false;
    this->InAirSpawnTraceStartHeight = 20000.00f;
    this->InAirSpawnTraceEndHeight = 15000.00f;
    this->InAirSpawnTraceSphereRadius = 2500.00f;
    this->SpawnTracePadding = 300.00f;
    this->bCheckForOverlaps = false;
    this->bAddPOILocationTagsOnSpawn = false;
}


