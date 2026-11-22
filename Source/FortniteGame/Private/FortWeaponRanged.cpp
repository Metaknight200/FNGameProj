#include "FortWeaponRanged.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortWeaponRanged::AFortWeaponRanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTargeting = true;
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::Pistol;
    this->TracerTemplate = NULL;
    this->bAllowAutomaticWeaponCatchup = true;
    this->CurrentNumBullets = 0;
    this->CurrentDamageStart = EFortAbilityTargetingSource::Camera;
    this->bShouldDisplayAmmoCounter = true;
    this->bShouldDisplayAmmoCounterDuringSecondaryFire = false;
    this->bShouldHideReserveAmmo = false;
    this->bShouldAimFromMuzzleAtCloseRange = false;
    this->bAlwaysAimFromMuzzle = false;
    this->bMaintainAimLocationDuringTargeting = false;
    this->bUseScopeTargeting = false;
    this->bUseFirstPersonTargeting = false;
    this->bPersistentFireFX = false;
    this->bUseBeamParticles = false;
    this->bActivateRangeAbilityPerBurstShot = false;
    this->bUseImpactFXForProjectiles = false;
    this->bUseImpactFXForProjectileOverlaps = false;
    this->bUseImpactDecals = true;
    this->bUsePersistentBeam = false;
    this->bIsMuzzleTraceNearWall = false;
    this->MuzzleTraceNearWallThreshold = 80.00f;
    this->ScopeImpactEffectDistanceOffset = 1536.00f;
    this->MuzzlePSC = NULL;
    this->ShellPSC = NULL;
    this->BeamParticleSystem = NULL;
    this->BeamSourceSocketName = TEXT("Muzzle");
    this->FortSpawnPropOverride = NULL;
    this->FortSpawnPropAnimOverride = NULL;
    this->DecalLifespanMin = 2.30f;
    this->DecalLifespanMax = 3.20f;
    this->DecalMaterial = NULL;
    this->DecalTexture = NULL;
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->ShellReloadCounter = 0;
    this->LastTargetingRotAdjustmentWeight = 1.00f;
    this->ScopePostProcessEnabled = false;
    this->ScopePostProcessBlendWeight = 0.00f;
    this->BeamNiagaraSystemInstance = NULL;
    this->bUseAthenaRecoil = false;
    this->bUseAthenaPerfectADSAim = false;
    this->bFirstShotAccuracyCheckVehicleMovement = false;
    this->FirstShotAccuracyMinWaitTime = 0.50f;
    this->FireAnimation = NULL;
    this->FireDownsightsAnimation = NULL;
    this->FireFromCrouchWalkAnimation = NULL;
    this->CockingAnimation = NULL;
    this->WeaponFireMontage = NULL;
    this->WeaponFireDownsightsMontage = NULL;
    this->WeaponFireFromCrouchWalkMontage = NULL;
    this->WeaponCockingMontage = NULL;
    this->BeamPSC = NULL;
    this->CrouchWalkSpeedThreshold = 0.00f;
    this->bEnableRecoilDelay = true;
    this->OverheatState = EFortWeaponOverheatState::None;
    this->OverheatedAnimation = NULL;
    this->WeaponOverheatedAnimation = NULL;
    this->bCooldownWhileOverheated = true;
    this->OverheatValue = 0.00f;
    this->TimeHeatWasLastAdded = 0.00f;
    this->TimeOverheatedBegan = 0.00f;
    this->bCacheAimPointOnFire = false;
}

bool AFortWeaponRanged::UseScopeTargeting() const {
    return false;
}

bool AFortWeaponRanged::UseFirstPersonTargeting() const {
    return false;
}

void AFortWeaponRanged::TempHack_PlayOverheatedAnimation() {
}

bool AFortWeaponRanged::ShouldSpawnBulletShellFX() {
    return false;
}

bool AFortWeaponRanged::ShouldPlayShellFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldPlayReloadFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldPlayPersistentFireFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldDisplayAmmoCounterDuringSecondaryFire() const {
    return false;
}

bool AFortWeaponRanged::ShouldDisplayAmmoCounter() const {
    return false;
}

void AFortWeaponRanged::SetShellReloadCounter(int32 InputShellReloadCounter) {
}

void AFortWeaponRanged::SetHomingTarget(AFortPawn* PlayerPawn) {
}

void AFortWeaponRanged::SetDecalColorStart(FLinearColor InputDecalColorStart) {
}

void AFortWeaponRanged::SetDecalColorEnd(FLinearColor InputDecalColorEnd) {
}

UParticleSystem* AFortWeaponRanged::SetBeamParticleSystem(UParticleSystem* InputBeamParticleSystem) {
    return NULL;
}

UNiagaraSystem* AFortWeaponRanged::SetBeamNiagaraSystem(UNiagaraSystem* InputBeamNiagaraSystem) {
    return NULL;
}

void AFortWeaponRanged::ServerSetMuzzleTraceNearWall_Implementation(bool bIsNearWall) {
}
bool AFortWeaponRanged::ServerSetMuzzleTraceNearWall_Validate(bool bIsNearWall) {
    return true;
}

void AFortWeaponRanged::ReleaseShellsFXNative() {
}





void AFortWeaponRanged::OnRep_OverheatState(EFortWeaponOverheatState PreviousOverheatState) {
}



bool AFortWeaponRanged::IsUsingScopeOrFirstPersonCamera() const {
    return false;
}

bool AFortWeaponRanged::IsUsingScope() const {
    return false;
}

bool AFortWeaponRanged::IsUsingFirstPersonCamera() const {
    return false;
}

bool AFortWeaponRanged::IsOverheated() const {
    return false;
}

bool AFortWeaponRanged::IsCachedIsProjectileWeapon_Implementation() const {
    return false;
}

void AFortWeaponRanged::InitializeBeamFX(UFXSystemComponent* InBeamPSC) {
}

bool AFortWeaponRanged::GetUseBeamParticles() const {
    return false;
}

void AFortWeaponRanged::GetUniqueMuzzleSocketNames(TArray<FName>& Names) const {
}

TSubclassOf<AFortTracerBase> AFortWeaponRanged::GetTracerTemplate() const {
    return TracerTemplate;
}

int32 AFortWeaponRanged::GetShellReloadCounter() const {
    return ShellReloadCounter;
}

TArray<FWeightedBlendable> AFortWeaponRanged::GetScopePostProcessMaterial() const {
    return TArray<FWeightedBlendable>();
}


EFortWeaponOverheatState AFortWeaponRanged::GetOverheatState() const {
    return EFortWeaponOverheatState::None;
}

float AFortWeaponRanged::GetOverheatingMaxValue() const {
    return 0.0f;
}

float AFortWeaponRanged::GetCurrentOverheatValue() const {
    return 0.0f;
}

UParticleSystemComponent* AFortWeaponRanged::GetBeamPSC() const {
    return NULL;
}

UParticleSystem* AFortWeaponRanged::GetBeamParticleSystem() const {
    return BeamParticleSystem;
}

UNiagaraSystem* AFortWeaponRanged::GetBeamNiagaraSystem() const {
    return NULL;
}

UNiagaraComponent* AFortWeaponRanged::GetBeamNiagaraComponent() const {
    return NULL;
}

float AFortWeaponRanged::GetADSTransitionOutTime() {
    return 0.0f;
}

float AFortWeaponRanged::GetADSTransitionInTime() {
    return 0.0f;
}


void AFortWeaponRanged::EnableCornersReticle(bool bNewEnabled) {
}

void AFortWeaponRanged::EnableAltOuterReticle(bool bNewEnabled) {
}

void AFortWeaponRanged::EnableAltCenterReticle(bool bNewEnabled) {
}

bool AFortWeaponRanged::DoesWeaponOverheat() const {
    return false;
}

void AFortWeaponRanged::DeactivateShellsFXNative(const FName SpawnProbabilityName) {
}

void AFortWeaponRanged::DeactivateMuzzleFlashFXNative(const TArray<UParticleSystemComponent*>& LegacyMuzzleFXComponents) {
}

void AFortWeaponRanged::DeactivateBeamFX() {
}

void AFortWeaponRanged::ClientFixupOverheatValue_Implementation(const float InOverheatValue) {
}

void AFortWeaponRanged::ClearHomingTarget() {
}

void AFortWeaponRanged::ActivateShellsFXNative(UNiagaraSystem* ShellBurstFX, UNiagaraSystem* ShellLoopingFX, const FName ShellSocketName, const FName RotationRateName, const FVector& RotationRate, const FName VelocityName, const FVector& Velocity, const FName GravityName, const FVector& Gravity, const FName SizeName, const FVector& Size, const FName ParentVelocityName, const FVector& ParentVelocity, const FName RadiusName, const float Radius, const FName HeightName, const float Height, const FName ColorName, const FLinearColor& ShellColor, const FName ShellTypeName, const int32 ShellTypeInt, const float CullDistance, const bool bUseShellsOnReload, const FName SpawnProbabilityName, const float SpawnRateScale) {
}

void AFortWeaponRanged::ActivateMuzzleFlashFXNative(const bool bPersistantFire, const bool bMuzzleUsesNiagara, const TSoftObjectPtr<UNiagaraSystem>& MuzzleNiagaraAsset, const TArray<UParticleSystemComponent*>& LegacyMuzzleFXComponents, const float MuzzleChanceOfLargeFlash, const float MuzzleFlashLargeMinScale, const float MuzzleFlashLargeMaxScale, const float MuzzleFlashSmallMinScale, const float MuzzleFlashSmallMaxScale) {
}


void AFortWeaponRanged::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRanged, bIsMuzzleTraceNearWall);
    DOREPLIFETIME(AFortWeaponRanged, OverheatState);
    DOREPLIFETIME(AFortWeaponRanged, TimeOverheatedBegan);
}


