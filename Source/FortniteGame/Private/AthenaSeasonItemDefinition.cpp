#include "AthenaSeasonItemDefinition.h"
#include "EFortItemType.h"

UAthenaSeasonItemDefinition::UAthenaSeasonItemDefinition() {
    this->ItemType = EFortItemType::AthenaSeason;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->bXpOnlySeason = false;
    this->bCapFreeBattlePassLevels = false;
    this->bUseSeasonCurveForBattlePassRewards = false;
    this->SeasonXpOnlyExtendedCurve = NULL;
    this->DailyPunchCard = NULL;
    this->RepeatableDailiesCard = NULL;
    this->RestedXpDailyGrant = 0;
    this->RestedXpMaxAccrue = 0;
    this->RestedXpMultiplier = 2.00f;
    this->SeasonStartCalendarOffsetDays = 0;
    this->SeasonNumber = -1;
    this->NumSeasonLevels = 10;
    this->SeasonXpCurve = NULL;
    this->BattlePassLevelOffer_MaxLevel = 0;
    this->BattlePassLevelBundleOffer_MaxLevel = 0;
    this->BattlePassLevelBundleOffer_NumLevels = 0;
    this->SeasonalGlyphChallengeBundle = NULL;
    this->SeasonalGlyphRewards = NULL;
    this->ChallengeSchedulePaid = NULL;
    this->bRemoveAllDailyQuestsAtSeasonEnd = false;
    this->NPCConversationQuests = NULL;
    this->BookXpCurve = NULL;
    this->NumBookLevels = 0;
    this->NumAdditionalBookLevels = 0;
}


