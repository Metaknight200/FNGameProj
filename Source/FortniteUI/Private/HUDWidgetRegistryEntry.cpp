#include "HUDWidgetRegistryEntry.h"

FHUDWidgetRegistryEntry::FHUDWidgetRegistryEntry() {
    this->bIsMandatory = false;
    this->MandatoryOnScreenPercent = 0.00f;
    this->MaximumAmountOfInstances = 0;
    this->ZOrder = 0;
    this->HUDWidgetClass = NULL;
    this->HUDWidgetProxyClass = NULL;
    this->HUDWidgetPreviewClass = NULL;
}

