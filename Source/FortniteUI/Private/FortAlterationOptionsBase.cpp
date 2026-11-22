#include "FortAlterationOptionsBase.h"

UFortAlterationOptionsBase::UFortAlterationOptionsBase() {
    this->AlterationOptionClass = NULL;
    this->AlterationOptionButtons = NULL;
    this->Item = NULL;
    this->SlotIndex = 0;
    this->bUpgradeOptionExists = false;
}

void UFortAlterationOptionsBase::ProcessAlterationOptions(bool bIntroAlterations) {
}



bool UFortAlterationOptionsBase::IsValidAlterationSlot() const {
    return false;
}

void UFortAlterationOptionsBase::HandleAlterationsOptionSelected(UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex) {
}

void UFortAlterationOptionsBase::HandleAlterationsOptionHovered(UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex) {
}

bool UFortAlterationOptionsBase::DoAlterationOptionsExist(EFortAlterationOptionType OptionType) const {
    return false;
}


