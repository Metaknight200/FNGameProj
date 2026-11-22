#include "FortHeroLoadoutScreenBase.h"

UFortHeroLoadoutScreenBase::UFortHeroLoadoutScreenBase() {
}


bool UFortHeroLoadoutScreenBase::IsLoadoutSwitchingAllowed() const {
    return false;
}

bool UFortHeroLoadoutScreenBase::GetIsReadOnly() const {
    return false;
}


