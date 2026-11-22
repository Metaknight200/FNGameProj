#include "FortAlterationButtonWidget.h"

UFortAlterationButtonWidget::UFortAlterationButtonWidget() {
    this->AlterationInfo = NULL;
}

void UFortAlterationButtonWidget::Setup(UFortAlterationInfo* InAlterationInfo) {
}


UFortAlterationInfo* UFortAlterationButtonWidget::GetAlterationInfo() const {
    return AlterationInfo;
}


