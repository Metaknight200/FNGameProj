#include "FortPlayerSettingsComponentBase.h"
#include "Net/UnrealNetwork.h"

UFortPlayerSettingsComponentBase::UFortPlayerSettingsComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHealth = 0.00f;
    this->StartingHealth = 0.00f;
    this->MaxShield = 0.00f;
    this->StartingShield = 0.00f;
    this->DBNOSetting = EDBNOMutatorType::Default;
    this->RespawnHeight = 0.00f;
    this->RespawnTime = 0.00f;
    this->SpawnLocationSetting = EFortMinigamePlayerSpawnLocationSetting::SpawnPads;
    this->SpawnImmunityTime = 0.00f;
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    this->DropAllResourcesOverride = EAthenaLootDropOverride::NoOverride;
    this->DropAllGameResourcesOverride = EAthenaLootDropOverride::NoOverride;
    this->HealthSiphonValue = 0;
    this->WoodSiphonValue = 0;
    this->StoneSiphonValue = 0;
    this->MetalSiphonValue = 0;
    this->GoldSiphonValue = 0;
    this->DamageToDeal = 0.00f;
    this->bRequiresNonZeroDamage = true;
    this->TargetQueryIndex = -1;
    this->WeaponQueryIndex = -1;
    this->FallDamageMultiplier = 0.00f;
    this->GravityOverride = 0;
    this->PlayerLives = 0;
    this->TeamToMoveToWhenOutOfSpawns = 0;
    this->EliminationsToScoreMultiplier = 0.00f;
    this->AssistsToScoreMultiplier = 0.00f;
    this->HarvestRateMutliplier = 0.00f;
    this->ResourceRateOverrideIndex = 0;
    this->BuildingMode = EBuildingMode::All;
    this->bAimAssistAllowed = false;
    this->bIsPlayerTriggeredRespawnAllowed = true;
    this->OnlyAllowRespawningIfPlayerStartPadsFound = 0;
    this->bInstantReload = false;
    this->bInfiniteAmmo = false;
    this->bInfiniteResources = false;
    this->bAllowItemDrop = false;
    this->bAllowItemPickup = false;
    this->MaxItemSlots = 0.00f;
    this->bWoodResourceWidgetVisible = true;
    this->bStoneResourceWidgetVisible = true;
    this->bMetalResourceWidgetVisible = true;
    this->bGoldCurrencyResourceWidgetVisible = false;
    this->bApplyJumpPenalty = false;
    this->bGliderRedeploy = false;
    this->bFlyEnabled = false;
    this->bAllowFlightSprint = false;
    this->FlySpeedModifierIndex = 1;
    this->bAllowFriendlyFire = false;
    this->bVehiclesDamageObjects = false;
    this->bVehiclesDamageVehicles = false;
    this->MaximumResources = 0;
    this->NameplateDisplayMode = EIndicatorDisplayMode::Default;
    this->PlayerHealthIndicatorDisplayMode = EPlayerIndicatorDisplayMode::DontOverride;
    this->CreativeBossHealthDisplayMode = ECreativeBossDisplayMode::DontOverride;
}

void UFortPlayerSettingsComponentBase::ResolvePendingRepOverrides() {
}

void UFortPlayerSettingsComponentBase::OnRep_PlayerHealthIndicatorDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_NameplateDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_EnabledSettings() {
}

void UFortPlayerSettingsComponentBase::OnRep_CreativeBossHealthDisplayMode() {
}

void UFortPlayerSettingsComponentBase::OnRep_bWoodResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bStoneResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bMetalResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_bGoldCurrencyResourceWidgetVisible() {
}

void UFortPlayerSettingsComponentBase::OnRep_AbilitySetOptionData() {
}

bool UFortPlayerSettingsComponentBase::IsSettingEnabled(const FName& PropertyName) const {
    return false;
}

FGameplayTagContainer UFortPlayerSettingsComponentBase::GetHUDVisibilityTags_Implementation() const {
    return FGameplayTagContainer{};
}

void UFortPlayerSettingsComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, BuildingMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAimAssistAllowed);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bIsPlayerTriggeredRespawnAllowed);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, OnlyAllowRespawningIfPlayerStartPadsFound);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInstantReload);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInfiniteAmmo);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bInfiniteResources);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowItemDrop);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowItemPickup);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, MaxItemSlots);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bWoodResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bStoneResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bMetalResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bGoldCurrencyResourceWidgetVisible);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bApplyJumpPenalty);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bGliderRedeploy);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bFlyEnabled);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowFlightSprint);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, FlySpeedModifierIndex);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bAllowFriendlyFire);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bVehiclesDamageObjects);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, bVehiclesDamageVehicles);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, MaximumResources);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, NameplateDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, PlayerHealthIndicatorDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, CreativeBossHealthDisplayMode);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, AbilitySetOptionData);
    DOREPLIFETIME(UFortPlayerSettingsComponentBase, EnabledSettings);
}


