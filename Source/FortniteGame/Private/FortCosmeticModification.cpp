#include "FortCosmeticModification.h"

FFortCosmeticModification::FFortCosmeticModification() {
    // Initialize reflected value fields omitted by the dump.
    this->ColorAlteration = FLinearColor::Transparent;
    this->DecalColourAlterationEnd = FLinearColor::Transparent;
    this->DecalColourAlterationStart = FLinearColor::Transparent;
    this->ShellColourAlteration = FLinearColor::Transparent;
    this->bModifyColor = false;
    this->bModifyDecalColour = false;
    this->bModifyShellColour = false;
}

