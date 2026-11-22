#include "FortAthenaMapInfo.h"
#include "Components/SceneComponent.h"

AFortAthenaMapInfo::AFortAthenaMapInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->VendingMachineClass = NULL;
    this->WeaponUpgradeMachineClass = NULL;
    this->LlamaClass = NULL;
    this->AircraftClass = NULL;
    this->AircraftDropVolume = NULL;
    this->PlayableBoundsVolume = NULL;
    this->SafeZoneStorm = NULL;
}


