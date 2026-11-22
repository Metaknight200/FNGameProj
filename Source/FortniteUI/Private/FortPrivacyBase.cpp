#include "FortPrivacyBase.h"

UFortPrivacyBase::UFortPrivacyBase() {
    this->AllowFriendsOfFriendsButton = NULL;
    this->AllowFriendsOfFriendsContainer = NULL;
    this->ButtonGroup = NULL;
}

void UFortPrivacyBase::HandlePrivacyButtonSelected(UCommonButtonLegacy* SelectedPrivacyButton, int32 ButtonIndex) {
}

void UFortPrivacyBase::ApplyPrivacySetting() {
}

void UFortPrivacyBase::AddPrivacyButton(UCommonButtonLegacy* PrivacyButton, EPartyType PartyType) {
}


