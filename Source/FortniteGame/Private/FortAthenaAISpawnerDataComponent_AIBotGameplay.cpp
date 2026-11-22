#include "FortAthenaAISpawnerDataComponent_AIBotGameplay.h"

UFortAthenaAISpawnerDataComponent_AIBotGameplay::UFortAthenaAISpawnerDataComponent_AIBotGameplay() {
    this->NameSettings = NULL;
    this->bRequiresUniqueNetId = false;
    this->PawnCullDistance = -1.00f;
    this->PawnCullDistanceAfterPlayerAggroMode = -1.00f;
    this->ReachLocationValidationMode = EReachLocationValidationMode::Storm;
    this->LeashInnerRadius = 2500.00f;
    this->LeashOuterRadius = 3000.00f;
    this->LeashReturnLocationMode = ELeashReturnLocationMode::Closest;
    this->bCanInvestigateWithMeleeWeapon = false;
    this->bApplyMutatorsHealthAndShieldModifiers = true;
    this->bSupportsTethering = false;
    this->bEnableRenderCustomDepth = true;
}


