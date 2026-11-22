#include "FortGameSessionDedicated.h"

AFortGameSessionDedicated::AFortGameSessionDedicated(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnforceCrossplayRestrictions = true;
    this->bAllowPS4InMixedConsole = true;
    this->HotfixCheckTimer = 300.00f;
    this->HotfixCheckVariance = 120.00f;
    this->DataAssetDirectoryUpdateCheckTimer = 60.00f;
    this->DataAssetDirectoryUpdateCheckVariance = 60.00f;
    this->ReservationAbandonmentTime = 600.00f;
    this->ConsoleSessionRetryWaitSeconds = 30.00f;
    this->ServerManifestOutputFormat = EServerManifestOutputFormat::HTTP;
    this->ServerManifestDestination = TEXT("127.0.0.1:7070");
    this->IdleResetShortTimer = 60.00f;
}


