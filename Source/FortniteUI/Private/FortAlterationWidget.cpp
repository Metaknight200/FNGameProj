#include "FortAlterationWidget.h"

UFortAlterationWidget::UFortAlterationWidget() {
    this->MaxPipCount = 0.00f;
    this->AlterationInfo = NULL;
}

void UFortAlterationWidget::Setup(UFortAlterationInfo* InAlterationInfo) {
}


UFortAlterationInfo* UFortAlterationWidget::GetAlterationInfo() const {
    return AlterationInfo;
}


