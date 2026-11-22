#include "FortAthenaVehicle.h"
#include "Engine/EngineTypes.h"
#include "FortDamageSet.h"
#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortAthenaVehicle::AFortAthenaVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->OverrideItemWrap = NULL;
    this->BoundsXYSplineComponent = NULL;
    this->bDisableUpdateForcedDebugInput = false;
    this->bDisableUpdateAutoRun = false;
    this->bDisableUpdateHonk = false;
    this->bDisableUpdateIgnoredBuildingActors = false;
    this->bDisableUpdateIngoredPawnsForDamage = false;
    this->bDisableUpdateSafeTeleport = false;
    this->bUseForceHeading = false;
    this->IndicatorEnabled = true;
    this->bDestroyOnLastExit = false;
    this->bShowDamageNumbers = true;
    this->bShowDamageNumbersAtImpactLocation = false;
    this->bPlayDamageAudio = false;
    this->bShowVehicleHealthBarOnPlayerHUD = true;
    this->bDestroyBuildingSMActorOnForceExit = true;
    this->bIgnoreAllFallingDamage = false;
    this->bIgnoreNextFallingDamage = false;
    this->bIsBraking = false;
    this->bPlayedDying = false;
    this->bPendingDeath = false;
    this->bForceDeath = false;
    this->bHasDriver = false;
    this->bHasPassengers = false;
    this->bCanSleepWhileNotTouchingAnything = true;
    this->bIsTouchingAnything = false;
    this->bIsInWater = false;
    this->bIsInWaterBody = false;
    this->bIsOverlappingWaterBody = false;
    this->bIsFullyInWaterBody = false;
    this->bCanDriveOnIncline = true;
    this->bCanCoastOnIncline = true;
    this->bWheelsOnGround = false;
    this->bAnyWheelsOnGround = false;
    this->bIsTouchingDrivableGround = false;
    this->bIsTouchingGroundWithoutWheels = false;
    this->bUseGravity = true;
    this->bAllowInteractBetweenFortVolumes = true;
    this->bCanPassengerPawnsTakeDamage = true;
    this->bOnFire = false;
    this->bLeakingFuel = false;
    this->bEnableCurieMaterial = false;
    this->bEnforceTeamRestriction = false;
    this->bEnforceTeamRestrictionForMiniGame = false;
    this->bEnforceMinigameClassRestriction = false;
    this->TeamId = 255;
    this->MinigameClassID = 255;
    this->bWaitingForSleep = false;
    this->bAttemptAsyncOrientationCorrection = false;
    this->bIsAsyncCorrectingOrientation = false;
    this->bAlwaysCreateNavComponent = true;
    this->bAllowInteractBetweenFortVolumes_Runtime = true;
    this->bTricksEnabled = true;
    this->FireDamageTickTimer = 0.00f;
    this->CurrentFOV = 80.00f;
    this->DriverReticleBrush = NULL;
    this->IndicatorAudibleDistance = 20000.00f;
    this->IndicatorIcon = NULL;
    this->WaterEffectsVehicleMaxSpeedKmh = 40.00f;
    this->WaterEffectsAsset = NULL;
    this->WaterEffectsComponent = NULL;
    this->LastPropImpactImpulseTime = 0.00f;
    this->TopSpeedCurrentMultiplier = 1.00f;
    this->PushForceCurrentMultiplier = 1.00f;
    this->SteeringAngle = 0.00f;
    this->FrontLateralFrictionRuntimeMultiplier = 1.00f;
    this->RearLateralFrictionRuntimeMultiplier = 1.00f;
    this->FrontMassRatio = 0.00f;
    this->RearMassRatio = 0.00f;
    this->TotalBrakingDelta = 0.00f;
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->VTDMode = 0;
    this->SurfaceTypeVehicleOn = SurfaceType_Default;
    this->ForcedMaterialVariantIndex = -1;
    this->FortPhysicsVehicleConfigs = NULL;
    this->SeatSwitchCooldown = 0.00f;
    this->ForwardDrivingAntiGravityScaler = 1.00f;
    this->CameraSpaceForwardDistanceOffset = 0.00f;
    this->CameraAssistStrength = 0.50f;
    this->CameraAssistRampUp = 1.75f;
    this->bAllowAutoCamera = true;
    this->TimeToAutoCamera = 1.00f;
    this->MinSpeedForAutoCamera = 10.00f;
    this->CameraAssistBaseHeight = 6.00f;
    this->CameraAssistUpHillScaler = 20.00f;
    this->CameraAssistSteerScaler = 6.00f;
    this->CameraAssistForwardScale = 20.00f;
    this->AngleDegreesThresholdFromCurrentCameraToTarget = 5.00f;
    this->CameraFOVOffset = 0.00f;
    this->TetheredCamera = NULL;
    this->PlayerCollisionGameplayEffect = NULL;
    this->OverlapComponent = NULL;
    this->WaterOverlapComponent = NULL;
    this->WaterLevel = 0.00f;
    this->VehicleMinHorSpeedToDamage = 30.00f;
    this->VehicleMaxHorSpeedToDamage = 50.00f;
    this->VehicleMinHorSpeedDamage = 30.00f;
    this->VehicleMaxHorSpeedDamage = 50.00f;
    this->ImpulseResponseMultiplier = 1.00f;
    this->ImpulseResponseZBias = 0.10f;
    this->TargetingZOffset = 0.00f;
    this->BrakeAboveTopSpeedDelta = 3.00f;
    this->TimeToIdleBrake = 0.00f;
    this->DragCoefficient = 5.00f;
    this->PrimaryCameraPitchConstraint = 180.00f;
    this->PrimaryCameraYawConstraint = 180.00f;
    this->CachedSpeed = 0.00f;
    this->TrickSet = NULL;
    this->WaterBodyOverlapComponent = NULL;
    this->DefaultHitNotifyAudioBank = NULL;
    this->BulletCollisionComponentTag = TEXT("BulletCollision");
    this->GEDamagePassengersOnDeath = NULL;
    this->LifespanAfterDeath = 0.50f;
    this->LastDamagedTime = 0.00f;
    this->EmoteAudioSourcePresetChain = NULL;
    this->EmoteAudioAttenuation = NULL;
    this->StartupAbilitySet = NULL;
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->VehicleInteractionOverrideComponent = NULL;
    this->SkyTubePhysicsComponent = NULL;
    this->PontoonsComponent = NULL;
    this->TrackableAIObjectComponent = NULL;
    this->VehicleMovementSet = NULL;
    this->ImminentCollisionComponent = NULL;
    this->CameraModeClass = NULL;
    this->DrivingAnimClass = NULL;
    this->DriverAnimLayerOverlayClass = NULL;
    this->PassengerAnimLayerOverlayClass = NULL;
    this->AnimSet = NULL;
    this->AbilitySystemComponent = NULL;
    this->HealthSet = NULL;
    this->ImpulseResponseSet = NULL;
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    this->HealthBarIndicator = NULL;
    this->NavModifierComponent = NULL;
    this->bShouldSleepAtSpawn = true;
    this->ImpactInstigator = NULL;
}

bool AFortAthenaVehicle::WheelsOnGround() const {
    return false;
}


void AFortAthenaVehicle::WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaVehicle::WakeUp() {
}

bool AFortAthenaVehicle::VehicleIsInSkyTube() const {
    return false;
}

void AFortAthenaVehicle::UseOrExitReleasedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::UseOrExitPressedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::UpdateClientWithVehicleTestInput_Implementation(FVector LinearVelocity, FVector AngularVelocity) {
}

bool AFortAthenaVehicle::ShouldShowSoundIndicator_Implementation() const {
    return false;
}

void AFortAthenaVehicle::SetWaterDestructionDelay(const float NewWaterDestructionDelay) {
}

void AFortAthenaVehicle::SetUnoccupiedAutoDestroy(float UnoccupiedTime) {
}

void AFortAthenaVehicle::SetTeamID(const uint8 NewTeamID) {
}

void AFortAthenaVehicle::SetSupportCosmeticWrap(const bool bNewSupportCosmeticWrap) {
}

void AFortAthenaVehicle::SetStaticPhysics(const bool bStatic) {
}

void AFortAthenaVehicle::SetSpringEnabled(const int32 SpringIndex, const bool bEnabled) {
}

void AFortAthenaVehicle::SetShootingCone(const int32 SeatIdx, FAthenaVehicleShootingCone InCone) {
}

void AFortAthenaVehicle::SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCanDestroy, TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesVehicleCannotDestroyWhenBoosting, TArray<UBuildingEditModeMetadata*> InWallsVehicleCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsVehicleCannotDestroyWhenBoosting) {
}

void AFortAthenaVehicle::SetMinigameClassID(const int32 NewClassID) {
}

void AFortAthenaVehicle::SetImpulseResponseZBias(const float ZBias) {
}

void AFortAthenaVehicle::SetImpulseResponseMultiplier(const float Multiplier) {
}

void AFortAthenaVehicle::SetIgnoreNextFallingDamage(bool bInIgnoreNextFallingDamage) {
}

void AFortAthenaVehicle::SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage) {
}

void AFortAthenaVehicle::SetHealthPercent(float Percent) {
}

void AFortAthenaVehicle::SetForceInfiniteFuel(const bool bNewForceInfiniteFuel) {
}

void AFortAthenaVehicle::SetEnforceTeamRestriction(const bool bNewEnforceTeamRestriction) {
}

void AFortAthenaVehicle::SetEnforceMinigameClassRestriction(const bool bNewEnforceClassRestriction) {
}

void AFortAthenaVehicle::SetDyingPhysics() {
}

void AFortAthenaVehicle::SetCurrentFocusedSocketLocation(const int32 SeatIndex) {
}

void AFortAthenaVehicle::SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes) {
}

void AFortAthenaVehicle::SetActorBase(AActor* InActorBase, const int32 SeatIndex) {
}

void AFortAthenaVehicle::ServerUsingRiftPortal_Implementation(AActor* RiftPortal) {
}

void AFortAthenaVehicle::ServerStartFire_Implementation(uint8 FireModeNum) {
}

void AFortAthenaVehicle::ServerSetIgnoreNextFallingDamage_Implementation(bool InIgnoreNextFallingDamage) {
}

void AFortAthenaVehicle::ServerSetIgnoreAllFallingDamage_Implementation(bool InIgnoreAllFallingDamage) {
}

void AFortAthenaVehicle::ServerReceiveInputCmd_Implementation(int32 ClientFrameNumber, const TArray<uint8>& Data) {
}

bool AFortAthenaVehicle::ServerOnAttemptInteract(const FInteractionType& InteractType) {
    return false;
}

bool AFortAthenaVehicle::SeatIsTurret(const int32 SeatIndex) const {
    return false;
}

void AFortAthenaVehicle::ResetTrick() {
}

void AFortAthenaVehicle::RepairDamageablePart(const FName& ShapeName) {
}

void AFortAthenaVehicle::RepairAllDamageableParts(const float NewHealth) {
}

void AFortAthenaVehicle::ReleaseVehicleControlledExternalyInternal() {
}

bool AFortAthenaVehicle::RearLateralFrictionHasReachedMax() const {
    return false;
}

bool AFortAthenaVehicle::PlayerIsTryingToReverse() const {
    return false;
}

bool AFortAthenaVehicle::PlayerIsTryingToMoveForward() const {
    return false;
}


void AFortAthenaVehicle::OverridePontoonRadiusOnServer(int32 PontoonIndex, float NewRadius) {
}

void AFortAthenaVehicle::OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap) {
}

void AFortAthenaVehicle::OnWaterTooDeep_Implementation() {
}






void AFortAthenaVehicle::OnRep_VehicleAttributes() {
}

void AFortAthenaVehicle::OnRep_ToggleableParts(const TArray<FVehicleToggleablePart>& PrevToggleableParts) {
}

void AFortAthenaVehicle::OnRep_TeamID() {
}

void AFortAthenaVehicle::OnRep_SurfaceTypeVehicleOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn) {
}

void AFortAthenaVehicle::OnRep_PendingDeath() {
}

void AFortAthenaVehicle::OnRep_OverrideWrap() {
}

void AFortAthenaVehicle::OnRep_OnFire() {
}

void AFortAthenaVehicle::OnRep_NetPrediction_SP() {
}

void AFortAthenaVehicle::OnRep_NetPrediction_AP() {
}

void AFortAthenaVehicle::OnRep_LeakingFuel() {
}

void AFortAthenaVehicle::OnRep_IgnoredBuildingActors() {
}

void AFortAthenaVehicle::OnRep_HealthSet() {
}

void AFortAthenaVehicle::OnRep_DamageableParts(const TArray<FVehicleDamageablePart>& PrevDamageableParts) {
}

void AFortAthenaVehicle::OnRep_CorrectTargetOrientation() {
}

void AFortAthenaVehicle::OnRep_AbilitySystemComponent() {
}

void AFortAthenaVehicle::OnPrimitiveComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void AFortAthenaVehicle::OnPrimitiveComponentSleep(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void AFortAthenaVehicle::OnPawnExitVehicle_Implementation(AFortPlayerPawn* PlayerPawn, FName ExitSocketName) {
}












void AFortAthenaVehicle::OnExitOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}



void AFortAthenaVehicle::OnEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}








float AFortAthenaVehicle::ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

void AFortAthenaVehicle::ManageSpeedDamageMutlipliers() {
}


bool AFortAthenaVehicle::IsSprinting() const {
    return false;
}

bool AFortAthenaVehicle::IsSlowEnoughToInteract() const {
    return false;
}

bool AFortAthenaVehicle::IsScrapingSidesOrTop() const {
    return false;
}

bool AFortAthenaVehicle::IsRechargeableFuelBelowThreshold() const {
    return false;
}

bool AFortAthenaVehicle::IsOverlappingWaterBody() const {
    return false;
}

bool AFortAthenaVehicle::IsOutOfRechargeableFuel() const {
    return false;
}

bool AFortAthenaVehicle::IsMagnetizedForSkyTubes() const {
    return false;
}

bool AFortAthenaVehicle::IsJumping() const {
    return false;
}

bool AFortAthenaVehicle::IsInWaterBody() const {
    return false;
}

bool AFortAthenaVehicle::IsInWater() const {
    return false;
}

bool AFortAthenaVehicle::IsInSkyTube() const {
    return false;
}

bool AFortAthenaVehicle::IsInReverseGear() const {
    return false;
}

bool AFortAthenaVehicle::IsInAir() const {
    return false;
}

bool AFortAthenaVehicle::IsHonking() const {
    return false;
}

bool AFortAthenaVehicle::IsEnforcingTeamRestriction() const {
    return false;
}

bool AFortAthenaVehicle::IsEnforcingMinigameClassRestriction() const {
    return false;
}

bool AFortAthenaVehicle::IsDriverTeamRestricted(const AFortPlayerPawn* PlayerPawn) const {
    return false;
}

bool AFortAthenaVehicle::IsDriverSplitScreen() const {
    return false;
}

bool AFortAthenaVehicle::IsDriverClassRestricted(const AFortPlayerPawn* PlayerPawn) const {
    return false;
}

bool AFortAthenaVehicle::IsCorrectingOrientation() const {
    return false;
}

bool AFortAthenaVehicle::IsCameraControlledRotation() const {
    return false;
}

bool AFortAthenaVehicle::IsBraking() const {
    return false;
}

bool AFortAthenaVehicle::IsAsleep() const {
    return false;
}

bool AFortAthenaVehicle::IsAirControlling() const {
    return false;
}

bool AFortAthenaVehicle::HasEverContainedPlayers() const {
    return false;
}

bool AFortAthenaVehicle::HasDriver() const {
    return false;
}

bool AFortAthenaVehicle::HasConstraints() const {
    return false;
}


FVector AFortAthenaVehicle::GetVehicleVelocity() const {
    return FVector{};
}

float AFortAthenaVehicle::GetTotalSpeedKmh() const {
    return 0.0f;
}

uint8 AFortAthenaVehicle::GetTeamID() const {
    return TeamId;
}

float AFortAthenaVehicle::GetSteeringAngle() const {
    return SteeringAngle;
}

FVector AFortAthenaVehicle::GetStandingFiringOffsetForSeat(const int32 SeatIdx) const {
    return FVector{};
}

float AFortAthenaVehicle::GetSpringLengthRatio(int32 SpringIdx) const {
    return 0.0f;
}

bool AFortAthenaVehicle::GetShootingCone(const int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const {
    return false;
}

UFortVehicleSeatWeaponComponent* AFortAthenaVehicle::GetSeatWeaponComponent(const int32 SeatIndex) const {
    return NULL;
}

float AFortAthenaVehicle::GetSeatSwitchCooldown(const int32 SeatIndex) const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetPreviousLinearVelocity() const {
    return FVector{};
}

FVector AFortAthenaVehicle::GetPreviousLinearAcceleration() const {
    return FVector{};
}

float AFortAthenaVehicle::GetPreviousForwardSpeedKmh() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetPontoonRadius(const int32 PontoonIndex) const {
    return 0.0f;
}

AFortPlayerPawn* AFortAthenaVehicle::GetPawnAtSeat(const int32 SeatIdx) const {
    return NULL;
}

int32 AFortAthenaVehicle::GetMinigameClassID() const {
    return MinigameClassID;
}

float AFortAthenaVehicle::GetMaxHealth() const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetIndicatorRelativeOffset() const {
    return FVector{};
}

float AFortAthenaVehicle::GetHealth() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetForwardSpeedKmh() const {
    return 0.0f;
}

AFortPlayerPawn* AFortAthenaVehicle::GetDriver() const {
    return NULL;
}

FString AFortAthenaVehicle::GetDisplayName() const {
    return TEXT("");
}

float AFortAthenaVehicle::GetDesiredForwardVelocityDelta() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetDesiredForwardVelocity() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetDesiredForwardSpeedKmh() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetCurrentSignificance() const {
    return 0.0f;
}

FVehicleRuntimeModifiers AFortAthenaVehicle::GetCurrentRuntimeProperties() {
    return FVehicleRuntimeModifiers{};
}

int32 AFortAthenaVehicle::GetCurrentGear() const {
    return 0;
}

float AFortAthenaVehicle::GetCurrentFOV() const {
    return 0.0f;
}

float AFortAthenaVehicle::GetCurrentForwardVelocity() const {
    return 0.0f;
}

int32 AFortAthenaVehicle::GetCurrentBudget() const {
    return 0;
}

float AFortAthenaVehicle::GetCurrentBrakeForce(float ForwardSpeedKmH) const {
    return 0.0f;
}

FVector AFortAthenaVehicle::GetCrouchingFiringOffsetForSeat(const int32 SeatIdx) const {
    return FVector{};
}

float AFortAthenaVehicle::GetBrakingDelta() const {
    return 0.0f;
}

TArray<AFortPlayerPawn*> AFortAthenaVehicle::GetAllPassengers() const {
    return TArray<AFortPlayerPawn*>();
}

void AFortAthenaVehicle::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortAthenaVehicle::GamepadUseOrExitReleasedFromSeat(const int32 FromSeatIndex) {
}

void AFortAthenaVehicle::GamepadUseOrExitPressedFromSeat(const int32 FromSeatIndex) {
}

bool AFortAthenaVehicle::ForceSeatSinglePawn(AFortPlayerPawn* PawnToSeat, int32 SeatIndex) {
    return false;
}

void AFortAthenaVehicle::ForceSeatPawns(TArray<AFortPlayerPawn*> PawnsToSeat) {
}

int32 AFortAthenaVehicle::FindSeatIndex(const AFortPlayerPawn* PlayerPawn) const {
    return 0;
}

bool AFortAthenaVehicle::EjectSeat(const int32 SeatIndex) {
    return false;
}

bool AFortAthenaVehicle::EjectPlayerPawn(const AFortPlayerPawn* InPlayerPawn) {
    return false;
}

void AFortAthenaVehicle::EjectAllPlayers() {
}

void AFortAthenaVehicle::DisableTrickCredit(float Duration) {
}

void AFortAthenaVehicle::DestroyVehicle() {
}

void AFortAthenaVehicle::DestroyAllDamageableParts() {
}

void AFortAthenaVehicle::DemagnetizeFromSkyTube() {
}

void AFortAthenaVehicle::DebugDrawImpactBucket_Implementation(FVector Location, FVector ImpactVector, FColor Color) {
}

bool AFortAthenaVehicle::ContainsPlayers() const {
    return false;
}

bool AFortAthenaVehicle::ClientIsDriver() const {
    return false;
}

void AFortAthenaVehicle::ClientBroadcastAbilityImpactAtLocation_Implementation(UObject* WorldContextObject, USoundBase* InSound, UObject* InInstigator, const FVector& Position, float Radius, FName Tag, const bool bSubtractLocalNoise) {
}

bool AFortAthenaVehicle::CanTeleport() const {
    return false;
}

bool AFortAthenaVehicle::CanShootFromSeat(const int32 SeatIndex) const {
    return false;
}

bool AFortAthenaVehicle::CanForcePawnToSeat(AFortPlayerPawn* PawnToSeat, const int32 SeatIndex) const {
    return false;
}

bool AFortAthenaVehicle::CanDriveOnIncline() const {
    return false;
}

bool AFortAthenaVehicle::CanCorrectOrientation(AFortPawn* FP) const {
    return false;
}

bool AFortAthenaVehicle::CanContainPlayers() const {
    return false;
}

bool AFortAthenaVehicle::CanAntigravityOnIncline() const {
    return false;
}

void AFortAthenaVehicle::BroadcastResetWaterIdleTimeEmpty_Implementation() {
}

bool AFortAthenaVehicle::BP_CanInteract_Implementation(AFortPlayerController* FortPC) {
    return false;
}

bool AFortAthenaVehicle::BlocksBuilding() const {
    return false;
}

UMaterialInstanceDynamic* AFortAthenaVehicle::ApplyMaterialAndUseWrapIfPossible(UMaterialInterface* MaterialToUse, int32 SlotIndex, bool bAlwaysCreateMID) {
    return NULL;
}

bool AFortAthenaVehicle::AnyWheelsOnGround() const {
    return false;
}

bool AFortAthenaVehicle::AllowInteractionBetweenFortVolume() const {
    return false;
}

void AFortAthenaVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaVehicle, SimulatedProxyMinimalReplicationGameplayCues);
    DOREPLIFETIME(AFortAthenaVehicle, NetPredictionProxy_AP);
    DOREPLIFETIME(AFortAthenaVehicle, NetPredictionProxy_SP);
    DOREPLIFETIME(AFortAthenaVehicle, SoftOverrideItemWrap);
    DOREPLIFETIME(AFortAthenaVehicle, bPendingDeath);
    DOREPLIFETIME(AFortAthenaVehicle, bHasDriver);
    DOREPLIFETIME(AFortAthenaVehicle, bHasPassengers);
    DOREPLIFETIME(AFortAthenaVehicle, bOnFire);
    DOREPLIFETIME(AFortAthenaVehicle, bLeakingFuel);
    DOREPLIFETIME(AFortAthenaVehicle, bEnforceTeamRestriction);
    DOREPLIFETIME(AFortAthenaVehicle, bEnforceTeamRestrictionForMiniGame);
    DOREPLIFETIME(AFortAthenaVehicle, bEnforceMinigameClassRestriction);
    DOREPLIFETIME(AFortAthenaVehicle, TeamId);
    DOREPLIFETIME(AFortAthenaVehicle, MinigameClassID);
    DOREPLIFETIME(AFortAthenaVehicle, EmptyDriverInputState);
    DOREPLIFETIME(AFortAthenaVehicle, SurfaceTypeVehicleOn);
    DOREPLIFETIME(AFortAthenaVehicle, RuntimeModifiedProperties);
    DOREPLIFETIME(AFortAthenaVehicle, VehicleAttributes);
    DOREPLIFETIME(AFortAthenaVehicle, IgnoredBuildingActors);
    DOREPLIFETIME(AFortAthenaVehicle, DamageableParts);
    DOREPLIFETIME(AFortAthenaVehicle, ToggledParts);
    DOREPLIFETIME(AFortAthenaVehicle, CorrectTargetOrientation);
    DOREPLIFETIME(AFortAthenaVehicle, AbilitySystemComponent);
    DOREPLIFETIME(AFortAthenaVehicle, HealthSet);
    DOREPLIFETIME(AFortAthenaVehicle, bShouldSleepAtSpawn);
}


