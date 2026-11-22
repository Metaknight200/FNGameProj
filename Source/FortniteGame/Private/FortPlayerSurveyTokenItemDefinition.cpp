#include "FortPlayerSurveyTokenItemDefinition.h"
#include "EFortItemType.h"

UFortPlayerSurveyTokenItemDefinition::UFortPlayerSurveyTokenItemDefinition() {
    this->ItemType = EFortItemType::PlayerSurveyToken;
    this->GrantToProfileType = TEXT("common_core");
}


