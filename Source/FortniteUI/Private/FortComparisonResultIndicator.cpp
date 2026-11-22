#include "FortComparisonResultIndicator.h"

UFortComparisonResultIndicator::UFortComparisonResultIndicator() {
    this->bShouldCollapseWhenNotShown = false;
    this->ComparisonResult = EFortBuffState::NoChange;
}

void UFortComparisonResultIndicator::SetComparisonResult(EFortBuffState NewComparisonResult) {
}


