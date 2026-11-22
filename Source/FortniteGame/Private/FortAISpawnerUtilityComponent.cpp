#include "FortAISpawnerUtilityComponent.h"

UFortAISpawnerUtilityComponent::UFortAISpawnerUtilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnvironmentQuery = NULL;
    this->QueryRadius = 0.00f;
    this->QueryMinDistance = 0.00f;
}

void UFortAISpawnerUtilityComponent::StartEnvironmentQuery() {
}

void UFortAISpawnerUtilityComponent::SetQueryRadius(float Radius) {
}

void UFortAISpawnerUtilityComponent::SetEQSQuery(TSoftObjectPtr<UEnvQuery> SelectedEQSQuery) {
}

void UFortAISpawnerUtilityComponent::HandlePawnSpawned() {
}

void UFortAISpawnerUtilityComponent::HandlePawnDied() {
}

void UFortAISpawnerUtilityComponent::ClearSpawnCount() {
}

bool UFortAISpawnerUtilityComponent::CanSpawn() {
    return false;
}


