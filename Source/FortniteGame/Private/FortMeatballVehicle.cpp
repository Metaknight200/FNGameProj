#include "FortMeatballVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "FortMeatballPontoonsComponent.h"
#include "FortVehicleImminentCollisionComponent.h"
#include "Net/UnrealNetwork.h"

AFortMeatballVehicle::AFortMeatballVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PontoonsComponent = CreateDefaultSubobject<UFortMeatballPontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->ImminentCollisionComponent = CreateDefaultSubobject<UFortVehicleImminentCollisionComponent>(TEXT("ImminentCollisionComponent"));
    this->WaterSkiSeatIndex = 0;
    this->FxNormalizationMaxSpeedKmh = 40.00f;
    this->CacheAudioEngineUp = NULL;
    this->CacheAudioEngineDown = NULL;
    this->CacheAudioWakeTurn = NULL;
    this->CacheAudioWakeSpeed = NULL;
    this->CacheAudioScrape = NULL;
    this->CacheAudioEngineOutOfFuel = NULL;
    this->BoostMID = NULL;
    this->CacheBoostReadyLFx = NULL;
    this->CacheBoostReadyRFx = NULL;
    this->CacheDirtCascade = NULL;
    this->CacheSnowInteractionComponent = NULL;
    this->DrivingPlayerController = NULL;
    this->LandCameraShake = NULL;
    this->LandCameraShakeClass = NULL;
    this->DriverCameraShake = NULL;
    this->DriverCameraShakeClass = NULL;
    this->LandRumbleIntensity = 0.00f;
    this->LandForceFeedbackHandle = 0;
    this->TurnRumbleIntensity = 0.00f;
    this->TurnForceFeedbackHandle = 0;
    this->CurrentSnowAltitude = 0.00f;
    this->bHasSnow = false;
    this->bBoostReadyFxOn = false;
    this->bLargeRumble = true;
    this->bTurnRumbleActive = false;
    this->bWaterDropsOnScreen = false;
    this->FortMeatballVehicleConfigsClass = NULL;
    this->FortSpaghettiVehicleClass = NULL;
    this->BoostingCamera = NULL;
    this->VehicleCameraOverride = NULL;
    this->VehicleFuelSystemState = EVehicleFuelState::Uninitialized;
    this->FortMeatballVehicleConfigs = NULL;
    this->WaterLineStartPontoonIndex = 0;
    this->WaterLineEndPontoonIndex = 0;
    this->bBoostFailed = false;
    this->FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
}

void AFortMeatballVehicle::UpdateSnowAndDirtParams(float NormalizedForwardSpeed) {
}

void AFortMeatballVehicle::StopTurnRumble() {
}

void AFortMeatballVehicle::StopLandRumble() {
}

void AFortMeatballVehicle::StopDriverCameraShake() {
}



void AFortMeatballVehicle::OnRep_VehicleFuelSystemState() {
}





void AFortMeatballVehicle::LandShakeEnd() {
}

FQuat AFortMeatballVehicle::GetSeatRotation() const {
    return FQuat{};
}

FVector AFortMeatballVehicle::GetSeatOffset() const {
    return FVector{};
}

float AFortMeatballVehicle::GetBoostCharge() const {
    return 0.0f;
}

void AFortMeatballVehicle::CachePSCPointers(UParticleSystemComponent* InCacheBoostReadyLFx, UParticleSystemComponent* InCacheBoostReadyRFx, UParticleSystemComponent* InCacheDirtCascade, UNiagaraComponent* InCacheSnowLandscapeComponent) {
}

void AFortMeatballVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioEngineUp, UFortVehicleAudioVoice* InAudioEngineDown, UFortVehicleAudioVoice* InAudioWakeTurn, UFortVehicleAudioVoice* InAudioWakeSpeed, UFortVehicleAudioVoice* InAudioScrape, UFortVehicleAudioVoice* InAudioEngineOutOfFuel) {
}

void AFortMeatballVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMeatballVehicle, VehicleFuelSystemState);
}


