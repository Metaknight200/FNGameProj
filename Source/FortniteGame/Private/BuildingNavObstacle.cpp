#include "BuildingNavObstacle.h"

FBuildingNavObstacle::FBuildingNavObstacle() {
    // Initialize reflected value fields omitted by the dump.
    this->LocalBounds = FBox(ForceInit);
    this->ObstacleType = EBuildingNavObstacleType::UnwalkableAll;
}

