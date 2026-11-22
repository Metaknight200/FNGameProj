#include "FortUrgentQuestItemDefinition.h"
#include "EFortQuestSubtype.h"
#include "EFortQuestType.h"

UFortUrgentQuestItemDefinition::UFortUrgentQuestItemDefinition() {
    this->QuestType = EFortQuestType::AthenaTransientQuest;
    this->QuestSubtype = EFortQuestSubtype::UrgentQuest;
    this->Objectives.AddDefaulted(1);
}

FUrgentQuestData UFortUrgentQuestItemDefinition::GetUrgentQuestData() const {
    return FUrgentQuestData{};
}


