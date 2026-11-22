#include "FortAthenaMutator_GalileoEquipment.h"

AFortAthenaMutator_GalileoEquipment::AFortAthenaMutator_GalileoEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantsAutoTDMActivation = false;
    this->StopDropsByApplyEffect = NULL;
    this->bShouldStopDropsAfterApplying = false;
    this->SlotToSwapToAfterGrant_DEPRECATE = 2;
}

void AFortAthenaMutator_GalileoEquipment::MarkPlayerLoadoutChoice(AFortPlayerState* State, int32 Choice) {
}

void AFortAthenaMutator_GalileoEquipment::ApplyPlayerLoadout(AFortPlayerState* State) {
}


