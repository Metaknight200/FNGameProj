#include "FortAthenaAIBotEvaluator_SandTunnel.h"

UFortAthenaAIBotEvaluator_SandTunnel::UFortAthenaAIBotEvaluator_SandTunnel() {
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->LootInteractionExecutionStatusName = TEXT("AIEvaluator_Loot_InteractionExecutionStatus");
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->CacheMovementDigestedSkillSet = NULL;
}

void UFortAthenaAIBotEvaluator_SandTunnel::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

void UFortAthenaAIBotEvaluator_SandTunnel::Jump() {
}


