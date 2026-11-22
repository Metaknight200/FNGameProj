#include "AthenaPunchCard.h"

UAthenaPunchCard::UAthenaPunchCard() {
    this->PunchCardLayout = EPunchType::Horizontal;
    this->DefaultPunchCardNumForNoPunchCardOnMcp = 10;
    this->EntryWidgetClass = NULL;
    this->PunchCardLocation = EPunchCardLocation::NONE;
    this->GridPanel_Accolades = NULL;
    this->Timer_Countdown = NULL;
    this->Timer_FrontendCountdown = NULL;
}

void UAthenaPunchCard::UpdateTimers() {
}

void UAthenaPunchCard::UpdatePunchCardFromItem() {
}

void UAthenaPunchCard::UpdatePunchCard(UFortMcpProfileAthena* McpProfile) {
}


void UAthenaPunchCard::TryToShowNextMedal() {
}



void UAthenaPunchCard::OnXpEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaPunchCard::OnProfileUpdated() {
}


void UAthenaPunchCard::MedalEarned(const UFortAccoladeItemDefinition* Medal) {
}

void UAthenaPunchCard::InternalMedalPlacementFinished(int32 SlotIndex, float XpValueForSlot) {
}



