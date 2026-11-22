#include "FortProjectileMoveComp_Drunk.h"
#include "Net/UnrealNetwork.h"

UFortProjectileMoveComp_Drunk::UFortProjectileMoveComp_Drunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrunkTravelTime = 0.00f;
    this->bDrunkDirectionChange = false;
    this->RandSeed = -1;
    this->DrunkDirectionChangeTimer = 0.00f;
    this->DrunkHomingDirectionChangeTimer = 0.00f;
    this->DrunkBlendOutMaxRange = 0.00f;
    this->bDoingTimeBasedBlendOut = false;
    this->CachedBlendAlpha = 0.00f;
}

void UFortProjectileMoveComp_Drunk::SetDrunkConfig(const FProjectileMovementDrunkConfig& NewConfig) {
}

void UFortProjectileMoveComp_Drunk::OnRep_RandSeed() {
}

void UFortProjectileMoveComp_Drunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortProjectileMoveComp_Drunk, RandSeed);
}


