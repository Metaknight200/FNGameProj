#include "FortFeatItemDefinition.h"
#include "EFortQuestType.h"

UFortFeatItemDefinition::UFortFeatItemDefinition() {
    this->QuestType = EFortQuestType::AthenaChallengeBundleQuest;
    this->bAthenaGrantRarityToken = false;
    this->Objectives.AddDefaulted(1);
}


