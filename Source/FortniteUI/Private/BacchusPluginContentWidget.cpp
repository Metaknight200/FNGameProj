#include "BacchusPluginContentWidget.h"

UBacchusPluginContentWidget::UBacchusPluginContentWidget() {
    this->MyOverlay = NULL;
}

void UBacchusPluginContentWidget::OnPluginHUDWidgetRemoved(FGameplayTag WidgetTag) {
}

void UBacchusPluginContentWidget::OnPluginHUDWidgetAdded(FGameplayTag WidgetTag, TSoftClassPtr<UWidget> SoftWidgetClass) {
}


