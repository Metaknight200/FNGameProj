#include "FortAthenaGoatVehicle.h"
#include "FortVehicleImminentCollisionComponent.h"
#include "FortVehiclePontoonsComponent.h"

AFortAthenaGoatVehicle::AFortAthenaGoatVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PontoonsComponent = CreateDefaultSubobject<UFortVehiclePontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->ImminentCollisionComponent = CreateDefaultSubobject<UFortVehicleImminentCollisionComponent>(TEXT("ImminentCollisionComponent"));
    this->LeanImpulseScaleFR = 10.00f;
    this->LeanImpulseScaleBR = 20.00f;
    this->LeanImpulseScaleBL = 20.00f;
    this->BounceCurve = NULL;
    this->HandBrakeSkidParam = 0.00f;
    this->BoostParam = 0.00f;
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->bBoostCameraActive = false;
    this->bLocalPlayerADS = false;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->AccumulatedPowerSlideBoostDiscrete = 0.00f;
    this->PowerSlideState = EPowerSlideState::None;
    this->BounceForceFR = 0.00f;
    this->BounceForceBR = 0.00f;
    this->BounceForceBL = 0.00f;
    this->AngularSpeedEnterPowerSlide = 0.00f;
    this->PSC_WheelDust = NULL;
    this->PSC_WheelSlide = NULL;
    this->PSC_TrailLeft = NULL;
    this->PSC_TrailRight = NULL;
    this->FortGoatVehicleConfigsClass = NULL;
    this->FortGoatVehicleConfigs = NULL;
}

void AFortAthenaGoatVehicle::SetSkidActive(bool bActive) {
}



bool AFortAthenaGoatVehicle::IsPowerSliding() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLocalPlayerRiding() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingFR() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingBR() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsLeaningOrBouncingBL() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsEBraking() const {
    return false;
}

bool AFortAthenaGoatVehicle::IsBoosting() const {
    return false;
}

FName AFortAthenaGoatVehicle::GetGolfCartReverseActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartHonkActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartForwardActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

FName AFortAthenaGoatVehicle::GetGolfCartEBrakeActionName(AFortPlayerPawn* FortPlayerPawn) const {
    return NAME_None;
}

float AFortAthenaGoatVehicle::GetBoostAccumulated() const {
    return 0.0f;
}



void AFortAthenaGoatVehicle::ClearBoostAccumulated() {
}

void AFortAthenaGoatVehicle::CacheParticleComponentPointers(UParticleSystemComponent* WheelDust, UParticleSystemComponent* WheelSlide, UParticleSystemComponent* TrailLeft, UParticleSystemComponent* TrailRight) {
}





