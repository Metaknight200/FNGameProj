#include "FortNevadaVehicle.h"
#include "Components/ChildActorComponent.h"
#include "FortVehiclePontoonsComponent.h"
#include "Net/UnrealNetwork.h"

AFortNevadaVehicle::AFortNevadaVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PontoonsComponent = CreateDefaultSubobject<UFortVehiclePontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->FortNevadaVehicleConfigs = NULL;
    this->FortNevadaVehicleConfigsClass = NULL;
    this->FortNevadaAudioControllerClass = NULL;
    this->AudioControllerActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("AudioControllerActor"));
    this->FortNevadaAudioController = NULL;
    this->LastBatteryRegenTickTime = 0.00f;
    this->bBoostThrust = false;
    this->bBoostDrag = false;
    this->bBoostInputReleased = false;
    this->bUseTractorBeamUprightForce = false;
    this->bDeadBattery = false;
    this->TractorBeamExtraLengthForExtents = 0.00f;
    this->BoostStartTime = 0.00f;
    this->BoostPitchAlpha = 0.00f;
    this->BoostChargeProgress = 0.00f;
    this->BoostChargesAvailable = 0;
    this->CurrentStateStartTime = 0.00f;
    this->HeightAtLandingTime = 0.00f;
    this->CrashingScrapingTime = 0.00f;
    this->CrashingNotMovingTimer = 0.00f;
    this->AltimeterTraceHitDistance = 0.00f;
    this->TractorBeamAppliedForceMagnitude = 0.00f;
    this->AnimParamDriverSeatLeftRight = 0.00f;
    this->AnimParamDriverSeatForwardBack = 0.00f;
    this->bForceNegativeLift = false;
    this->bForcePositiveLift = false;
    this->bInitialLift = false;
    this->CurrentVehicleState = ENevadaFlightStates::NONE;
    this->PassengerCameraModeClass = NULL;
    this->bTractorBeamChargeStarted = false;
    this->AttachedPawnHiddenVehicle = NULL;
    this->SpawnedTractorBeamVictimVehicle = NULL;
    this->TractorBeamAttachedActor = NULL;
    this->TractorBeamTargetedActor = NULL;
    this->bBeamButtonReleased = false;
    this->TractorBeamFX_Unattached = NULL;
    this->TractorBeamFX_Attached = NULL;
    this->BeamPSC = NULL;
    this->TractorBeamState = TBS_Inactive;
    this->TractorBeamDeactivationTimestamp = 0.00f;
    this->TractorBeamDisruptedTimestamp = 0.00f;
    this->CockpitHealth = 0.00f;
    this->Native_CockpitEnabled = 1.00f;
    this->LastCockpitHealthTickTime = 0.00f;
    this->LastCockpitDamageTime = 0.00f;
    this->CockpitDissolveStartTime = 0.00f;
    this->CockpitHitMaterialWobble = NULL;
    this->LastDamageAlpha = 0.00f;
    this->bDissolvingCockpit = false;
    this->bRestoringCockpit = false;
    this->bCockpitWobble = false;
    this->NativeComp_ShieldMesh = NULL;
    this->Native_CockpitMaterial = NULL;
    this->Native_EnergyRingMatInstance = NULL;
    this->Native_EnergyFieldMatInstance = NULL;
    this->NativeComp_DamageStateLastLife = NULL;
    this->NativeComp_DamageState = NULL;
    this->NativeComp_DamageStateFX = NULL;
    this->NativeComp_HologramScreen = NULL;
    this->NativeComp_SpeedLines = NULL;
    this->Native_EnergyRingMat = NULL;
    this->Native_EnergyFieldMat = NULL;
    this->NativeSys_DamageStateFX = NULL;
    this->NativeSys_CockpitDestroyed = NULL;
    this->CockpitDamagedSound = NULL;
    this->CockpitDestroyedSound = NULL;
    this->CockpitRespawnSound = NULL;
    this->Native_DamageStateSound = NULL;
    this->Native_DamageStateLastLifeSound = NULL;
    this->CockpitDeactivatedForceFeedback = NULL;
    this->CockpitDestroyedCamShake = NULL;
    this->AudioControllerActor->SetupAttachment(RootComponent);
}

void AFortNevadaVehicle::SetTractorBeamInactive() {
}

void AFortNevadaVehicle::SetTractorBeamEnabled(const bool bEnabled) {
}

void AFortNevadaVehicle::SetCannonEnabled(const bool bEnabled) {
}

void AFortNevadaVehicle::SetAttachedPawnAddedVelocity(const FVector& AddedVelocity) {
}









void AFortNevadaVehicle::OnRep_TractorBeamState(const TEnumAsByte<ETractorBeamState> PreviousState) {
}

void AFortNevadaVehicle::OnRep_TractorBeamChargeStarted() {
}

void AFortNevadaVehicle::OnRep_TractorBeamAttached() {
}

void AFortNevadaVehicle::OnRep_TargetedActorChanged() {
}

void AFortNevadaVehicle::OnRep_ReplicatedTargetedActors() {
}

void AFortNevadaVehicle::OnRep_NevadaState(const FNevadaState& PrevState) {
}












void AFortNevadaVehicle::OnAttachedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortNevadaVehicle::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void AFortNevadaVehicle::NativeToggleCockpit(bool bEnable) {
}

bool AFortNevadaVehicle::IsTractorBeamDisrupted() const {
    return false;
}

bool AFortNevadaVehicle::IsTractorBeamAttached() const {
    return false;
}

bool AFortNevadaVehicle::IsTractorBeamActive() const {
    return false;
}

FVector AFortNevadaVehicle::GetTractorBeamAttachLocation() const {
    return FVector{};
}

int32 AFortNevadaVehicle::GetNumRebootsAvailable() const {
    return 0;
}

float AFortNevadaVehicle::GetEnergyCanonChargePercent() const {
    return 0.0f;
}

void AFortNevadaVehicle::GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack) {
}

ENevadaFlightStates AFortNevadaVehicle::GetCurrentVehicleState() const {
    return ENevadaFlightStates::FLIGHT;
}

float AFortNevadaVehicle::GetBoostChargeTimeRemaining() const {
    return 0.0f;
}

int32 AFortNevadaVehicle::GetBoostChargesAvailable() const {
    return BoostChargesAvailable;
}

float AFortNevadaVehicle::GetBoostChargeProgress() const {
    return 0.0f;
}

float AFortNevadaVehicle::GetBatteryCharge() const {
    return 0.0f;
}

AFortNevadaAudioController* AFortNevadaVehicle::GetAudioController() const {
    return NULL;
}

void AFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled) {
}

void AFortNevadaVehicle::DisruptTractorBeam() {
}

void AFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(const FVector& Impulse, FName BoneName, bool bVelChange) {
}

void AFortNevadaVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortNevadaVehicle, ServerReplicatedState);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamExtraLengthForExtents);
    DOREPLIFETIME(AFortNevadaVehicle, bTractorBeamChargeStarted);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamAttachedPrimitive);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamTargetedActors);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamAttachedActor);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamTargetedActor);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamTargetPosition);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamState);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamDeactivationTimestamp);
    DOREPLIFETIME(AFortNevadaVehicle, TractorBeamDisruptedTimestamp);
}


