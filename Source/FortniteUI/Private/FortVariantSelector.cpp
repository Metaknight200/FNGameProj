#include "FortVariantSelector.h"

UFortVariantSelector::UFortVariantSelector() {
    this->EntryBox_VariantOptions = NULL;
    this->Text_VariantName = NULL;
    this->CurrentSelectedVariant = NULL;
    this->Tile_ButtonGroup = NULL;
}

void UFortVariantSelector::HandleItemSelected(UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex) {
}

void UFortVariantSelector::HandleItemHovered(UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex) {
}


