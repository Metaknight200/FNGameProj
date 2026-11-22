#include "MoleSaboteurBarEntry.h"

UMoleSaboteurBarEntry::UMoleSaboteurBarEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->bTrackLowestCooldown = false;
    this->Timer_EntryVisuals = NULL;
}


