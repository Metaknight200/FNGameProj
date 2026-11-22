#include "TileDefinition.h"

FTileDefinition::FTileDefinition() {
    // Initialize reflected value fields omitted by the dump.
    this->Countdown = FDateTime(0);
    this->CountdownType = EDateType::None;
    this->IsVisible = false;
}

