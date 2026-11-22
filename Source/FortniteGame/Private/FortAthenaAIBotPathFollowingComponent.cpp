#include "FortAthenaAIBotPathFollowingComponent.h"

UFortAthenaAIBotPathFollowingComponent::UFortAthenaAIBotPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BotController = NULL;
    this->HitBuilding = NULL;
    this->CachedUnstuckSkillSet = NULL;
    this->CachedMovementSkillSet = NULL;
}


