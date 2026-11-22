#include "FortSocialParty.h"
#include "FortPartyBeaconClient.h"
#include "FortSpectatorBeaconClient.h"

UFortSocialParty::UFortSocialParty() {
    this->ReservationBeaconClientClass = AFortPartyBeaconClient::StaticClass();
    this->SpectatorBeaconClientClass = AFortSpectatorBeaconClient::StaticClass();
    this->bSendSocialFriendsActiveAnalytics = true;
    this->bPromoteMemberWhenBackgrounding = false;
    this->bEnableBootToGroup = true;
}


