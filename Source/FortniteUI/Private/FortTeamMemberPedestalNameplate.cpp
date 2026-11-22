#include "FortTeamMemberPedestalNameplate.h"

UFortTeamMemberPedestalNameplate::UFortTeamMemberPedestalNameplate() {
    this->Text_ReadyStatus = NULL;
    this->InputIndicator_ActiveInputType = NULL;
    this->PowerRatingWidgetSwitcher = NULL;
    this->PowerRating_CampaignPower = NULL;
    this->Moonbeam_PowerRating_CampaignPower = NULL;
    this->Phoenix_PowerRating_CampaignPower = NULL;
    this->SizeBox_HotfixControlled = NULL;
    this->Text_PlayerLevel = NULL;
    this->Image_HeroIcon = NULL;
    this->Button_AddFriend = NULL;
    this->bTeamMemberPedestalNameplateAddFriendButtonEnabled = true;
}






void UFortTeamMemberPedestalNameplate::HandleShouldShowPhoenixDisplayChanged(bool bShouldShowPhoenixDisplay) {
}


