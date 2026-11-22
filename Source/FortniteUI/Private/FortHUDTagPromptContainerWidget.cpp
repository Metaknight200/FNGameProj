#include "FortHUDTagPromptContainerWidget.h"

UFortHUDTagPromptContainerWidget::UFortHUDTagPromptContainerWidget() {
    this->TagMappingData = NULL;
    this->CoolDownTime = 5.00f;
    this->OverlayWidget = NULL;
}

void UFortHUDTagPromptContainerWidget::RequestPromptDataActivation(const FFortHUDTagPromptData& PromptData, const FGameplayTag& Tag) {
}

void UFortHUDTagPromptContainerWidget::OpenWidget(const FFortHUDTagPromptData& PrompData) {
}

void UFortHUDTagPromptContainerWidget::OnWidgetBaseOpenedOrClosed(bool bNewlyOpened) {
}

void UFortHUDTagPromptContainerWidget::CloseWidget() {
}


