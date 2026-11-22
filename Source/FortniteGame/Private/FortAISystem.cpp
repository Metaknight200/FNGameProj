#include "FortAISystem.h"

UFortAISystem::UFortAISystem() : Super(FObjectInitializer::Get()) {
    this->InfluenceMap = NULL;
    this->BotManager = NULL;
}

bool UFortAISystem::IsInCone2D(FVector ConeOrigin, FVector ConeDirection, float HalfAngle, FVector LocationToCheck) {
    return false;
}


