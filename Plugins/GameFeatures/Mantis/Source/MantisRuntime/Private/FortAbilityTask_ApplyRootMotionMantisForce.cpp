#include "FortAbilityTask_ApplyRootMotionMantisForce.h"
#include "Net/UnrealNetwork.h"

UFortAbilityTask_ApplyRootMotionMantisForce::UFortAbilityTask_ApplyRootMotionMantisForce() {
    this->Duration = 0.00f;
    this->TechniqueMontage = NULL;
}

void UFortAbilityTask_ApplyRootMotionMantisForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionMantisForce, Duration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionMantisForce, TechniqueMontage);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionMantisForce, WarpInfo);
}


