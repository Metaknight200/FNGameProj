#include "BuildingProp_QuestGlyph.h"

ABuildingProp_QuestGlyph::ABuildingProp_QuestGlyph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestDef = NULL;
    this->bShowContextInfo = true;
    this->bContextInfoUnlocked = false;
    this->ActivationRange = 384.00f;
}



