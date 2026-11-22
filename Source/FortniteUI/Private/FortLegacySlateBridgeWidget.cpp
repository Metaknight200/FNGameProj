#include "FortLegacySlateBridgeWidget.h"

UFortLegacySlateBridgeWidget::UFortLegacySlateBridgeWidget() {
    this->ContainedWidgetType = EFortLegacySlateWidget::None;
    this->DPIScaleFactor = 1.00f;
}

void UFortLegacySlateBridgeWidget::UpdateSlateWidget(EFortLegacySlateWidget SlateWidgetType) {
}

void UFortLegacySlateBridgeWidget::SetOnCloseHandler(const FOnCloseLegacyWidget& OnCloseHandler) {
}


