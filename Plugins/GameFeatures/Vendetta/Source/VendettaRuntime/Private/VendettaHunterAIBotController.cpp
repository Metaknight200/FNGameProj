#include "VendettaHunterAIBotController.h"

AVendettaHunterAIBotController::AVendettaHunterAIBotController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateBountyTargetInterval = 5.00f;
    this->BountyTargetForgetTimePadding = 2.00f;
}


