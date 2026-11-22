#include "AthenaDailyQuestDefinition.h"
#include "EFortQuestType.h"

UAthenaDailyQuestDefinition::UAthenaDailyQuestDefinition() {
    this->GrantToProfileType = TEXT("athena");
    this->QuestType = EFortQuestType::AthenaDailyQuest;
    this->Objectives.AddDefaulted(1);
    this->bForceExpiryExport = true;
}


