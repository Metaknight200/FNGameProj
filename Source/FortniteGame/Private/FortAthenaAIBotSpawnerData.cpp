#include "FortAthenaAIBotSpawnerData.h"

UFortAthenaAIBotSpawnerData::UFortAthenaAIBotSpawnerData() {
    this->GameplayAbilityComponent = NULL;
    this->SkillSetComponent = NULL;
    this->ConstructionComponent = NULL;
    this->VehicleComponent = NULL;
}

UFortAthenaAISpawnerDataComponent_VehicleBase* UFortAthenaAIBotSpawnerData::GetVehicleComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAIBotSpawnerData::GetSkillSetComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAIBotSpawnerData::GetGameplayAbilityComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAIBotSpawnerData::GetConstructionComponent() const {
    return NULL;
}


