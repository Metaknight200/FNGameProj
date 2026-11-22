#include "FortAthenaDoghouseVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

AFortAthenaDoghouseVehicle::AFortAthenaDoghouseVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AntiGravityScalerWhenEmpty = 1.00f;
    this->CameraPitchInterpSpeed = 1.00f;
    this->CameraYawInterpSpeed = 5.00f;
    this->PropSpeed = 0.00f;
    this->PropRotation = 0.00f;
    this->AirbrakeDragCoefficient = 1.00f;
    this->AileronRollDoubleClickSpeed = 0.00f;
    this->bFreelookAutoRecenter = false;
    this->FreelookPitchConstraintDegrees = 40.00f;
    this->FreelookYawConstraintDegrees = 90.00f;
    this->FreelookSensitivity = 2.00f;
    this->MouseSteerSensitivity = 1.00f;
    this->FreelookInterpolation = 12.50f;
    this->FreelookReturnAcceleration = 0.10f;
    this->FreelookReturnDecelleration = 0.10f;
    this->ShootAimAheadDistance = 3000.00f;
    this->FortAirVehicleConfigs = NULL;
    this->bIsFlying = false;
    this->bIsEngineOn = false;
    this->bAutoStartEngineInAir = false;
    this->bEngineStartIsBeingHeld = false;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
    this->VehicleFuelSystemState = EVehicleFuelState::Uninitialized;
}

void AFortAthenaDoghouseVehicle::ServerUpdateControlState_Implementation(FReplicatedControlState InControlState) {
}
bool AFortAthenaDoghouseVehicle::ServerUpdateControlState_Validate(FReplicatedControlState InControlState) {
    return true;
}

void AFortAthenaDoghouseVehicle::ServerBeginAileronRoll_Implementation(EAileronRollDirection Direction) {
}
bool AFortAthenaDoghouseVehicle::ServerBeginAileronRoll_Validate(EAileronRollDirection Direction) {
    return true;
}


void AFortAthenaDoghouseVehicle::OnRep_VehicleFuelSystemState() {
}

void AFortAthenaDoghouseVehicle::OnRep_ControlState() {
}




void AFortAthenaDoghouseVehicle::MultiBeginAileronRoll_Implementation(EAileronRollDirection Direction) {
}

bool AFortAthenaDoghouseVehicle::IsStandingInPlace() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsStallingFromAltitude() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingRight() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingLeft() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsRollingInverted() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsFreelooking() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsFlying() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsEngineOn() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsEngineAutoStartingInAir() const {
    return false;
}

bool AFortAthenaDoghouseVehicle::IsAileronRolling() const {
    return false;
}

float AFortAthenaDoghouseVehicle::GetStandingInPlaceSteeringAngle() const {
    return 0.0f;
}

FVector AFortAthenaDoghouseVehicle::GetShootCenterPointLocal() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetShootCenterPoint() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetFlightControlTorque() const {
    return FVector{};
}

FFlightControlSurfaces AFortAthenaDoghouseVehicle::GetFlightControlSurfaceTargets() const {
    return FFlightControlSurfaces{};
}

FFlightControlSurfaces AFortAthenaDoghouseVehicle::GetFlightControlSurfaces() const {
    return FFlightControlSurfaces{};
}

FVector AFortAthenaDoghouseVehicle::GetFlightControlForce() const {
    return FVector{};
}

float AFortAthenaDoghouseVehicle::GetAltitudeZ() const {
    return 0.0f;
}

FVector AFortAthenaDoghouseVehicle::GetAimPointLocal() {
    return FVector{};
}

FVector AFortAthenaDoghouseVehicle::GetAimPoint() {
    return FVector{};
}

EAileronRollDirection AFortAthenaDoghouseVehicle::GetAileronRollDirection() const {
    return EAileronRollDirection::None;
}

bool AFortAthenaDoghouseVehicle::GasPedalIsDown() const {
    return false;
}

void AFortAthenaDoghouseVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaDoghouseVehicle, VehicleFuelSystemState);
    DOREPLIFETIME(AFortAthenaDoghouseVehicle, ControlState);
}


