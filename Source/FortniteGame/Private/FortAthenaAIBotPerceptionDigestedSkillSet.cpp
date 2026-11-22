#include "FortAthenaAIBotPerceptionDigestedSkillSet.h"

UFortAthenaAIBotPerceptionDigestedSkillSet::UFortAthenaAIBotPerceptionDigestedSkillSet() {
    this->SightReactionTime = 0.50f;
    this->SightRandomDeviation = 0.20f;
    this->LoseSightTime = 1.00f;
    this->LoseSightRandomDeviation = 0.20f;
    this->SightSuspicionTime = 0.20f;
    this->SightSuspicionRandomDeviation = 0.05f;
    this->EnemyMarkedReactionTime = 1.00f;
    this->EnemyMarkedReactionRandomDeviation = 0.20f;
    this->ChancesToHelpOnMarkedEnemy = 1.00f;
    this->DamageReactionTime = 1.00f;
    this->DamageRandomDeviation = 0.20f;
    this->HearingReactionTime = 1.50f;
    this->HearingRandomDeviation = 0.20f;
    this->MaxHearingLocationError = 1000.00f;
    this->ThreatDamageWeight = 0.00f;
    this->ThreatDamageWeightMultiplier = 10.00f;
    this->ObstacleDistanceOverrideTargetingSq = 22500.00f;
    this->ObstacleForgetDistanceSq = 22500.00f;
    this->DBNOWeightModifier = 1000.00f;
    this->AlertedAccumulatedLoudnessLimit = 100.00f;
    this->LKPAccumulatedLoudnessLimit = 100.00f;
    this->EnemyMarkingDelay = 5.00f;
    this->EnemyMarkingDelayRandomDeviation = 3.00f;
    this->AdditionalMarkedEnemyLKPForgetTime = 5.00f;
    this->AdditionalMarkedEnemyLKPForgetDistance = 5000.00f;
    this->ProjectileThreatForgetTime = 5.00f;
    this->bStealthMeterEnable = false;
    this->StealthMeterThreshold = 1000.00f;
    this->StealthMeterDecreaseSpeed = 250.00f;
    this->bStealthMeterAllowSharedTarget = false;
    this->bStealthMeterForceLKPWhenDamagedAndThreatened = false;
}


