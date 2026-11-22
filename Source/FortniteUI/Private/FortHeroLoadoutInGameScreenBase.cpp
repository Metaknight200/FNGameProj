#include "FortHeroLoadoutInGameScreenBase.h"

UFortHeroLoadoutInGameScreenBase::UFortHeroLoadoutInGameScreenBase() {
    this->TileClass = NULL;
    this->ScrollBox_Content = NULL;
    this->ItemDetailsHostPanel_Header = NULL;
    this->GridPanel_Perks = NULL;
    this->GadgetTile_Gadget1 = NULL;
    this->GadgetTile_Gadget2 = NULL;
}


UFortGadgetItemDefinition* UFortHeroLoadoutInGameScreenBase::GetGadgetDefinitionBySlot(int32 SlotIndex) const {
    return NULL;
}


