#include "FortBotPawn.h"

AFortBotPawn::AFortBotPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VocalChords.AddDefaulted(1);
    this->AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
    this->bCanUseDoors = true;
    this->bCanUseShootingHotspots = true;
}


