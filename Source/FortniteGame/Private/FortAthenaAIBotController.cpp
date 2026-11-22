#include "FortAthenaAIBotController.h"
#include "AthenaMarkerComponent.h"
#include "FortAthenaAIBotPathFollowingComponent.h"
#include "FortControllerAIBotComponent_Telemetry.h"
#include "Net/UnrealNetwork.h"

AFortAthenaAIBotController::AFortAthenaAIBotController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortAthenaAIBotPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bStopAILogicOnUnposses = false;
    this->bWantsPlayerState = true;
    this->bIsAnAthenaGameParticipant = true;
    this->bNeutralBecomeHostileOnBump = false;
    this->ReachLocationValidationMode = EReachLocationValidationMode::Storm;
    this->BehaviorTree = NULL;
    this->CacheInventoryDigestedSkillSet = NULL;
    this->PlayerBotPawn = NULL;
    this->CachedAIServicePlayerBots = NULL;
    this->CachedGameMode = NULL;
    this->CachedBotMutator = NULL;
    this->CachedAIRuntimeParametersComponent = NULL;
    this->CachedLeashRuntimeParameters = NULL;
    this->CachedPatrollingComponent = NULL;
    this->CurrentAlertLevel = EAlertLevel::Unaware;
    this->Inventory = NULL;
    this->Skill = 1100.00f;
    this->bAllowUnsupportedItemsInDefaultInventory = false;
    this->StartupInventory = NULL;
    this->NameSettingsBC = NULL;
    this->CachePerceptionDigestedSkillSet = NULL;
    this->CacheHarvestDigestedSkillSet = NULL;
    this->CacheMovementSkillSet = NULL;
    this->CacheLootingSkillSet = NULL;
    this->CacheAttackingSkillSet = NULL;
    this->CachePlayStyleSkillSet = NULL;
    this->CacheUnstuckSkillSet = NULL;
    this->CacheRangeAttackSkillSet = NULL;
    this->InteractContextInfo = NULL;
    this->CacheAimingDigestedSkillSet = NULL;
    this->bCanBeDestroyedOnDeath = false;
    this->CachedWorldItem = NULL;
    this->CacheWeaponUsedToCalculateType = NULL;
    this->bCachedIsUsingArcedProjectileWeapon = false;
    this->CachedProjectileGravityScale = 0.00f;
    this->CachedWeaponUsedToCalculateProjectileData = NULL;
    this->StatManager = NULL;
    this->CacheBotPawnClass = NULL;
    this->CurrentLootActor = NULL;
    this->MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    this->BotIDSuffix = TEXT("DEFAULT");
    this->PolicyDataSpawner = NULL;
    this->FortControllerComponent_Telemetry = CreateDefaultSubobject<UFortControllerAIBotComponent_Telemetry>(TEXT("TelemetryComp"));
    this->bForceUsingBuildingTool = false;
    this->bForceHolsterWeapon = false;
    this->PendingEquipWeapon = NULL;
    this->PlayerToSpectateOnDeath = NULL;
    this->AISenseConfig_SightOverride = NULL;
    this->BotOwner = NULL;
    this->BotControllerUID = 0;
    this->ReviveTarget = NULL;
    this->BotData = NULL;
    this->RevivePlayerPawnToken = NULL;
    this->LeashActorToFollow = NULL;
    this->CachedAffiliationManager = NULL;
    this->CachedAffiliationComponent = NULL;
    this->bIsAffectedByMutatorHealthAndShieldModifiers = true;
    this->bHasChangedPawnCullDistanceToAggroMode = false;
    this->RespawnRuntimeParameters = NULL;
    this->CurrentBlockingDoor = NULL;
    this->FinisherPawn = NULL;
    this->PreviousStasisMode = EFortPawnStasisMode::None;
    this->bPostponeGiveWeaponCheat = false;
    this->BTAssetToRunOnPawnAISpawned = NULL;
}

void AFortAthenaAIBotController::UpdateLeashActorToFollowLocation() {
}

void AFortAthenaAIBotController::ThankBusDriver() {
}

void AFortAthenaAIBotController::SwitchTeam(uint8 TeamIndex) {
}

void AFortAthenaAIBotController::StopEmote() {
}

void AFortAthenaAIBotController::SetRadialLeashOuterRadius(const float OuterRadius) {
}

void AFortAthenaAIBotController::SetRadialLeashInnerRadius(const float InnerRadius) {
}

void AFortAthenaAIBotController::SetPatrollingEnable(const bool bEnable) {
}

void AFortAthenaAIBotController::SetLeashActorToFollow(const AActor* ActorToFollow, const float LeashLocationUpdateRate, const FVector LocalOffset) {
}

void AFortAthenaAIBotController::SetBotOwner(AActor* InBotOwner) {
}

void AFortAthenaAIBotController::ReleaseBuildTool() {
}

void AFortAthenaAIBotController::QueueStim(AActor* SourceActor, const FVector& SourceLocation, const FVector& SourceDirection, const EStimType NewStimType, const float StimStrength, const FName StimTag) {
}

void AFortAthenaAIBotController::PlayEmote(const FPrimaryAssetId& EmotePrimaryAssetId) {
}

void AFortAthenaAIBotController::OverrideSkill(const float NewSkill) {
}

void AFortAthenaAIBotController::OverrideAggressivenessPlayStyle(bool bInIsAggressive) {
}

void AFortAthenaAIBotController::OnTargetPawnDestroyed() {
}

void AFortAthenaAIBotController::OnTargetPawnDead(AFortPawn* FortPawn) {
}

void AFortAthenaAIBotController::OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController) {
}

void AFortAthenaAIBotController::OnTargetActorDestroyed(AActor* DestroyedActor) {
}

void AFortAthenaAIBotController::OnServerMarkerAdded(FFortWorldMarkerData MarkerData) {
}

void AFortAthenaAIBotController::OnSafeZoneUpdated() {
}

void AFortAthenaAIBotController::OnSafezoneStateChanged(const EFortSafeZoneState NewState) {
}

void AFortAthenaAIBotController::OnPossessedPawnReceiveDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnPossesedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim) {
}

void AFortAthenaAIBotController::OnPawnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon) {
}

void AFortAthenaAIBotController::OnPawnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaAIBotController::OnMovementModeChange(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AFortAthenaAIBotController::OnLaunched(const FVector LaunchVelocity, const bool bXYOverride, const bool bZOverride) {
}

void AFortAthenaAIBotController::OnKnockbacked(const FGameplayTag KnockbackTypeTag) {
}

void AFortAthenaAIBotController::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaAIBotController::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortAthenaAIBotController::OnCurrentHarvestableDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


void AFortAthenaAIBotController::OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO) {
}

void AFortAthenaAIBotController::NotifyPickupsSpawnedOnDeath(const TArray<AFortPickup*>& SpawnedPickups) {
}

bool AFortAthenaAIBotController::IsAnAthenaGameParticipant() const {
    return false;
}

void AFortAthenaAIBotController::HandleCollisionComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UAthenaMarkerComponent* AFortAthenaAIBotController::GetMarkerComponent() const {
    return MarkerComponent;
}

AActor* AFortAthenaAIBotController::GetBotOwner() const {
    return BotOwner;
}

void AFortAthenaAIBotController::ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant) {
}


void AFortAthenaAIBotController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaAIBotController, Inventory);
}


