#include "FortProjectileFallingTrap.h"
#include "Components/StaticMeshComponent.h"

AFortProjectileFallingTrap::AFortProjectileFallingTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("Mesh Component"))) {
    this->CollisionComponent = (UPrimitiveComponent*)RootComponent;
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
}


