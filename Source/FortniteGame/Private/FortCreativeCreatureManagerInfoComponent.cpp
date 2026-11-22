#include "FortCreativeCreatureManagerInfoComponent.h"
#include "Templates/SubclassOf.h"

UFortCreativeCreatureManagerInfoComponent::UFortCreativeCreatureManagerInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHealth = -1;
    this->HearingAggroRange = -1.00f;
    this->ScorePoints = -1;
    this->DamageCaused = -1.00f;
    this->EnvironmentalDamageOverride = -1.00f;
    this->MovementSpeedMultiplier = 0.00f;
    this->CreatureManagerComponent = NULL;
    this->DamageOverrideEffect = NULL;
    this->EnvironmentalDamageOverrideEffect = NULL;
    this->MovementSpeedOverrideEffect = NULL;
    this->ScoreDistribution = EScoreDistributionType::Default;
}

void UFortCreativeCreatureManagerInfoComponent::SpawnedAIPawnHasDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortCreativeCreatureManagerInfoComponent::SetScorePoints(int32 InScorePoints) {
}

void UFortCreativeCreatureManagerInfoComponent::SetScoreDistribution(const EScoreDistributionType InScoreDistribution) {
}

void UFortCreativeCreatureManagerInfoComponent::SetOverrideDamage(float InOverrideDamage) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementOverrideTag(FGameplayTag Tag) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealth(int32 InMaxHealth) {
}

void UFortCreativeCreatureManagerInfoComponent::SetHearingAggroRange(float InHearingAggroRange) {
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverride(float InOverrideDamage) {
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideTag(FGameplayTag Tag) {
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureManagerComponent(UFortCreativeCreatureManagerComponent* InCreatureManagerComponent) {
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureBlueprintClass(TSoftClassPtr<AFortAIPawn> InCreatureBlueprintClass) {
}

void UFortCreativeCreatureManagerInfoComponent::ResetScorePoints() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetScoreDistribution() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetOverrideDamage() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetMovementSpeedMultiplier() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetMaxHealth() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetHearingAggroRange() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetEnvironmentalDamageOverride() {
}

int32 UFortCreativeCreatureManagerInfoComponent::GetScorePoints() const {
    return ScorePoints;
}

EScoreDistributionType UFortCreativeCreatureManagerInfoComponent::GetScoreDistribution() const {
    return EScoreDistributionType::Default;
}

float UFortCreativeCreatureManagerInfoComponent::GetOverrideDamage() const {
    return 0.0f;
}

float UFortCreativeCreatureManagerInfoComponent::GetMovementSpeedMultiplier() const {
    return MovementSpeedMultiplier;
}

int32 UFortCreativeCreatureManagerInfoComponent::GetMaxHealth() const {
    return MaxHealth;
}

float UFortCreativeCreatureManagerInfoComponent::GetHearingAggroRange() const {
    return HearingAggroRange;
}

float UFortCreativeCreatureManagerInfoComponent::GetEnvironmentalDamageOverride() const {
    return EnvironmentalDamageOverride;
}

UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerInfoComponent::GetCreatureManagerComponent() {
    return CreatureManagerComponent;
}

TSoftClassPtr<AFortAIPawn> UFortCreativeCreatureManagerInfoComponent::GetCreatureBlueprintClass() const {
    return NULL;
}


