#include "FortAdvancedMeleeComponent.h"
#include "Net/UnrealNetwork.h"

UFortAdvancedMeleeComponent::UFortAdvancedMeleeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackRangePrimary = 0.00f;
    this->AttackRangeJab = 0.00f;
    this->AttackRangeSpin = 0.00f;
    this->AttackRangeSecondary = 0.00f;
}

void UFortAdvancedMeleeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAdvancedMeleeComponent, FightListHandles);
}


