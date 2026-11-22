#include "FortStatManagerTagHelperLib.h"

UFortStatManagerTagHelperLib::UFortStatManagerTagHelperLib() {
}

FFortStatManagerTag UFortStatManagerTagHelperLib::MakeStatManagerTag(const FGameplayTag& Tag) {
    return FFortStatManagerTag{};
}

FName UFortStatManagerTagHelperLib::GetEffectiveStatName(FFortStatManagerTag Tag) {
    return NAME_None;
}


