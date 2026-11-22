#include "FortCreativeIslandLinkScreen.h"

UFortCreativeIslandLinkScreen::UFortCreativeIslandLinkScreen() {
    this->NumDebugIslandLinks = 20;
    this->EditableText_IslandLink = NULL;
    this->ListView_IslandLinks = NULL;
    this->ScrollBox_Details = NULL;
    this->LastLinkQueried = NULL;
    this->UserEnteredIslandLink = NULL;
    this->Button_Select = NULL;
    this->Button_CloseMobile = NULL;
    this->Button_Cancel = NULL;
    this->Button_Refresh = NULL;
    this->Button_Remove = NULL;
    this->Switcher_Tabs = NULL;
    this->TargetPortal = NULL;
    this->bCodeLookupRequestInFlight = false;
    this->bFriendsGetRequestInFlight = false;
    this->bFavoritesOnlyMode = false;
}

void UFortCreativeIslandLinkScreen::SetTargetPortal(AFortAthenaCreativePortal* Portal) {
}

void UFortCreativeIslandLinkScreen::SetFavoritesOnlyMode(bool bFavoritesOnly) {
}

void UFortCreativeIslandLinkScreen::RemoveIslandFromHistory(const FString& LinkCode) {
}

void UFortCreativeIslandLinkScreen::RemoveIslandFromFavorites(UFortCreativeIslandLink* LinkEntry) {
}



bool UFortCreativeIslandLinkScreen::IsPartyEligible(const UFortCreativeIslandLink* IslandLink) const {
    return false;
}

void UFortCreativeIslandLinkScreen::HandleIslandSelectionChanged(UObject* Item) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkChanged(const FText& Text) {
}

FText UFortCreativeIslandLinkScreen::GetMatchmakingTypeDescription(const UFortCreativeIslandLink* IslandLink) const {
    return FText::GetEmpty();
}

void UFortCreativeIslandLinkScreen::AddIslandToFavorites(UFortCreativeIslandLink* LinkEntry) {
}


