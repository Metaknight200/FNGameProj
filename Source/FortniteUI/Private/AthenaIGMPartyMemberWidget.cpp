#include "AthenaIGMPartyMemberWidget.h"

UAthenaIGMPartyMemberWidget::UAthenaIGMPartyMemberWidget() {
    this->bIsLocalPlayerSlot = false;
    this->bIsInGameSlot = false;
    this->AvatarIconWidget = NULL;
    this->Text_SocialName = NULL;
    this->VoiceIcon_Status = NULL;
    this->CachedPartyMember = NULL;
}






bool UAthenaIGMPartyMemberWidget::IsPlayingFortnite() const {
    return false;
}

bool UAthenaIGMPartyMemberWidget::IsEmptySlot() const {
    return false;
}

bool UAthenaIGMPartyMemberWidget::GetIsLocalPlayerSlot() const {
    return bIsLocalPlayerSlot;
}

bool UAthenaIGMPartyMemberWidget::GetIsInGameSlot() const {
    return bIsInGameSlot;
}


