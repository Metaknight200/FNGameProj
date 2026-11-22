#include "FortUnderwaterDamageComponent.h"

UFortUnderwaterDamageComponent::UFortUnderwaterDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GE_UnderwaterDamage = NULL;
    this->bIsUnderWater = false;
    this->UnderWaterStartTime = 0.00f;
    this->CurrentLevel = 0;
    this->bResetFromDBNO = false;
}

void UFortUnderwaterDamageComponent::SetUnderWater(bool bNewUnderWater) {
}


