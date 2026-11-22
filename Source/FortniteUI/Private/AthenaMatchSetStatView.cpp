#include "AthenaMatchSetStatView.h"

UAthenaMatchSetStatView::UAthenaMatchSetStatView() {
    this->OwningSeason = NULL;
}

UAthenaSeasonStats* UAthenaMatchSetStatView::GetOwningSeason() {
    return OwningSeason;
}

TArray<UAthenaMatchStatView*> UAthenaMatchSetStatView::GetBestMatchViews() const {
    return TArray<UAthenaMatchStatView*>();
}


