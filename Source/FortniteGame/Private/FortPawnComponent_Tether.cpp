#include "FortPawnComponent_Tether.h"
#include "Net/UnrealNetwork.h"

UFortPawnComponent_Tether::UFortPawnComponent_Tether(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TetherPawn = NULL;
    this->TetherPawnSavedCullDistanceSquared = -1.00f;
    this->bTetheredWithoutWeapon = false;
    this->bPressedTetheredBoost = false;
    this->bAllowVehicleTether = false;
    this->TetherSlackLength = 650.00f;
    this->TetherCatchupLength = 800.00f;
    this->TetherViewPlayerLength = 1500.00f;
    this->TetherBreakLength = 5000.00f;
    this->TetheredSpeedToBackOff = 1300.00f;
    this->TetheredMaxSpeed = 3000.00f;
    this->TetheredMovementAccelBackOff = 750.00f;
    this->TetheredMovementAccelNudge = 0.00f;
    this->TetheredMovementGroundFrictionMultiplier = 0.01f;
    this->TetheredMovementWaterFrictionMultiplier = 2.00f;
    this->TetheredMovementMaxAccel = 5000.00f;
    this->SetViewTargetToTetherPawnDelayTime = 0.30f;
    this->SetViewTargetToTetherPawnBlendTime = 0.50f;
    this->TetherJumpServerCorrectionExpansionTime = 1.00f;
    this->TetherInitialYankLaunchZ = 2000.00f;
    this->TetherRopeMesh = NULL;
    this->TetherRopeMaterial = NULL;
    this->TetherRopeComp = NULL;
    this->TetherRopeRodMesh = NULL;
    this->TetherRopeRodComp = NULL;
    this->TetherRightInput = 0.00f;
    this->TetheredInputComponent = NULL;
    this->TetheredExitHoldTime = 1.00f;
}

void UFortPawnComponent_Tether::TetheredExitReleased() {
}

void UFortPawnComponent_Tether::TetheredExitPressed() {
}

void UFortPawnComponent_Tether::TetheredBoostReleased() {
}

void UFortPawnComponent_Tether::TetheredBoostPressed() {
}

void UFortPawnComponent_Tether::SetViewTargetToTetherPawn() {
}

void UFortPawnComponent_Tether::ServerRequestTetherJump_Implementation() {
}

void UFortPawnComponent_Tether::ServerReleaseTether_Implementation() {
}

void UFortPawnComponent_Tether::OnRep_TetherPawn(APawn* OldTetherPawn) {
}

void UFortPawnComponent_Tether::OnRep_TetheredWithoutWeapon() {
}

void UFortPawnComponent_Tether::GamepadTetheredExitAndReloadReleased() {
}

void UFortPawnComponent_Tether::DelayedSetViewTargetToTetherPawn() {
}

void UFortPawnComponent_Tether::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnComponent_Tether, TetherPawn);
    DOREPLIFETIME(UFortPawnComponent_Tether, bTetheredWithoutWeapon);
}


