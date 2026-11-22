#include "MoleAssignedTaskContainerWidget.h"

UMoleAssignedTaskContainerWidget::UMoleAssignedTaskContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TaskWidgetEntryBox = NULL;
    this->CachedOwningTaskComponent = NULL;
}

void UMoleAssignedTaskContainerWidget::OnActiveTasksChanged(bool bFrameDefer) {
}


