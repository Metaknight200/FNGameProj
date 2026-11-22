#include "ProceduralScatterTileSettings.h"

FProceduralScatterTileSettings::FProceduralScatterTileSettings() {
    this->NumUniqueTiles = 0;
    this->TileSize = 0.00f;
    this->TileOverlapPercentage = 0.00f;
    this->MinimumQuadTreeSize = 0.00f;
    this->RandomGenerator = EProceduralScatterTileRandomGenerator::PseudoRandom;
}

