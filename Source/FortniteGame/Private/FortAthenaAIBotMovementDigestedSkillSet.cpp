#include "FortAthenaAIBotMovementDigestedSkillSet.h"

UFortAthenaAIBotMovementDigestedSkillSet::UFortAthenaAIBotMovementDigestedSkillSet() {
    this->SlowDownDistance = 800.00f;
    this->TraversalSpeedEstimation = 300.00f;
    this->TraversalSpeedEstimationWithThreat = 200.00f;
    this->GliderDeployMinAngle = 20.00f;
    this->GliderDeployMaxAngle = 25.00f;
    this->GliderNoiseMinDistance = 0.00f;
    this->GliderNoiseMaxDistance = 1000.00f;
    this->GliderNoiseMinDelay = 3.00f;
    this->GliderNoiseMaxDelay = 10.00f;
    this->GliderNoiseDistanceTreshold = 0.00f;
    this->GliderStopRotationDistance = 0.00f;
    this->JumpOffMinAngle = 85.00f;
    this->JumpOffMaxAngle = 95.00f;
    this->MaxPatrolDistance = 9000.00f;
    this->MaxPatrolDistanceRandomDeviation = 3000.00f;
    this->WobbleProbability = 1.00f;
    this->MaxDelayBetweenWobblingMovement = 2.00f;
    this->MaxDelayBetweenWobblingMovementRandomDeviation = 1.00f;
    this->bAllowSwimWobble = false;
    this->MaxWobblingDuration = 3.50f;
    this->MaxWobblingDurationRandomDeviation = 1.00f;
    this->MaxWobblingIntensity = 0.40f;
    this->WobblingIntensityDeviation = 0.00f;
    this->MaxWobblingFrequency = 2.50f;
    this->WobblingFrequencyDeviation = 0.00f;
    this->WobblingStickToPathCorridorStrength = 1.00f;
    this->MaxAfterLaunchedPauseTime = 0.50f;
    this->MaxAfterLaunchedFromVortexPauseTime = 2.00f;
    this->AfterLaunchedPauseTimeDeviation = 0.25f;
    this->bSteerMovementWhenLaunched = true;
    this->SteerMovementWhenLaunchedDirectionUpdateTime = 5.00f;
    this->MaxReactionTimeToDangerZone = 0.50f;
    this->MaxReactionTimeToDangerZoneDeviation = 0.25f;
    this->bLimitBlockingObstacleAngle = false;
    this->SwimSprintJumpDelay = 4.00f;
    this->SwimSprintJumpDelayDeviation = 1.50f;
    this->SwimUnblockJumpHeightThreshold = 100.00f;
    this->bSwimSprintJumpNav2D = true;
    this->MoveToRangeAttackMinOffset = 0.00f;
    this->MoveToRangeAttackMaxOffset = 0.00f;
    this->LKPMinOffset = 0.00f;
    this->LKPMaxOffset = 0.00f;
    this->SandTunnelJumpMinTime = 3.00f;
    this->SandTunnelJumpMaxTime = 5.00f;
    this->SandTunnelBurrowedAndHiddenChance = 0.50f;
    this->SandTunnelBurrowedAndHiddenMinTime = 15.00f;
    this->SandTunnelBurrowedAndHiddenMaxTime = 30.00f;
}


