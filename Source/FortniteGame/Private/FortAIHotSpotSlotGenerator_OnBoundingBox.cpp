#include "FortAIHotSpotSlotGenerator_OnBoundingBox.h"
#include "FortAIHotSpotSlot.h"

UFortAIHotSpotSlotGenerator_OnBoundingBox::UFortAIHotSpotSlotGenerator_OnBoundingBox() {
    this->SlotClass = UFortAIHotSpotSlot::StaticClass();
    this->DistanceForRangedSlots = 200.00f;
    this->DistanceForHugeSlots = 70.00f;
}


