#include "FortAthenaMutator_SiphonValues.h"

AFortAthenaMutator_SiphonValues::AFortAthenaMutator_SiphonValues(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->HealthSiphonValue = 0.00f;
    this->WoodSiphonValue = 0.00f;
    this->StoneSiphonValue = 0.00f;
    this->MetalSiphonValue = 0.00f;
    this->GoldSiphonValue = 0.00f;
}


