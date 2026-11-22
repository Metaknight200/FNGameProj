#include "MeltWidgetBase.h"

UMeltWidgetBase::UMeltWidgetBase() {
    this->CachedFillMutator = NULL;
}


AFortAthenaMutator_Fill* UMeltWidgetBase::GetFillMutator() const {
    return NULL;
}

float UMeltWidgetBase::CacheAndGetSeaLevel() {
    return 0.0f;
}


