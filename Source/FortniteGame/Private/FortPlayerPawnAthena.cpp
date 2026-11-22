#include "FortPlayerPawnAthena.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "FortActorComponent_Affiliation.h"
#include "FortMovementComp_CharacterAthena.h"
#include "FortPawnComponent_Convert.h"
#include "FortPawnComponent_Tether.h"
#include "FortPooledSkelMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortPlayerPawnAthena::AFortPlayerPawnAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortPooledSkelMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UFortMovementComp_CharacterAthena>(TEXT("CharMoveComp"))) {
    this->bAlwaysRelevant = false;
    this->bUseControllerRotationYaw = false;
    this->bClientCheckEncroachmentOnNetUpdate = false;
    this->bRegisterWithAISight = false;
    this->bUROCanTieToLODs = false;
    this->bPostProcessNavLocation = false;
    this->VocalChords.AddDefaulted(1);
    this->bPawnLODDirty = true;
    this->TetherComponent = CreateDefaultSubobject<UFortPawnComponent_Tether>(TEXT("TetherComp"));
    this->bAllowDBNOCarry = true;
    this->ItemInteractionActor = NULL;
    this->CurrentPawnSquaredSpeed = 0.00f;
    this->CurrentPawnSquaredSpeedXY = 0.00f;
    this->OnReviveSound = NULL;
    this->ReviveFromDBNOTime = 10.00f;
    this->DBNOStartTime = 0.00f;
    this->DBNOInvulnerableTime = 2.00f;
    this->ConvertFromDBNOTime = 2.50f;
    this->DBNORevivalStacking = 0;
    this->ServerWorldTimeRevivalTime = -1.00f;
    this->bWasCrouchedBeforeDBNO = false;
    this->BecameSpecialActorTime = 0.00f;
    this->bPlaytestWithNoMouse = false;
    this->CapsuleRadiusAthena = 0.00f;
    this->CapsuleHalfHeightAthena = 0.00f;
    this->MeshHeightAdjustAthena = 0.00f;
    this->bShouldPawnInstantDie = false;
    this->bShouldPawnDBNODisplayOnKillFeed = true;
    this->bShouldPawnDeathDisplayOnKillFeed = true;
    this->bShouldPawnLeaveEliminationIndicator = true;
    this->bShouldPawnAwardPoints = true;
    this->bShouldTriggerDeathAnalytics = true;
    this->bShouldDropItemsOnDeath = true;
    this->bShouldSkipMovementFullSimulation = false;
    this->bEnableRenderCustomDepth = true;
    this->bEnableGroundInteractionEffects = true;
    this->CurrentQuickChatIcon = NULL;
    this->bADSWhileNotOnGround = false;
    this->DefaultCrouchedFootstepSound = NULL;
    this->DefaultCrouchSprintFootstepSound = NULL;
    this->KillerForSpectatorRotation = NULL;
    this->bDelaySimProxyCollisionInAircraftPhase = true;
    this->TimeToDelaySkydiveCollision = 10.00f;
    this->PositionCaptureIntervalForDistanceTraveledAccumulation = 1.50f;
    this->SkydiveAudioMovementVolumeInterpSpeed = 1.00f;
    this->SkydiveAudioForwardDotInterpSpeed = 0.50f;
    this->SkydiveAudioRightDotInterpSpeed = 1.00f;
    this->ScreenEffectHealthDamage = NULL;
    this->ScreenEffectShieldDamage = NULL;
    this->AdditiveHitReactsMontage = NULL;
    this->bIsPlayerPawnReady = false;
    this->LastFiredTime = -1.00f;
    this->PrototypeShootingModel = NULL;
    this->FallInstigator = NULL;
    this->LastFloorBeforeFalling = NULL;
    this->LastFallDistance = 0.00f;
    this->SkydiveDebugTimer = 0.00f;
    this->MeleeCombatSlowSpeedMultiplier = 0.80f;
    this->MeleeCombatSlowDuration = 0.50f;
    this->InAirAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("InAirAudioComp"));
    this->PSC_PlayerWalkLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerWalkLandFX"));
    this->PSC_PlayerRunLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerRunLandFX"));
    this->PSC_PlayerSlideLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerSlideLandFX"));
    this->PSC_HitDamage = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HitDamageFX"));
    this->SlidingAudioComp = NULL;
    this->MaxIndicatorVisibilityDistForReplays = 20000.00f;
    this->ConsumableUseAudio = NULL;
    this->InAirAudioParameterValue = 0.00f;
    this->InAirAudioFallDistanceThreshold = 256.00f;
    this->bFXPlayDustOnMovement = true;
    this->WalkDustActivateSpeed = 320.00f;
    this->WalkDustResetSpeed = 310.00f;
    this->RunParticleActivateSpeed = 480.00f;
    this->SlidingIntensitySound3P = NULL;
    this->SlidingIntensitySound1P = NULL;
    this->SlideAudioIntensity = 0.00f;
    this->LastHealthPostProcessWeight = 0.00f;
    this->HealthPostProcessStartTime = 0.00f;
    this->HealthPostProcessMuteTime = 10.00f;
    this->bIsCreativeGhostModeActivated = false;
    this->bIsCreativeModeratorModeActivated = false;
    this->SkinWeightManager = NULL;
    this->UnicornPawnSampler = NULL;
    this->DamageForceFeedback = NULL;
    this->DamageCameraShakeClass = NULL;
    this->ConvertComponent = CreateDefaultSubobject<UFortPawnComponent_Convert>(TEXT("ConvertComp"));
    this->AffiliationComponent = CreateDefaultSubobject<UFortActorComponent_Affiliation>(TEXT("AffiliationComponent"));
    this->InAirAudioComp->SetupAttachment(GetMesh());
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->PSC_HitDamage->SetupAttachment(RootComponent);
    this->PSC_PlayerRunLand->SetupAttachment(GetMesh());
    this->PSC_PlayerSlideLand->SetupAttachment(GetMesh());
    this->PSC_PlayerWalkLand->SetupAttachment(GetMesh());
}

void AFortPlayerPawnAthena::TurnOnCollisionAfterSkydiveDelay() {
}

void AFortPlayerPawnAthena::TeleportToSkyDive(float HeightAboveGround) {
}

void AFortPlayerPawnAthena::StopConsumableUseAudio() {
}

void AFortPlayerPawnAthena::StartConsumableUseAudio(USoundBase* Sound) {
}

void AFortPlayerPawnAthena::SetShouldSkipMovementFullSimulation(bool bInShouldSkipMovementFullSimulation) {
}

void AFortPlayerPawnAthena::SetShouldDropItemsOnDeath(bool bInShouldDropItemsOnDeath) {
}

void AFortPlayerPawnAthena::SetMeshHeightAdjustAthena(float HeightAdjust) {
}

void AFortPlayerPawnAthena::SetFallInstigator(AController* NewFallInstigator, FGameplayTagContainer NewFallingDamageTags) {
}

void AFortPlayerPawnAthena::SetEnableRenderCustomDepth(bool bInEnableRenderCustomDepth) {
}

void AFortPlayerPawnAthena::SetDamageCameraShakeClass(TSubclassOf<UMatineeCameraShake> NewValue) {
}

bool AFortPlayerPawnAthena::SetCharacterBodyVisibilityForPossession(bool bVisible) {
    return false;
}

void AFortPlayerPawnAthena::SetCapsuleRadiusAthena(float Radius) {
}

void AFortPlayerPawnAthena::SetCapsuleHalfHeightAthena(float HalfHeight) {
}

void AFortPlayerPawnAthena::SetBushEnabled(bool bEnableBush) {
}

void AFortPlayerPawnAthena::ServerSuicide_Implementation(bool bSuppressResurrectionChip, int32 MatchPlacement) {
}
bool AFortPlayerPawnAthena::ServerSuicide_Validate(bool bSuppressResurrectionChip, int32 MatchPlacement) {
    return true;
}

void AFortPlayerPawnAthena::ServerSetInteractingItem_Implementation(AActor* InteractingItem, bool bClearInteraction) {
}
bool AFortPlayerPawnAthena::ServerSetInteractingItem_Validate(AActor* InteractingItem, bool bClearInteraction) {
    return true;
}

void AFortPlayerPawnAthena::ServerCreativeToggleInvulnerable_Implementation() {
}
bool AFortPlayerPawnAthena::ServerCreativeToggleInvulnerable_Validate() {
    return true;
}

void AFortPlayerPawnAthena::ServerCreativeToggleGhost_Implementation(const bool bEnableOnly) {
}
bool AFortPlayerPawnAthena::ServerCreativeToggleGhost_Validate(const bool bEnableOnly) {
    return true;
}





void AFortPlayerPawnAthena::OnRep_ReplayRepAnimMontageInfo() {
}

void AFortPlayerPawnAthena::OnRep_MeshHeightAdjustAthena() {
}

void AFortPlayerPawnAthena::OnRep_GravityAttributeReplicationProxy() {
}

void AFortPlayerPawnAthena::OnRep_CapsuleRadiusAthena() {
}

void AFortPlayerPawnAthena::OnRep_CapsuleHalfHeightAthena() {
}

void AFortPlayerPawnAthena::OnRep_bIsCreativeModeratorModeActivated() {
}

void AFortPlayerPawnAthena::OnRep_bIsCreativeGhostModeActivated() {
}

void AFortPlayerPawnAthena::OnRep_bEnableRenderCustomDepth() {
}

void AFortPlayerPawnAthena::OnRep_AttributeProxy() {
}












void AFortPlayerPawnAthena::NetMulticast_SuccessfulBuildingEdit_Implementation() {
}

void AFortPlayerPawnAthena::MeleeCombatBlocked() {
}

void AFortPlayerPawnAthena::MeleeCombatActivated() {
}

bool AFortPlayerPawnAthena::LocalIsTryingToEnterVehicle() {
    return false;
}

void AFortPlayerPawnAthena::LandscapeCheck() {
}

bool AFortPlayerPawnAthena::IsPlayingMinigame() const {
    return false;
}

bool AFortPlayerPawnAthena::IsBackpackEquipped(EBackpackType BackpackType) const {
    return false;
}

float AFortPlayerPawnAthena::GetReviveFromDBNOTime() const {
    return 0.0f;
}

float AFortPlayerPawnAthena::GetDefaultReviveFromDBNOTime() {
    return 0.0f;
}

float AFortPlayerPawnAthena::GetCurrentVoiceAmplitude() {
    return 0.0f;
}

UAnimMontage* AFortPlayerPawnAthena::GetAdditiveHitReactsMontage_Implementation() {
    return NULL;
}

void AFortPlayerPawnAthena::GameplayCue_PinkOatmeal_MeatPizza_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPlayerPawnAthena::GameplayCue_Creative_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPlayerPawnAthena::GamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortPlayerPawnAthena::ForceReviveFromDBNO(AController* EventInstigator) {
}

void AFortPlayerPawnAthena::FastSharedReplication_Implementation(const FSharedRepMovement& SharedRepMovement) {
}

void AFortPlayerPawnAthena::CreativeToggleInvulnerable() {
}

void AFortPlayerPawnAthena::CreativeToggleGhost(const bool bEnableOnly) {
}

void AFortPlayerPawnAthena::ClientSetGravityJumpMultipliers_Implementation(float NewGravityVal, float NewVehicleGravityVal, float NewJumpZ, float NewJumpHorizontalAcceleration, float NewJumpHorizontalVelocity) {
}

bool AFortPlayerPawnAthena::CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const {
    return false;
}

void AFortPlayerPawnAthena::CancelMeleeCombatSlow() {
}


void AFortPlayerPawnAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemInteractionActor);
    DOREPLIFETIME(AFortPlayerPawnAthena, DBNORevivalStacking);
    DOREPLIFETIME(AFortPlayerPawnAthena, ServerWorldTimeRevivalTime);
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorID);
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorCategoryTag);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleRadiusAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleHalfHeightAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, MeshHeightAdjustAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, bEnableRenderCustomDepth);
    DOREPLIFETIME(AFortPlayerPawnAthena, AttributeReplicationProxy);
    DOREPLIFETIME(AFortPlayerPawnAthena, GravityAttributeReplicationProxy);
    DOREPLIFETIME(AFortPlayerPawnAthena, ReplayRepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawnAthena, SimulatedProxyActiveGameplayCues);
    DOREPLIFETIME(AFortPlayerPawnAthena, SimulatedProxyMinimalReplicationGameplayCues);
    DOREPLIFETIME(AFortPlayerPawnAthena, FastReplicationMinimalReplicationTags);
    DOREPLIFETIME(AFortPlayerPawnAthena, EncryptedPawnReplayData);
    DOREPLIFETIME(AFortPlayerPawnAthena, bIsCreativeGhostModeActivated);
    DOREPLIFETIME(AFortPlayerPawnAthena, bIsCreativeModeratorModeActivated);
}


