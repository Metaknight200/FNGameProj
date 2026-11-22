#include "FortAthenaAISpawnerData.h"
#include "Templates/SubclassOf.h"

UFortAthenaAISpawnerData::UFortAthenaAISpawnerData() {
    this->InventoryComponent = NULL;
    this->SpawnParamsComponent = NULL;
    this->BehaviorComponent = NULL;
    this->AffiliationComponent = NULL;
    this->LODComponent = NULL;
    this->DebugComponent = NULL;
    this->AnalyticComponent = NULL;
    this->GameplayComponent = NULL;
    this->ConversationComponent = NULL;
    this->VoiceComponent = NULL;
    this->CosmeticComponent = NULL;
    this->ChanceEncounterComponent = NULL;
    this->OptimizationComponent = NULL;
}

UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerData::GetVoiceComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerData::GetSpawnParamsComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerData::GetOptimizationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAISpawnerData::GetInventoryComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerData::GetGameplayComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerData::GetDebugComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerData::GetCosmeticComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerData::GetConversationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerData::GetChanceEncounterComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerData::GetBehaviorComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerData::GetAnalyticComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerData::GetAILODComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerData::GetAffiliationComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentListFromClass(const TSubclassOf<UFortAthenaAISpawnerData> AISpawnerDataClass, UObject* OuterObject) {
    return NULL;
}

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentList(UObject* OuterObject) const {
    return NULL;
}


