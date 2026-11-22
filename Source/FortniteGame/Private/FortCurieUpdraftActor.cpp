#include "FortCurieUpdraftActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

AFortCurieUpdraftActor::AFortCurieUpdraftActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
    this->bAllowInteract = false;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->PlayerPawnVortexLaunchMagnitude = 2000.00f;
    this->PlayerPawnVortexGravityFloorScalar = -0.40f;
    this->VehicleGravityMultiplier = -0.50f;
    this->ProjectileGravityMultiplier = -0.50f;
    this->ProjectileZLaunchMagnitude = 2000.00f;
    this->bGlanceProjectiles = false;
    this->ProjectileGlanceCurve = NULL;
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AFortCurieUpdraftActor::OnUpdraftEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortCurieUpdraftActor::OnUpdraftBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


