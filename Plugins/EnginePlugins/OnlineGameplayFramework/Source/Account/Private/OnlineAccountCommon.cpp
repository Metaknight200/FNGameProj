#include "OnlineAccountCommon.h"

UOnlineAccountCommon::UOnlineAccountCommon() {
    this->bRequireLightswitchAtStartup = true;
    this->EulaKey = TEXT("fn");
    this->bEnableWaitingRoom = true;
    this->WebCreateEpicAccountUrl.AddDefaulted(4);
    this->bAllowLocalLogout = false;
    this->bAllowLocalLogoutKairos = true;
    this->RedeemAccessUrl = TEXT("`baseurl/api/storeaccess/v1/redeem_access/`accountid");
    this->RequestFreeAccessUrl = TEXT("`baseurl/api/storeaccess/v1/request_access/`accountid");
    this->RealGameAccessUrl = TEXT("`baseurl/api/accesscontrol/status");
    this->SkipRedeemOfflinePurchasesChance = 0.00f;
    this->bUseFreeAccessInsteadOfGameAccess = false;
    this->bShouldGrantFreeAccess = false;
    this->bAllowHomeSharingAccess = false;
    this->bRequireUGCPrivilege = true;
    this->AccessGrantDelaySeconds = 2.00f;
    this->WaitingRoomState = NULL;
    this->bAutoCreateHeadlessAccount = false;
}


