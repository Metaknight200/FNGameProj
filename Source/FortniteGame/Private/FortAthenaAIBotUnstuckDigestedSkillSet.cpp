#include "FortAthenaAIBotUnstuckDigestedSkillSet.h"

UFortAthenaAIBotUnstuckDigestedSkillSet::UFortAthenaAIBotUnstuckDigestedSkillSet() {
    this->bCanTeleportWhenStuck = true;
    this->bCanTeleportWhenStuckWithPlayerAround = true;
    this->MaxDistanceSqToPlayerToTeleport = 100000000.00f;
    this->PlayerToPhoebeAngleVisibilityConeToTeleport = 120.00f;
    this->TimeBetweenPartialPathToConsiderPathStuck = 20.00f;
    this->ConsecutivePartialPathCountToConsiderPathStuck = 3;
    this->DistanceSqBetweenBlockedPathToConsiderPathStuck = 100.00f;
    this->DistanceBetweenSampleToConsiderPathStuckInWater = 150.00f;
    this->TimeBetweenSampleToConsiderPathStuckInWater = 0.10f;
    this->DistanceBetweenSampleToConsiderPathStuckOnGround = 10.00f;
    this->TimeBetweenSampleToConsiderPathStuckOnGround = 0.50f;
    this->ConsecutiveBlockedPathCountToConsiderPathStuck = 3;
    this->MaxSafeZoneIndexToAllowTeleport = 0;
    this->TimeToBreakBlockingDoor = 2.00f;
    this->TimeToCloseBlockingDoor = 1.00f;
    this->RiverbedObstacleCollisionNormalThreshold = 0.40f;
    this->MaxSteeringDirectionAttempts = 0;
    this->SteeringAttemptDuration = 15.00f;
}


