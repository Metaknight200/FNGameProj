#include "FortAthenaSimpleCar.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortAthenaSimpleCarMovementComponent.h"

AFortAthenaSimpleCar::AFortAthenaSimpleCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheeledVehicleMovementComponent = CreateDefaultSubobject<UFortAthenaSimpleCarMovementComponent>(TEXT("FortAthenaWheeledVehicleMovementComponent0"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
}


