#include "FortAbilityTask_ApplyRootMotionFallingBoostForce.h"
#include "Net/UnrealNetwork.h"

UFortAbilityTask_ApplyRootMotionFallingBoostForce::UFortAbilityTask_ApplyRootMotionFallingBoostForce() {
    this->VerticalImpulse = 0.00f;
    this->Duration = 0.50f;
    this->GravityScalar = 0.15f;
    this->MaxAcceleration = 700.00f;
    this->LateralFriction = 0.20f;
    this->MaxLateralSpeed = 800.00f;
}

void UFortAbilityTask_ApplyRootMotionFallingBoostForce::OnLandedCallback(const FHitResult& Hit) {
}

UFortAbilityTask_ApplyRootMotionFallingBoostForce* UFortAbilityTask_ApplyRootMotionFallingBoostForce::ApplyRootMotionFallingBoostForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewVerticalImpulse, float NewDuration, float NewGravityScalar, float NewMaxAcceleration, float NewLateralFriction, float NewMaxLateralSpeed) {
    return NULL;
}

void UFortAbilityTask_ApplyRootMotionFallingBoostForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, VerticalImpulse);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, Duration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, GravityScalar);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, MaxAcceleration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, LateralFriction);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, MaxLateralSpeed);
}


