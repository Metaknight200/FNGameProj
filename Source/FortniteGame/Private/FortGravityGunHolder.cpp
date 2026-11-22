#include "FortGravityGunHolder.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFortGravityGunHolder::AFortGravityGunHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
    this->OwningPlayer = NULL;
    this->HeldObject = NULL;
    this->HeldObjectProjectileClass = NULL;
    this->CachedLayeredAudioComponent = NULL;
    this->PivotComponent = (USceneComponent*)RootComponent;
    this->RingPivotComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RingPivot"));
    this->RingSMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
    this->Ring1SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring1"));
    this->Ring2SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring2"));
    this->Ring3SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring3"));
    this->CurrentState = EGravityGunHolderState::Invalid;
    this->ObjectTypeHeld = EGravityGunHolderObjectType::Invalid;
    this->bAimingDownSights = false;
    this->MaxAxisLength = 0.00f;
    this->CurrentRingSizeInUnits = 0.00f;
    this->TimeWhenStartedHolding = 0.00f;
    this->LaunchSpeedMultiplier = 1.00f;
    this->VehicleLaunchSpeedMultiplier = 0.80f;
    this->bUseCameraRightAsReference = false;
    this->bAllowRotation = true;
    this->CurrentRotationAxisIndex = EGravityGunHolderRotationAxis::XZ;
    this->TrajectorIndicator = NULL;
    this->TrajectorySplineTraceChannel = ECC_WorldStatic;
    this->CachedHoldForwardDistance = 130.00f;
    this->CachedHoldUpDistance = 150.00f;
    this->CachedHoldUpDistanceWhileADS = 80.00f;
    this->CachedTargetRotationTorqueDeltaTimeScalar = 6.00f;
    this->Ring1SMComponent->SetupAttachment(RingSMComponent);
    this->Ring2SMComponent->SetupAttachment(RingSMComponent);
    this->Ring3SMComponent->SetupAttachment(RingSMComponent);
    this->RingPivotComponent->SetupAttachment(RootComponent);
    this->RingSMComponent->SetupAttachment(RingPivotComponent);
}


void AFortGravityGunHolder::UpdateAudio_Implementation(const float DeltaSeconds) {
}

void AFortGravityGunHolder::SetHeldObject(AActor* InHeldObject) {
}

void AFortGravityGunHolder::LogHeldObjectDestroyed(AActor* InHeldObjectDestroying) {
}

void AFortGravityGunHolder::LogHeldBuildingObjectDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortGravityGunHolder::HeldObjectHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFortGravityGunHolder::HandleThrowHeldObject() {
}


void AFortGravityGunHolder::CalculateLaunchVelocity(const bool bDropped, float& OutThrowSpeed, FVector& OutVelocity) {
}

AActor* AFortGravityGunHolder::AttemptCloneActorToHold(AActor* InActor) const {
    return NULL;
}


