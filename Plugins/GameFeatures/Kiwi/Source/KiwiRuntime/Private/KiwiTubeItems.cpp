#include "KiwiTubeItems.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AKiwiTubeItems::AKiwiTubeItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->SplineRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SplineRoot"));
    this->SharedSpline = CreateDefaultSubobject<USplineComponent>(TEXT("SharedSpline"));
    this->SplineBranchingPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SplineBranchingPoint"));
    this->SplineBranchForward = CreateDefaultSubobject<USplineComponent>(TEXT("SplineBranchForward"));
    this->SplineBranchBackward = CreateDefaultSubobject<USplineComponent>(TEXT("SplineBranchBackward"));
    this->RecentlyRenderedTolerance = 0.50f;
    this->bOnlyUpdateComponentsOnForwardBranch = false;
    this->InitialFlowDirection = ETubeFlowDirection::Forward;
    this->bEnableCollisionOnItems = false;
    this->bEnableMovementAudioOnItems = true;
    this->MovementSoundFadeInDuration = 0.10f;
    this->MovementSoundFadeOutDuration = 0.50f;
    this->bUseBranchingPath = false;
    this->bLaunchItemsFromForwardBranch = false;
    this->LifetimeAfterLaunch = 10.00f;
    this->VelocityRampDistance = 500.00f;
    this->LaunchVelocity = 1000.00f;
    this->AngularLaunchVelocity = 30.00f;
    this->bUseAccelAndDecel = false;
    this->AccelerationSpeed = 500.00f;
    this->DecelerationSpeed = 500.00f;
    this->RotationAccelerationSpeed = 60.00f;
    this->RotationDecelerationSpeed = 60.00f;
    this->CurrentFlowDirection = ETubeFlowDirection::None;
    this->SharedSpline->SetupAttachment(SplineRoot);
    this->SplineBranchBackward->SetupAttachment(SplineBranchingPoint);
    this->SplineBranchForward->SetupAttachment(SplineBranchingPoint);
    this->SplineBranchingPoint->SetupAttachment(SplineRoot);
    this->SplineRoot->SetupAttachment(RootComponent);
}

void AKiwiTubeItems::UpdateItemMovementAlongPath() {
}

void AKiwiTubeItems::UpdateCollisionOnItems() {
}

void AKiwiTubeItems::ToggleFlowDirection() {
}

void AKiwiTubeItems::StopTubeFlow() {
}

void AKiwiTubeItems::SetFlowDirection(const ETubeFlowDirection NewFlowDirection) {
}

void AKiwiTubeItems::OnTubeMeshComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


bool AKiwiTubeItems::CanEnableCollisionOnItems_Implementation() const {
    return false;
}

void AKiwiTubeItems::BeginTubeFlow() {
}


