#include "AthenaChallengeBundleQuestDefinition.h"
#include "EFortQuestType.h"

UAthenaChallengeBundleQuestDefinition::UAthenaChallengeBundleQuestDefinition() {
    this->GrantToProfileType = TEXT("athena");
    this->QuestType = EFortQuestType::AthenaChallengeBundleQuest;
    this->bIncludedInCategories = false;
    this->Objectives.AddDefaulted(1);
}


