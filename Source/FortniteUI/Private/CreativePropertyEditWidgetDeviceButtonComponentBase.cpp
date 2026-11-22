#include "CreativePropertyEditWidgetDeviceButtonComponentBase.h"

UCreativePropertyEditWidgetDeviceButtonComponentBase::UCreativePropertyEditWidgetDeviceButtonComponentBase() {
    this->DeviceButtonComponent = NULL;
}

UFortCreativeDeviceButtonComponent* UCreativePropertyEditWidgetDeviceButtonComponentBase::GetDeviceButtonComponent() const {
    return DeviceButtonComponent;
}

FText UCreativePropertyEditWidgetDeviceButtonComponentBase::GetButtonLabel() const {
    return FText::GetEmpty();
}


