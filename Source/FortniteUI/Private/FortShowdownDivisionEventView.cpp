#include "FortShowdownDivisionEventView.h"

UFortShowdownDivisionEventView::UFortShowdownDivisionEventView() {
}

bool UFortShowdownDivisionEventView::IsDivisionEvent() const {
    return false;
}

int32 UFortShowdownDivisionEventView::GetTotalNumberOfDivisions() const {
    return 0;
}

int32 UFortShowdownDivisionEventView::GetTotalDivisionPoints() const {
    return 0;
}

int32 UFortShowdownDivisionEventView::GetRequiredAmountToAdvanceDivision() const {
    return 0;
}

int32 UFortShowdownDivisionEventView::GetNumericalDisplayAmountForNextDivision() const {
    return 0;
}

FText UFortShowdownDivisionEventView::GetLeagueDisplayNameByDivision(int32 InDivision) const {
    return FText::GetEmpty();
}

FText UFortShowdownDivisionEventView::GetLeagueDisplayName() const {
    return FText::GetEmpty();
}

int32 UFortShowdownDivisionEventView::GetDivisionRank() const {
    return 0;
}

int32 UFortShowdownDivisionEventView::GetAmountEarnedWithinDivision() const {
    return 0;
}


