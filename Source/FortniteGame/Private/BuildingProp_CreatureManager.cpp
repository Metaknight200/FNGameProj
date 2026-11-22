#include "BuildingProp_CreatureManager.h"
#include "FortCreativeCreatureManagerInfoComponent.h"
#include "FortGameplayTriggerMessageComponent.h"

ABuildingProp_CreatureManager::ABuildingProp_CreatureManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedOverrideAggroDistance = -1.00f;
    this->SelectedOverrideHealth = -1;
    this->SelectedOverrideScoreValue = -1;
    this->SelectedOverrideScoreDistribution = EScoreDistributionType::Default;
    this->SelectedOverrideDamage = -1.00f;
    this->SelectedEnvironmentalDamageOverride = -1.00f;
    this->SelectedMovementSpeedMultiplier = -1.00f;
    this->DamageOverrideEffect = NULL;
    this->EnvironmentalDamageOverrideEffect = NULL;
    this->MovementSpeedOverrideEffect = NULL;
    this->CreatureInfoComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerInfoComponent>(TEXT("CreatureManagerInfoComponent"));
    this->CreatureAIDiedTriggerComponent = CreateDefaultSubobject<UFortGameplayTriggerMessageComponent>(TEXT("CreatureAIDiedTriggerComponent"));
}



void ABuildingProp_CreatureManager::MinigameStateChange_Implementation(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void ABuildingProp_CreatureManager::LoadSkeletalMeshDisplayOption() {
}

void ABuildingProp_CreatureManager::CreatureManagerComponentAIHasDied(AController* InstigatingController, AActor* FortAIPawn) {
}

void ABuildingProp_CreatureManager::AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh) {
}


