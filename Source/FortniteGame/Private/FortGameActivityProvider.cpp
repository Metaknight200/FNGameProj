#include "FortGameActivityProvider.h"

UFortGameActivityProvider::UFortGameActivityProvider() {
    this->OwningPlayer = NULL;
}

TArray<FCreativeIslandDescriptionTag> UFortGameActivityProvider::GetActivityDescriptionTags(const UFortGameActivity* Activity) {
    return TArray<FCreativeIslandDescriptionTag>();
}


