#include "SeasonPassPageWidget.h"

USeasonPassPageWidget::USeasonPassPageWidget() {
}

bool USeasonPassPageWidget::ShouldPlayInto(int32 FirstLevel) {
    return false;
}


bool USeasonPassPageWidget::OwnsSeasonPass() const {
    return false;
}




int32 USeasonPassPageWidget::GetCurrentSeasonNumber() const {
    return 0;
}



