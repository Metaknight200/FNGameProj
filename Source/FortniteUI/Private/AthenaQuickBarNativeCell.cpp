#include "AthenaQuickBarNativeCell.h"

UAthenaQuickBarNativeCell::UAthenaQuickBarNativeCell() {
    this->SelectionAnimLength_Seconds = 0.01f;
    this->ItemCount_OutlineAlphaFactor = 0.25f;
    this->GadgetFuelChargeCount_OutlineAlphaFactor = 0.25f;
    this->bShowSelectedWhenEmpty = false;
    this->bSupportsWideItems = false;
}

void UAthenaQuickBarNativeCell::SetItemToRepresent(UFortItem* InItemToRepresent) {
}

void UAthenaQuickBarNativeCell::SetIsSelected(bool bInSelected) {
}

void UAthenaQuickBarNativeCell::DesiredSizeOverride(float WidthOverride, float HeightOverride) {
}


