#include "CreativePropertyEditWidgetDialogBase.h"

UCreativePropertyEditWidgetDialogBase::UCreativePropertyEditWidgetDialogBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PanelSlot = NULL;
    this->bIsOpen = false;
    this->WaitOnAnimation = false;
}

void UCreativePropertyEditWidgetDialogBase::Open() {
}

void UCreativePropertyEditWidgetDialogBase::Close() {
}




