#include "SafeZoneLocation.h"
#include "Components/StaticMeshComponent.h"

ASafeZoneLocation::ASafeZoneLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewShieldRing = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield Ring"));
    this->PreviewZScale = 1.00f;
    this->SafeZoneRadius = 30000.00f;
}


