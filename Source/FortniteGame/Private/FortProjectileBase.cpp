#include "FortProjectileBase.h"
#include "FortProjectileMovementComponent.h"
#include "FortProjectileRootComponent.h"
#include "FortWaterInteractionComponent.h"
#include "Net/UnrealNetwork.h"

AFortProjectileBase::AFortProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UFortProjectileRootComponent>(TEXT("CollisionCapsule0"));
    this->bAddHitResultToTouchApplication = true;
    this->CollisionComponent = (UPrimitiveComponent*)RootComponent;
    this->ReplicatedMaxSpeed = 0.00f;
    this->GravityScale = 1.00f;
    this->ChargePercent = 0.00f;
    this->MomentumTransfer = 0.00f;
    this->bAddOwnerVelocity = true;
    this->bSpawnPointCanBeUsedByOtherPlayers = false;
    this->PlayerSpawnOffset = 0.00f;
    this->bRegisterInPerceptionSystem = false;
    this->bCanBePickedUpWhenStopped = false;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UFortProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterComponentName"));
    this->bDummyProjectile = false;
    this->bStopSimulatingOnHit = true;
    this->TouchWaterBehavior = EProjectileWaterHitBehavior::StopIfStopSimulatingOnHit;
    this->bDisableCollisionOnStop = false;
    this->bStoppedSimulatingDueToHit = false;
    this->bReplicateStopSimulationLocation = false;
    this->bReplicateStopSimulationLocationOptimized = false;
    this->bClientInterpMovement = true;
    this->bClientInterpRotation = false;
    this->bUseClientsidePrediction = false;
    this->bIsPredictedProjectile = false;
    this->bAutoSelectAttachedForInterp = true;
    this->bFiredWhileTargeting = false;
    this->ResumeSimulationCount = 0;
    this->SyncId = 0;
    this->WeaponResponseType = EFortBaseWeaponDamage::Environmental;
    this->CachedPassByPawn = NULL;
    this->SkyTubeForceMultiplier = 1.00f;
    this->CurrentSkyTube = NULL;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bResetOverlapRestrictionsOnBounce = false;
    this->MaxLifespanOnStop = 0.00f;
    this->LifespanOnHitDoNotExplode = 5.00f;
    this->BulletWhipTrackerComponent = NULL;
}

void AFortProjectileBase::SetGravityScale(float InitialGravityScale) {
}

void AFortProjectileBase::ResumeSimulation() {
}


void AFortProjectileBase::OnStopCallback(const FHitResult& Hit) {
}




void AFortProjectileBase::OnRep_SimulationStoppingHit() {
}

void AFortProjectileBase::OnRep_ResumeSimulationCount() {
}

void AFortProjectileBase::OnRep_ReplicatedMaxSpeed() {
}

void AFortProjectileBase::OnRep_GravityScale() {
}

void AFortProjectileBase::OnRep_CurrentSkyTube() {
}


void AFortProjectileBase::OnBounceCallback(const FHitResult& Hit, const FVector& ImpactVelocity) {
}


AFortSkyTube* AFortProjectileBase::GetSkyTube() const {
    return NULL;
}

AFortWeapon* AFortProjectileBase::GetOwnerWeapon() {
    return NULL;
}

AFortPlayerController* AFortProjectileBase::GetOwnerPlayerController() {
    return NULL;
}

float AFortProjectileBase::GetGravityScale() const {
    return GravityScale;
}

float AFortProjectileBase::GetDefaultSpeed(float InChargePercent) const {
    return 0.0f;
}

float AFortProjectileBase::GetDefaultGravityScale() const {
    return 0.0f;
}

void AFortProjectileBase::ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube) {
}

void AFortProjectileBase::EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube) {
}

void AFortProjectileBase::AddTagToDefaultTags(FGameplayTag TagToAddToProjectileDefaultTags) {
}

void AFortProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortProjectileBase, ReplicatedMaxSpeed);
    DOREPLIFETIME(AFortProjectileBase, GravityScale);
    DOREPLIFETIME(AFortProjectileBase, ChargePercent);
    DOREPLIFETIME(AFortProjectileBase, SimulationStoppingHit);
    DOREPLIFETIME(AFortProjectileBase, ResumeSimulationCount);
    DOREPLIFETIME(AFortProjectileBase, SyncId);
    DOREPLIFETIME(AFortProjectileBase, CurrentSkyTube);
}


