#include "HUDLayoutToolV2_WidgetPreview.h"

UHUDLayoutToolV2_WidgetPreview::UHUDLayoutToolV2_WidgetPreview() {
    this->CreateHUDWidgetOperation = NULL;
    this->DragDistanceThresholdMillimeters = 2.50f;
    this->TextBlock_InstancesLeftCounter = NULL;
    this->Border_Background = NULL;
}

void UHUDLayoutToolV2_WidgetPreview::HandleOperationDrop(UDragDropOperation* Operation) {
}


