#include "MoleVotingPresentationManager.h"

AMoleVotingPresentationManager::AMoleVotingPresentationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfTallyWidgetSizeMultiplier = 0.50f;
    this->VoteTallyWidgetComponentClass = NULL;
    this->SkippedVotesSpawnPoint = NULL;
}


