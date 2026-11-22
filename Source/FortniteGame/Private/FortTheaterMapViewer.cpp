#include "FortTheaterMapViewer.h"

AFortTheaterMapViewer::AFortTheaterMapViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->HexTileWidth = 591.20f;
    this->HexTileHeight = 512.00f;
    this->CurrentSelectedTile = NULL;
    this->CurrentFocusedTile = NULL;
    this->NumValidHexMapTiles = 0;
    this->CurrentTileIndex = 0;
    this->bDisplayTheaterComplete = false;
}

void AFortTheaterMapViewer::HandleMarkedQuestsChanged() {
}


