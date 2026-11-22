#include "FortHeroLoadoutGadgetTileBase.h"

UFortHeroLoadoutGadgetTileBase::UFortHeroLoadoutGadgetTileBase() {
    this->Text_GadgetName = NULL;
    this->Image_Icon = NULL;
    this->RichText_Description = NULL;
    this->GadgetToRepresent = NULL;
}

void UFortHeroLoadoutGadgetTileBase::SetGadgetToRepresent(const UFortGadgetItemDefinition* GadgetItemDefinition) {
}



