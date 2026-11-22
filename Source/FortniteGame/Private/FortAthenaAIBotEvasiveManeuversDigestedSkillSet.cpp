#include "FortAthenaAIBotEvasiveManeuversDigestedSkillSet.h"

UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::UFortAthenaAIBotEvasiveManeuversDigestedSkillSet() {
    this->JumpDelay = 1.00f;
    this->JumpRandomDeviationDelay = 0.50f;
    this->CrouchDelay = 2.00f;
    this->CrouchRandomDeviationDelay = 0.50f;
    this->JetpackStrafeDelay = 1.00f;
    this->JetpackStrafeRandomDeviationDelay = 0.50f;
    this->DodgeDelay = 0.00f;
    this->DodgeRandomDeviationDelay = 0.00f;
    this->CrouchOverlayWeight = 0.30f;
    this->JumpOverlayWeight = 0.10f;
    this->JetpackStrafeOverlayWeight = 0.30f;
    this->NoOverlayWeight = 0.60f;
    this->DodgeWeight = 0.80f;
    this->DodgeDistanceMax = 150.00f;
    this->DodgeDistanceMin = 100.00f;
    this->JetpackStrafeDistanceMax = 500.00f;
    this->JetpackStrafeDistanceMin = 300.00f;
    this->JetpackStrafeActivationTime = 0.25f;
    this->JetpackStrafeActivationTimeRandomDeviation = 0.05f;
    this->JetpackStrafeTime = 1.50f;
    this->JetpackStrafeTimeRandomDeviation = 0.50f;
    this->CrouchTimeMax = 4.00f;
    this->CrouchTimeMin = 2.00f;
    this->DodgeMaxDistanceSquared = 100000000.00f;
    this->CrouchMaxDistanceSquared = 100000000.00f;
    this->JumpMaxDistanceSquared = 100000000.00f;
    this->JetpackStrafeMaxDistanceSquared = 100000000.00f;
    this->AvoidProjectilesReactionDistanceSqr = 4000000.00f;
    this->AvoidProjectilesReactionTimeMin = 0.00f;
    this->AvoidProjectilesReactionTimeMax = 1.50f;
    this->AvoidProjectilesEvasiveDistanceMin = 500.00f;
    this->AvoidProjectilesEvasiveDistanceMax = 1000.00f;
    this->AvoidPhysicsObjectsReactionDistanceMin = 500.00f;
    this->AvoidPhysicsObjectsReactionDistanceMax = 1000.00f;
    this->AvoidPhysicsObjectsSpeedMin = 300.00f;
    this->AvoidPhysicsObjectsSpeedMax = 1000.00f;
}


