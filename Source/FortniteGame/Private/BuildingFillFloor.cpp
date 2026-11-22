#include "BuildingFillFloor.h"
#include "Net/UnrealNetwork.h"

ABuildingFillFloor::ABuildingFillFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bIsDynamic = true;
    this->bIsDynamicOnDedicatedServer = true;
    this->StepIndex = -1;
    this->FloorZ = 0.00f;
    this->InitialDelay = 0.00f;
    this->NumStepsToUse = 0;
    this->FloorMovementSpeed = 0.00f;
    this->bIsMoving = false;
}

void ABuildingFillFloor::StopMovement() {
}

void ABuildingFillFloor::StartMovement_Implementation() {
}



void ABuildingFillFloor::OnRep_StepIndex() {
}

void ABuildingFillFloor::OnRep_IsMoving() {
}

void ABuildingFillFloor::OnRep_FloorZ() {
}

void ABuildingFillFloor::OnLavaOverlap(AFortPlayerPawn* Pawn) {
}


void ABuildingFillFloor::InterpToStopCallback(const FHitResult& ImpactResult, float Time) {
}

bool ABuildingFillFloor::GetFloorPositionFromStep(int32 Step, float& MoveTime, float& Height, float& PostMoveDelay) const {
    return false;
}

void ABuildingFillFloor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFillFloor, StepIndex);
    DOREPLIFETIME(ABuildingFillFloor, FloorZ);
    DOREPLIFETIME(ABuildingFillFloor, FloorMovementSpeed);
    DOREPLIFETIME(ABuildingFillFloor, bIsMoving);
}


