#include "BuildingGameplayActorChaser.h"
#include "Components/CapsuleComponent.h"
#include "FortProjectileMoveComp_Chase.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorChaser::ABuildingGameplayActorChaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->FortProjectileMoveComp_Chase = CreateDefaultSubobject<UFortProjectileMoveComp_Chase>(TEXT("FortProjectileMoveComp_Chase"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ForcedMovementTarget = NULL;
    this->ChaseTarget = NULL;
    this->DetachedNetCullDistanceSquared = 0.00f;
}

void ABuildingGameplayActorChaser::TargetSearchComplete(bool WasCancelled) {
}

void ABuildingGameplayActorChaser::StayAboveWater() {
}

void ABuildingGameplayActorChaser::ShouldCancelTargetSearch(bool& bShouldCancel) {
}

void ABuildingGameplayActorChaser::SetHealthBarMarkerPosition(float MarkerPosition) {
}

void ABuildingGameplayActorChaser::SetChaseTarget_Implementation(AActor* InChaseTarget, bool bInHomeOnChaseTarget, float InTargetReachedDistanceOverride) {
}

void ABuildingGameplayActorChaser::RandomNewPatrolDestination() {
}

void ABuildingGameplayActorChaser::PotentialTargetFound(AActor* InDetectedItem) {
}


void ABuildingGameplayActorChaser::OnRep_PatrolTurnData() {
}

void ABuildingGameplayActorChaser::MulticastNetCullDistance_Implementation(float DistanceSquared) {
}

void ABuildingGameplayActorChaser::LookForNewTarget() {
}

bool ABuildingGameplayActorChaser::IsValidTarget(UObject* PotentialTarget) {
    return false;
}

AActor* ABuildingGameplayActorChaser::GetChaseTarget() {
    return ChaseTarget;
}

void ABuildingGameplayActorChaser::ForcePlayerForwardMovement(AFortPlayerPawn* Player, float MaxSpeedScale) {
}

void ABuildingGameplayActorChaser::EndForcedPlayerForwardMovement() {
}

void ABuildingGameplayActorChaser::DetachedFromChaseTarget() {
}

void ABuildingGameplayActorChaser::ChaseTargetDamaged() {
}

void ABuildingGameplayActorChaser::AttachedToChaseTarget() {
}

void ABuildingGameplayActorChaser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorChaser, PatrolTurnData);
}


