#include "CreativePropertyKnobEntryBase.h"

UCreativePropertyKnobEntryBase::UCreativePropertyKnobEntryBase() {
    this->EntryEditWidget = NULL;
    this->FallbackEditWidget = NULL;
    this->FallbackUserOptionEditWidget = NULL;
    this->FallbackStringUserOptionEditWidget = NULL;
    this->FallbackMusicUserOptionEditWidget = NULL;
    this->FallbackMessageComponentEditWidget = NULL;
    this->FallbackDeviceButtonComponentEditWidget = NULL;
    this->FallbackColorUserOptionEditWidget = NULL;
    this->PanelWidget_SummaryBox = NULL;
    this->PanelWidget_ContentBox = NULL;
    this->TextBlock_EntryDisplayName = NULL;
    this->TextBlock_EntryDisplayedValue = NULL;
    this->TextBlock_EntryDisplayedDebugData = NULL;
    this->Switcher_Content = NULL;
    this->NamedSlot_ExtraContent = NULL;
}

void UCreativePropertyKnobEntryBase::SetIsModified(bool bModified) {
}

void UCreativePropertyKnobEntryBase::InternalOnEditWidgetModified(bool bModified) {
}

bool UCreativePropertyKnobEntryBase::GetIsModified() {
    return false;
}

void UCreativePropertyKnobEntryBase::ForceFocusWidget() {
}

void UCreativePropertyKnobEntryBase::DeselectEditWidget() {
}

void UCreativePropertyKnobEntryBase::ClearModified() {
}




