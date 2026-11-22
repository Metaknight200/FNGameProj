#include "GameDataSTW.h"

UGameDataSTW::UGameDataSTW() {
    this->ScoreDisplayFactor = 0.01f;
    this->ScoreDivisor = 900000;
    this->XPMult = 1000;
    this->GroupScoreRates[0] = 1.00f;
    this->GroupScoreRates[1] = 1.00f;
    this->GroupScoreRates[2] = 1.00f;
    this->GroupScoreRates[3] = 1.00f;
    this->GroupScoreRates[4] = 1.00f;
    this->ScoreToXPLinearRate = 1.00f;
    this->LinearEnd = 1;
    this->XpPerAccountLevel = 0;
    this->CriticalMatch_XpBonusPercent = 0.20f;
    this->PersonalBoost_XpBonusPercent = 0.30f;
    this->GroupBoost_XpBonusPercent = 0.05f;
    this->GroupBoost_BuffMultiplier = 2.00f;
    this->Rest_XpBonusPercent = 1.00f;
    this->LowXpConningValue = 0.00f;
    this->VeryLowXpConningValue = 0.00f;
    this->NoXpConningValue = 0.00f;
    this->MaxCraftQueueSize = 20;
    this->SquadMemberStatBonusMultiplier = 0.10f;
    this->DailyMissionAlertQuota = 0;
    this->MinLevelToPromoteItem = 0;
    this->LevelsPerItemPromotion = 0;
    this->MaxPromotionsPerItem = 0;
    this->CachedScoreMultiplierDataTable = NULL;
    this->FORTAttributeToPowerMultiplier = 0.00f;
}

int32 UGameDataSTW::GetXpPerAccountLevel() {
    return 0;
}

float UGameDataSTW::GetTeamXpBoost() {
    return 0.0f;
}

TSoftObjectPtr<UFortTeamPerkItemDefinition> UGameDataSTW::GetRecruitmentRewardForHero(UFortHeroType* Hero) {
    return NULL;
}

float UGameDataSTW::GetPersonalXpBoost() {
    return 0.0f;
}


