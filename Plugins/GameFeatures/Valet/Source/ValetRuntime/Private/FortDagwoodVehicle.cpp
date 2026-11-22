#include "FortDagwoodVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "FortSplatterSourceComponent.h"
#include "FortVehicleImminentCollisionComponent.h"
#include "FortVehiclePontoonsComponent.h"
#include "FortVehicleSeatWeaponComponent.h"
#include "DagwoodNetworkPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

AFortDagwoodVehicle::AFortDagwoodVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCurieMaterial = true;
    this->PontoonsComponent = CreateDefaultSubobject<UFortVehiclePontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->ImminentCollisionComponent = CreateDefaultSubobject<UFortVehicleImminentCollisionComponent>(TEXT("ImminentCollisionComponent"));
    this->HardLandingCameraShake = NULL;
    this->OffroadCamShakeClass = NULL;
    this->DriverCamShakeClass = NULL;
    this->HandBrakeCamShakeClass = NULL;
    this->VehicleClass = EVehicleClass::Sedan;
    this->NativeMinPontoonRadiusToSink = 0.00f;
    this->NativePontoonScaleTimeFront = 0.30f;
    this->NativePontoonScaleRadiusPerTick = 2.00f;
    this->NativePontoonScaleTimeRear = 1.00f;
    this->NativeBasePontoonRadiusFront = 60.00f;
    this->NativeBasePontoonRadiusRear = 65.00f;
    this->FadeDelay = 0.00f;
    this->FadeDuration = 0.00f;
    this->MinBrakeForceForSkid = 1.50f;
    this->MinForwardSpeedForSkid = 10.00f;
    this->NormalizedRPM = 0.00f;
    this->FadeStartTime = 0.00f;
    this->NetworkPhysicsComponent = CreateDefaultSubobject<UDagwoodNetworkPhysicsComponent>(TEXT("DagwoodNetworkPhsyicsComponent"));
    this->ModSeatWeaponComponent = CreateDefaultSubobject<UFortVehicleSeatWeaponComponent>(TEXT("ModWeaponComponent"));
    this->LastModApplyTime = 0.00f;
    this->RechargeableBoostPercent = 0.00f;
    this->BoostEndTime = 0.00f;
    this->SplatterSourceComp = CreateDefaultSubobject<UFortSplatterSourceComponent>(TEXT("SplatterSourceComp"));
    this->FuelLeakType = EFuelLeakType::GenericFromBetweenRearTires;
    this->bEnableNativizedTick = false;
    this->PassengerCameraModeClass = NULL;
    this->PassengerCameraModeClass_ADS = NULL;
    this->FortDagwoodVehicleConfigs = NULL;
    this->FortDagwoodConfigsClass = NULL;
    this->bTireSmokeActive = false;
    this->bBoostFailed = false;
    this->bCanBoostPitch = false;
    this->bOnRoad = false;
    this->bOnLandscape = false;
    this->bOnDirt = false;
    this->bOnVehicle = false;
    this->bWasBrakeSkidding = false;
    this->AccelForceFeedbackHandle = 0;
    this->SkidForceFeedbackHandle = 0;
    this->BrakeForceFeedbackHandle = 0;
    this->HandBrakeForceFeedbackHandle = 0;
    this->bBoosting = false;
    this->bSpeedLinesActive = false;
    this->ValetComponent = NULL;
    this->LastPoppedTire = ETireLocations::FrontRight;
    this->RoadTopSpeedMultiplier = 1.00f;
    this->CurrentBumpiness = 0.00f;
    this->CurrentForwardAcceleration = 0.00f;
    this->PreviousTurnAlpha = 0.00f;
    this->CurrentCameraAssistStrength = 0.00f;
    this->LostGripTime = 0.00f;
    this->LostGripRightAlpha = 0.00f;
    this->HandbrakeTime = 0.00f;
    this->HandbrakeStartTime = 0.00f;
    this->RimScrapeDamageTimer = 0.00f;
    this->FlipYawMult = 0.00f;
    this->FlipTimer = 0.00f;
    this->FlipExplodeTimer = 0.00f;
    this->FlipPushForceTimer = 0.00f;
    this->FlipAirTimer = 0.00f;
    this->FlipLanding = 0.00f;
    this->FlipStartTime = 0.00f;
    this->LastFlipDamageTime = 0.00f;
    this->PreFlipControlLossTimer = 0.00f;
    this->LastPopTireTime = -1.00f;
    this->HealthZeroTime = 0.00f;
    this->NativePontoonScaleTimerFront = 0.00f;
    this->NativePontoonScaleTimerRear = 0.00f;
    this->NativeScaledFrontPontoonRadius = 0.00f;
    this->NativeScaledRearPontoonRadius = 0.00f;
    this->bDidCinematicFlip = false;
    this->bCanCinematicFlip = true;
    this->bClientWaitingToApplyMod = false;
    this->bInPopTireVeer = false;
    this->bInFlipRecovery = false;
    this->bExplodeAfterFlip = false;
    this->bLostGrip = false;
    this->bApplyHandbrakeCatchupForce = false;
    this->bDidHandbrakeCatchup = false;
    this->bInFlipRoll = false;
    this->bInFlipYaw = false;
    this->bInFlipPitch = false;
    this->bFlipDidLeaveGround = false;
    this->bBreakBuildingsIfBlockingLeaningPassenger = true;
    this->LeanBreakTimeAccumulator = 0.00f;
    this->LeanBreakCheckInterval = 1.00f;
    this->SeatToWindowShapeNames.AddDefaulted(4);
    this->OffroadCameraShakeInstance = NULL;
    this->DriverCameraShakeInstance = NULL;
    this->AccelCameraShakeInstance = NULL;
    this->HandBrakeCameraShakeInstance = NULL;
    this->NativeComp_RoadAndExhaust = NULL;
    this->NativeComp_TireSkid = NULL;
    this->NativeComp_LowFuelSputter = NULL;
    this->NativeComp_Damage = NULL;
    this->NativeComp_SpeedLines = NULL;
    this->TireExhaustFX = NULL;
    this->NativeSys_LowFuelSputter = NULL;
    this->NativeSys_SpeedLines = NULL;
    this->NativeSys_TireSkid = NULL;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
    this->ActivePoppedTireReaction = EPoppedTireReactionStates::None;
    this->ServerPoppedTireReaction = EPoppedTireReactionStates::None;
    this->bExploded = false;
    this->ServerCriticalHealth = 10.00f;
    this->bIsInoperable = false;
    this->RandomSeed = 0;
    this->bSelfDestructEnabled = true;
    this->bClientUsesSelfDestructTimer = true;
    this->TireBootMesh = NULL;
    this->MinimumTimeBetweenSelfDestructPromptChanges = 0.50f;
}

void AFortDagwoodVehicle::UpdateVehicleFuelLeak() {
}

void AFortDagwoodVehicle::TrySpawnWithMod() {
}

void AFortDagwoodVehicle::StartFade() {
}

void AFortDagwoodVehicle::SetValetAudioController(AFortValetAudioController* NewValetAudio) {
}

void AFortDagwoodVehicle::SetOnFire(bool bNewFire) {
}

void AFortDagwoodVehicle::SetNormalizedAudioRPM(float InRPM) {
}

void AFortDagwoodVehicle::SetFuel(float NewFuel) {
}

void AFortDagwoodVehicle::ServerSetTireModTag(const FGameplayTag& TireModTag) {
}

void AFortDagwoodVehicle::ServerSetRuntimeSpringsInfo(const FRuntimeSpringsInfo& SpringsInfo) {
}

void AFortDagwoodVehicle::ServerSetRuntimeGravity(float GravMult) {
}

void AFortDagwoodVehicle::ServerSetRuntimeFuelInfo(const FRuntimeFuelInfo& FuelInfo) {
}

void AFortDagwoodVehicle::ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt) {
}

void AFortDagwoodVehicle::ServerSetRuntimeBoostInfo(const FRuntimeBoostInfo& BoostInfo) {
}

void AFortDagwoodVehicle::ServerSetFadeDuration(const float NewFadeDuration) {
}

void AFortDagwoodVehicle::ServerSetDamageInfo(const bool bDamageFriendlyFire, const bool bDamageOtherVehicles, const bool bDamageOwnVehicle) {
}

void AFortDagwoodVehicle::ServerSelfDestructActivated_Implementation() {
}
bool AFortDagwoodVehicle::ServerSelfDestructActivated_Validate() {
    return true;
}

void AFortDagwoodVehicle::ServerAddRuntimeGearsInfo(const FRuntimeGearInfo& GearInfo) {
}

void AFortDagwoodVehicle::SelfDestructCleanup() {
}

void AFortDagwoodVehicle::RemoveModMountedGun() {
}









void AFortDagwoodVehicle::OnRep_Tires(const TArray<ETireStates>& PrevTireStates) {
}

void AFortDagwoodVehicle::OnRep_RandSeed() {
}

void AFortDagwoodVehicle::OnRep_PoppedTireReaction() {
}

void AFortDagwoodVehicle::OnRep_MountedWeapon(const FMountedGun& PrevMountedWeapon) {
}

void AFortDagwoodVehicle::OnRep_IsInoperable() {
}

void AFortDagwoodVehicle::OnRep_FakeTires(const TArray<ETireStates>& PrevTireStates) {
}

void AFortDagwoodVehicle::OnRep_Exploded() {
}

void AFortDagwoodVehicle::OnRep_DagwoodRuntimeModifiers(const FDagwoodRuntimeModifiers& PrevMods) {
}

void AFortDagwoodVehicle::OnRep_AttachedWheelMeshes() {
}

void AFortDagwoodVehicle::OnPoppedTire(const int32 TireIndex, const bool bFakeTire) {
}





















void AFortDagwoodVehicle::NativeOnOutOfFuel() {
}

void AFortDagwoodVehicle::NativeOnLowFuel() {
}

void AFortDagwoodVehicle::NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent) {
}

float AFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity) const {
    return 0.0f;
}

void AFortDagwoodVehicle::MakeOperable(bool bAddGas) {
}

void AFortDagwoodVehicle::MakeInoperable() {
}

bool AFortDagwoodVehicle::IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold) const {
    return false;
}

bool AFortDagwoodVehicle::IsTireSkidding(const float MinSpeedForSkid, const float AngleForSkid, const float SpeedForPeelout, const float SpeedForBraking) const {
    return false;
}

bool AFortDagwoodVehicle::IsOnRoad() const {
    return bOnRoad;
}

bool AFortDagwoodVehicle::IsOnLandscape() const {
    return bOnLandscape;
}

bool AFortDagwoodVehicle::IsOnDirt() const {
    return bOnDirt;
}

bool AFortDagwoodVehicle::IsOffroad() const {
    return false;
}

bool AFortDagwoodVehicle::IsNativeBPTickEnabled() const {
    return false;
}

bool AFortDagwoodVehicle::IsInoperable() const {
    return false;
}

bool AFortDagwoodVehicle::HasTireMod() const {
    return false;
}

bool AFortDagwoodVehicle::HasAppliedMountedGunMod() const {
    return false;
}

FGameplayTag AFortDagwoodVehicle::GetVehicleModTag() const {
    return FGameplayTag{};
}

ETireSurfaces AFortDagwoodVehicle::GetTireSurface(ETireLocations TireIndex) const {
    return ETireSurfaces::Road;
}

bool AFortDagwoodVehicle::GetTireState(int32 TireIndex) const {
    return false;
}

float AFortDagwoodVehicle::GetTireHealthPercent(ETireLocations TireIndex) const {
    return 0.0f;
}

FString AFortDagwoodVehicle::GetPlayerFacingName() const {
    return TEXT("");
}

bool AFortDagwoodVehicle::GetOnFire() const {
    return bOnFire;
}

float AFortDagwoodVehicle::GetNormalizedAudioRPM() const {
    return 0.0f;
}

int32 AFortDagwoodVehicle::GetMountedWeaponOnlySeatIndex() const {
    return 0;
}

TArray<FName> AFortDagwoodVehicle::GetModSocketNames() const {
    return TArray<FName>();
}

float AFortDagwoodVehicle::GetMiddleAxleForwardAdjust() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetHUDTopSpeed() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetFuelCapacity() const {
    return 0.0f;
}

float AFortDagwoodVehicle::GetFuel() const {
    return 0.0f;
}

FDagwoodRuntimeModifiers AFortDagwoodVehicle::GetCurrentDagwoodRuntimeProperties() {
    return FDagwoodRuntimeModifiers{};
}

float AFortDagwoodVehicle::GetBumpiness() const {
    return 0.0f;
}

bool AFortDagwoodVehicle::ForwardOrReverseInputPressed() const {
    return false;
}

bool AFortDagwoodVehicle::DoesVehicleDamageOwnVehicle() const {
    return false;
}

bool AFortDagwoodVehicle::DoesVehicleDamageOtherVehicles() const {
    return false;
}

bool AFortDagwoodVehicle::DoesVehicleDamageFriendlyFire() const {
    return false;
}




bool AFortDagwoodVehicle::AreAnyTiresPopped() const {
    return false;
}

void AFortDagwoodVehicle::ApplyVehicleModMountedGun(UFortDagwoodModsConfigs* ModConfigsRef) {
}

void AFortDagwoodVehicle::ApplyTireMod(const FGameplayTag& NewTireModTag, const AFortPlayerController* EventInstigator) {
}

void AFortDagwoodVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDagwoodVehicle, FadeDuration);
    DOREPLIFETIME(AFortDagwoodVehicle, MountedWeaponMod);
    DOREPLIFETIME(AFortDagwoodVehicle, RechargeableBoostPercent);
    DOREPLIFETIME(AFortDagwoodVehicle, DagwoodRuntimeModifiedProperties);
    DOREPLIFETIME(AFortDagwoodVehicle, ServerRepWheelData);
    DOREPLIFETIME(AFortDagwoodVehicle, TireStates);
    DOREPLIFETIME(AFortDagwoodVehicle, FakeTireStates);
    DOREPLIFETIME(AFortDagwoodVehicle, ServerPoppedTireReaction);
    DOREPLIFETIME(AFortDagwoodVehicle, bExploded);
    DOREPLIFETIME(AFortDagwoodVehicle, bIsInoperable);
    DOREPLIFETIME(AFortDagwoodVehicle, RandomSeed);
}


