#include "FortAthenaAIRuntimeParameters_AIBotConvert.h"

UFortAthenaAIRuntimeParameters_AIBotConvert::UFortAthenaAIRuntimeParameters_AIBotConvert() {
    this->bShouldLeashFollowConverter = false;
    this->bShouldScanAroundWhenWaiting = false;
    this->bShouldMoveTowardsConverter = false;
    this->bShouldTeleportTowardsConverter = false;
    this->bCanDanceWithConverter = false;
    this->SkillLevelOverride = 0.00f;
    this->InnerLeashRadius = 0.00f;
    this->OuterLeashRadius = 0.00f;
    this->LeashFollowActorUpdateRate = 0.00f;
    this->MoveTowardsConverterInnerDistanceSq = 0.00f;
    this->MoveTowardsConverterOuterDistanceSq = 0.00f;
    this->TeleportTowardsConverterDistanceSq = 0.00f;
    this->MinDistanceFromConverterWhenTeleported = 0.00f;
}


