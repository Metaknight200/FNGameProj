#include "FortCharacterVehicle_Ostrich.h"
#include "Components/CapsuleComponent.h"
#include "FortMovementComp_CharacterAthena_Ostrich.h"
#include "Net/UnrealNetwork.h"

AFortCharacterVehicle_Ostrich::AFortCharacterVehicle_Ostrich(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortMovementComp_CharacterAthena_Ostrich>(TEXT("CharMoveComp"))) {
    this->bShouldSupportSurfaceSwimming = false;
    this->VocalChords.AddDefaulted(1);
    this->VTDMode = 2;
    this->bExplodeOnDetonate = true;
    this->LandingMovementLockDurationMin = 0.00f;
    this->LandingMovementLockDurationMax = 0.00f;
    this->KneelingGunnerSeatVerticalOffset = 0.00f;
    this->KneelingDriverSeatVerticalOffset = 0.00f;
    this->OstrichShieldBoostStatName = TEXT("OstrichShieldBoostActivations");
    this->PassengerCameraFixedVerticalOffset = 0.00f;
    this->PassengerCameraFixedVerticalOffsetNoDriver = 0.00f;
    this->DriverPrimaryCooldownTime = 0.00f;
    this->DriverSecondaryCooldownTime = 0.00f;
    this->DetonateDelay = 0.00f;
    this->DetonateDelaySelfDestruct = 0.00f;
    this->DetonateRange = 0.00f;
    this->DriverKickMoveLockDuration = 0.00f;
    this->KickRootMotionDelay = 0.00f;
    this->KickRootMotionDuration = 0.00f;
    this->ShieldBoostCooldown = 0.00f;
    this->ShieldRadius = 0.00f;
    this->SelfDestructInteractDuration = 1.00f;
    this->AccelFromIdle = 0.00f;
    this->AccelFromIdleDuration = 0.00f;
    this->IdleTimeThreshold = 0.00f;
    this->LockoutDurationAfterRequestSeatChange = 1.00f;
    this->MaxBeamLen = 0.00f;
    this->DriverToGunnerTransition = NULL;
    this->GunnerToDriverTransition = NULL;
    this->bChargingJump = false;
    this->bDriverLocalChargingJump = false;
    this->bChargingRockets = false;
    this->bAutomaticallyFiringShotgun = false;
    this->DetonationState = EOstrichDetonationState::None;
    this->bLocalSimulatedChargingJump = false;
    this->bDashing = false;
    this->bKickRep = false;
    this->bLoadingRockets = false;
    this->bKickActive = false;
    this->bLocalJumpButtonDown = false;
    this->bAllowEnter = true;
    this->bAcceleratingFromIdle = false;
    this->IdleTime = 0.00f;
    this->MovingTime = 0.00f;
    this->RequestSeatChangeTime = 0.00f;
    this->ChargeJumpStartTime = 0.00f;
    this->GroundDashStartTime = 0.00f;
    this->ShieldBoostStartTime = 0.00f;
    this->KickStartTime = 0.00f;
    this->SpawnedBeam = NULL;
    this->SpawnedImpact = NULL;
    this->SpawnedImpactEnemy = NULL;
    this->SpawnedSource = NULL;
    this->BlendedPassengerVerticalCamOffset = 0.00f;
    this->OverrideLandingMoveLockDuration = 0.00f;
    this->ShieldBoostResourceCost = 0;
    this->KickAnimationDuration = 2.50f;
    this->DestroyDelayAfterExplosion = 0.00f;
    this->PawnRotationRate = 0.00f;
    this->AirDashOverrideAngle = 0.00f;
    this->GunnerAimPointUpdateRate = 0.00f;
    this->GunnerAimPointTraceRange = 0.00f;
    this->GroundDashAnimationDuration = 1.00f;
    this->GunnerAimPointUpdateDelay = 0.50f;
    this->MechMissileDamageToGunnerShield = 0.00f;
    this->SimulatedProxyFixupRange = 2000.00f;
    this->bEnableTargetingLaser = true;
    this->bEnableSimulatedProxyFixup = true;
    this->DriverChargeJumpCamera = NULL;
    this->BeamTemplate = NULL;
    this->BeamHitTemplate = NULL;
    this->BeamHitEnemyTemplate = NULL;
    this->BeamSourceTemplate = NULL;
    this->PassengerCamBlendTarget = 0.00f;
    this->GunnerAimpointUpdateTimer = 0.00f;
    this->bDriverPrimaryCooldownReady = true;
    this->bDriverSecondaryCooldownReady = true;
    this->bBufferedDriverExit = false;
    this->bHoldingSelfDestruct = false;
    this->bLocalDriverRequestedExit = false;
    this->bLocalPrimaryFireButtonDown = false;
    this->bLocalSecondaryFireButtonDown = false;
    this->bEmoteAudioForceStopped = false;
    this->bAimedAtEnemy = false;
    this->bAimedAtSky = false;
    this->NativeLinearMovementAudio = NULL;
    this->NativeRotationalMovementAudio = NULL;
    this->NativeTargetingLaserAudio = NULL;
    this->FortOstrichVehicleConfigsClass = NULL;
    this->FortOstrichVehicleConfigs = NULL;
    this->PickupCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PickupCollisionCapsule"));
    this->OstrichCustomStats = NULL;
}

void AFortCharacterVehicle_Ostrich::SetTargetingLaserAudioComp(UAudioComponent* TargetingLaserAudio) {
}

void AFortCharacterVehicle_Ostrich::SetShieldActor(AActor* InShieldActor) {
}

void AFortCharacterVehicle_Ostrich::SetRotationalAudioComp(UFortVehicleAudioVoice* RotAudio) {
}

void AFortCharacterVehicle_Ostrich::SetLinearAudioComp(UFortVehicleAudioVoice* LinearAudio) {
}

void AFortCharacterVehicle_Ostrich::ServerSetJumpCharging_Implementation(bool bNewCharging) {
}
bool AFortCharacterVehicle_Ostrich::ServerSetJumpCharging_Validate(bool bNewCharging) {
    return true;
}

void AFortCharacterVehicle_Ostrich::ServerNotifyDriverInput_Implementation(bool bIsPrimaryFire) {
}
bool AFortCharacterVehicle_Ostrich::ServerNotifyDriverInput_Validate(bool bIsPrimaryFire) {
    return true;
}

void AFortCharacterVehicle_Ostrich::OnStartShotgunReload() {
}


void AFortCharacterVehicle_Ostrich::OnRep_Kick() {
}

void AFortCharacterVehicle_Ostrich::OnRep_IsDashing() {
}

void AFortCharacterVehicle_Ostrich::OnRep_Detonating() {
}

void AFortCharacterVehicle_Ostrich::OnRep_ChargeJump() {
}




void AFortCharacterVehicle_Ostrich::OnPickupCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AFortCharacterVehicle_Ostrich::OnKickStomp() {
}

void AFortCharacterVehicle_Ostrich::OnKickFinished() {
}





void AFortCharacterVehicle_Ostrich::OnDashStart() {
}

void AFortCharacterVehicle_Ostrich::OnDashFinished() {
}



void AFortCharacterVehicle_Ostrich::MulticastDriverInput_Implementation(bool bIsPrimaryFire) {
}

bool AFortCharacterVehicle_Ostrich::IsShotgunReloading() const {
    return false;
}

bool AFortCharacterVehicle_Ostrich::IsRocketOnCooldown() const {
    return false;
}


bool AFortCharacterVehicle_Ostrich::IsFiringRockets() const {
    return false;
}


float AFortCharacterVehicle_Ostrich::GetJumpChargeCursor() const {
    return 0.0f;
}

bool AFortCharacterVehicle_Ostrich::GetIsDashing() const {
    return false;
}

bool AFortCharacterVehicle_Ostrich::GetIsChargingJump() const {
    return false;
}

AFortWeaponRanged_Ostrich* AFortCharacterVehicle_Ostrich::GetGunnerWeapon() {
    return NULL;
}

float AFortCharacterVehicle_Ostrich::GetGunnerAimAngleDelta() const {
    return 0.0f;
}


float AFortCharacterVehicle_Ostrich::GetDriverTurnAngleDelta() const {
    return 0.0f;
}

bool AFortCharacterVehicle_Ostrich::GetDashAnimationActive() const {
    return false;
}


FVector AFortCharacterVehicle_Ostrich::GetAimPoint() const {
    return FVector{};
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Reload() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_LoadSingleRocket(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Load() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Stop() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Start() {
}

void AFortCharacterVehicle_Ostrich::GameplayCue_Athena_Ostrich_Fire_Single(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortCharacterVehicle_Ostrich::ForceDetonate(bool bExplode) {
}

void AFortCharacterVehicle_Ostrich::AirDash(const FVector& InDirection, float Speed, float MinVerticalSpeed) {
}

void AFortCharacterVehicle_Ostrich::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, ShieldActor);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bChargingJump);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bChargingRockets);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bAutomaticallyFiringShotgun);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, DetonationState);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bDashing);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, bKickRep);
    DOREPLIFETIME(AFortCharacterVehicle_Ostrich, CachedWeaponState);
}


