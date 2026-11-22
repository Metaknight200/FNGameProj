#include "FortProjectileMoveComp_Chase.h"

UFortProjectileMoveComp_Chase::UFortProjectileMoveComp_Chase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InternalChaseTarget = NULL;
    this->ChaseTargetReachedDistance = 0.00f;
}

void UFortProjectileMoveComp_Chase::SetChaseTarget_Implementation(USceneComponent* InChaseTarget, FName InSocketName, float InTargetReachedDistance, bool bInHomeOnChaseTarget) {
}

void UFortProjectileMoveComp_Chase::MulticastAddExternalForce_Implementation(const FChaseExternalForce& ExternalForce) {
}

void UFortProjectileMoveComp_Chase::ClearExternalForces() {
}

void UFortProjectileMoveComp_Chase::ClearChaseTarget_Implementation() {
}

void UFortProjectileMoveComp_Chase::AddExternalForce(const FChaseExternalForce& ExternalForce) {
}


