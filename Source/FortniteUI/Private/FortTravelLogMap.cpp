#include "FortTravelLogMap.h"

UFortTravelLogMap::UFortTravelLogMap() : UUserWidget(FObjectInitializer::Get()) {
    this->MapSize = 512.00f;
    this->CurrentTimeFraction = 0.00f;
    this->DistanceToCoalescePositions = 12000;
}

void UFortTravelLogMap::InitializeFromTravelRecord(const FAthenaTravelRecord& Record) {
}


