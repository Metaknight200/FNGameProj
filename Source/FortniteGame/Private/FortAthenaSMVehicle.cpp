#include "FortAthenaSMVehicle.h"
#include "Components/StaticMeshComponent.h"

AFortAthenaSMVehicle::AFortAthenaSMVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
}


