#include "MegaStormCircle.h"

FMegaStormCircle::FMegaStormCircle() {
    // Initialize reflected value fields omitted by the dump.
    this->WorldCenter = FVector::ZeroVector;
    this->NumCellsFromCenter = 0;
    this->CurrentQuadrant = 0;
    this->RadiusInGridCells = 0;
    this->XAdvanceAccumulation = 0;
    this->YAdvanceAccumulation = 0;
    this->GridRadiusSquaredX4 = 0;
    this->NumPlots = 0;
    this->WorldRadius = 0.00f;
    this->MegaStormState = EMegaStormState::GatheringActorList;
}

