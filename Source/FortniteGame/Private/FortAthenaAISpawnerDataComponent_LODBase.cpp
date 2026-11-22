#include "FortAthenaAISpawnerDataComponent_LODBase.h"

UFortAthenaAISpawnerDataComponent_LODBase::UFortAthenaAISpawnerDataComponent_LODBase() {
}

FClientAILODSettings UFortAthenaAISpawnerDataComponent_LODBase::GetClientAILODSettings_Implementation() const {
    return FClientAILODSettings{};
}

UFortAthenaAILODSettingsContainer* UFortAthenaAISpawnerDataComponent_LODBase::GetAILODSettingsContainer_Implementation() const {
    return NULL;
}


