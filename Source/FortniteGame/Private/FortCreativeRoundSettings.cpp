#include "FortCreativeRoundSettings.h"

AFortCreativeRoundSettings::AFortCreativeRoundSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundIndex = -1;
    this->KeepItemsBetweenRounds = 0;
    this->PercentageOfResourcesKeptBetweenRounds = 0.00f;
    this->ReloadAndRestockWeaponsEachRound = 0;
    this->bIsRelevantThisRound = false;
    this->Active = 1;
    this->bActiveDuringMinigame = true;
    this->WinningTeamOnMessageReceived = -1;
    this->LastTeamStandingWins = -1;
    this->DefaultRestockAmmoAmount = 0;
}

void AFortCreativeRoundSettings::SetResourceGivenToWinnersPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType, const int32 Amount) {
}

void AFortCreativeRoundSettings::SetResourceGivenPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType, const int32 Amount) {
}

bool AFortCreativeRoundSettings::IsActive() const {
    return false;
}

int32 AFortCreativeRoundSettings::GetRoundIndex() const {
    return RoundIndex;
}

int32 AFortCreativeRoundSettings::GetResourceGivenToWinnersPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType) const {
    return 0;
}

int32 AFortCreativeRoundSettings::GetResourceGivenPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType) const {
    return 0;
}

void AFortCreativeRoundSettings::EndRound(AFortPlayerController* InstigatorPC) {
}

void AFortCreativeRoundSettings::ClearResourcesGivenToWinnersPerRound() {
}

void AFortCreativeRoundSettings::ClearResourcesGivenPerRound() {
}


