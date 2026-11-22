#include "FortHoagieVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "FortVehiclePontoonsComponent.h"
#include "Net/UnrealNetwork.h"

AFortHoagieVehicle::AFortHoagieVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VTDMode = 2;
    this->PontoonsComponent = CreateDefaultSubobject<UFortVehiclePontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->CameraBoomDistance = 1000.00f;
    this->CameraBoomHeight = 500.00f;
    this->bEngineAudioDisabled = false;
    this->LiftRumbleTimer = 0.00f;
    this->bLiftUp = false;
    this->LiftForceFeedbackHandle = 0;
    this->PassiveForceFeedbackHandle = 0;
    this->Theta_Native = 0.00f;
    this->WashAltAlpha_Native = 0.00f;
    this->RotorWashTickTimer = 0.00f;
    this->FortHoagieVehicleConfigs = NULL;
    this->RumbleIntensity = NULL;
    this->bClearPitchInput = true;
    this->bBoosting = false;
    this->BoostTimeLeft = 0.00f;
    this->BoostBrakingTimeLeft = 0.00f;
    this->BoostCooldown = 0.00f;
    this->ShutdownTimer = 0.00f;
    this->FoliageDestructionTimer = 0.00f;
    this->CrashingScrapingTimer = 0.00f;
    this->CrashingNotMovingTimer = 0.00f;
    this->bCanSleep = true;
    this->bHasAppliedCrashDamage = false;
    this->bOrientedForLanding = false;
    this->bForceNegativeLift = false;
    this->bExploded = false;
    this->AltimeterTraceTimer = 0.00f;
    this->LastRotorImpulseTime = 0.00f;
    this->CriticalExplodeTimer = 2.50f;
    this->TimeWhileCritical = 0.00f;
    this->TimeWhileLanding = 0.00f;
    this->LiftFromOverrideButton = 0.00f;
    this->HoagieStateRep = 0;
    this->CurrentHoagieState = EHoagieState::LANDED;
    this->CurrentRotorSpeed = 0.00f;
    this->CurrentRotorAngle = 0.00f;
    this->RotorImpactTraceAngle = 0.00f;
    this->ServerCriticalHealth = 0.00f;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
    this->VehicleFuelSystemState = EVehicleFuelState::Uninitialized;
    this->HoagieIdleFX_Native = NULL;
    this->DamageFX_Native = NULL;
    this->RotorWashFX_Native = NULL;
    this->HoagieAnimBP_Native = NULL;
    this->FortHoagieVehicleConfigsClass = NULL;
    this->FortHoagieVehicleSyncConfigsClass = NULL;
    this->SeatTransition_ToDriver = NULL;
    this->SeatTransition_ToPassenger = NULL;
    this->CurrentViewDistanceScale = 0.00f;
    this->CurrentHLODDistanceOverrideScale = 0.00f;
    this->CurrentHLODMaxDrawDistanceScale = 0.00f;
}

void AFortHoagieVehicle::UpdateHoagieAnimBP_Implementation() {
}

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage) {
}





void AFortHoagieVehicle::ServerUpdateControlState_Implementation(FReplicatedHeliControlState InControlState) {
}










void AFortHoagieVehicle::OnRep_VehicleFuelSystemState() {
}

void AFortHoagieVehicle::OnRep_HoagieState() {
}

void AFortHoagieVehicle::OnRep_ControlState() {
}

void AFortHoagieVehicle::OnRefueledFromEmpty() {
}









void AFortHoagieVehicle::MulticastRotorImpulse_Implementation(const FHitResult& RotorHit) {
}

bool AFortHoagieVehicle::IsStartingUp() const {
    return false;
}

bool AFortHoagieVehicle::IsShuttingDown() const {
    return false;
}

bool AFortHoagieVehicle::IsScrapingBottom() const {
    return false;
}

float AFortHoagieVehicle::GetVerticalSpeedKmh() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace) const {
    return FVector{};
}

float AFortHoagieVehicle::GetStrafeAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetSteerAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetShutdownTimeLeft() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetRotorSpeedPercent() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetRotorSpeed() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetRotorCenterPosition() const {
    return FVector{};
}

float AFortHoagieVehicle::GetRotorAngleDegrees() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetMaxBoostCooldown() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetMaxAltitude() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetLiftAlpha() const {
    return 0.0f;
}

AController* AFortHoagieVehicle::GetKillerController() const {
    return NULL;
}

bool AFortHoagieVehicle::GetIsEngineOn() const {
    return false;
}

bool AFortHoagieVehicle::GetIsCriticalHealth() const {
    return false;
}

float AFortHoagieVehicle::GetForwardAlpha() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetDistanceToGround() const {
    return 0.0f;
}

float AFortHoagieVehicle::GetBoostTimeLeft() const {
    return BoostTimeLeft;
}

float AFortHoagieVehicle::GetBoostDuration() const {
    return 0.0f;
}

FVector AFortHoagieVehicle::GetBoostDirection() const {
    return FVector{};
}

float AFortHoagieVehicle::GetBoostCooldown() const {
    return BoostCooldown;
}

float AFortHoagieVehicle::GetAltitude() const {
    return 0.0f;
}

void AFortHoagieVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHoagieVehicle, HoagieStateRep);
    DOREPLIFETIME(AFortHoagieVehicle, VehicleFuelSystemState);
    DOREPLIFETIME(AFortHoagieVehicle, ControlState);
}


