#include "FortVariantPicker.h"

UFortVariantPicker::UFortVariantPicker() {
    this->bShowCapeRestriction = false;
    this->ConfigurationData = NULL;
    this->ScrollBox_Variants = NULL;
    this->EntryBox_VariantOptions = NULL;
    this->EntryBox_VariantOptions_NoScroll = NULL;
    this->Text_NoCapes = NULL;
    this->Container_Tabs = NULL;
    this->HBox_PrimaryTabNav = NULL;
    this->Text_PrimaryFilter = NULL;
    this->EntryBox_PrimaryTabs = NULL;
    this->ActionWidget_PrimaryTabLeft = NULL;
    this->ActionWidget_PrimaryTabRight = NULL;
    this->PrimaryTabButtonGroup = NULL;
    this->Container_SecondaryTabs = NULL;
    this->Text_SecondaryFilter = NULL;
    this->EntryBox_SecondaryTabs = NULL;
    this->ActionWidget_SecondaryTabLeft = NULL;
    this->ActionWidget_SecondaryTabRight = NULL;
    this->SecondaryTabButtonGroup = NULL;
}

void UFortVariantPicker::InitFromCosmeticItemDef(UAthenaCosmeticItemDefinition* InCosmeticItemDef) {
}

void UFortVariantPicker::InitFromCosmeticItem(UAthenaCosmeticAccountItem* InCosmeticItem) {
}

void UFortVariantPicker::HandleSecondaryTabSelectionChanged(UCommonButtonLegacy* TabButton, int32 TabIdx) {
}

void UFortVariantPicker::HandlePrimaryTabSelectionChanged(UCommonButtonLegacy* TabButton, int32 TabIdx) {
}

void UFortVariantPicker::Campaign_HandleSecondaryTabRight(bool& bPassThrough) {
}

void UFortVariantPicker::Campaign_HandleSecondaryTabLeft(bool& bPassThrough) {
}

void UFortVariantPicker::Campaign_HandlePrimaryTabRight(bool& bPassThrough) {
}

void UFortVariantPicker::Campaign_HandlePrimaryTabLeft(bool& bPassThrough) {
}


