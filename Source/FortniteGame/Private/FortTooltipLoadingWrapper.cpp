#include "FortTooltipLoadingWrapper.h"

UFortTooltipLoadingWrapper::UFortTooltipLoadingWrapper() {
    this->SourceObject = NULL;
    this->TooltipInstance = NULL;
}

void UFortTooltipLoadingWrapper::HandleTooltipAssetLoaded() {
}

bool UFortTooltipLoadingWrapper::AreAssetsLoaded() const {
    return false;
}


