#include "FortHeroLoadoutPedestal.h"

AFortHeroLoadoutPedestal::AFortHeroLoadoutPedestal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSlotFocusedInUI = false;
}


void AFortHeroLoadoutPedestal::HandleMcpProfilesInitialized() {
}

void AFortHeroLoadoutPedestal::HandleDifferentLoadoutViewed(const UFortCampaignHeroLoadoutItem* PreviousLoadout, const UFortCampaignHeroLoadoutItem* CurrentLoadout) {
}

void AFortHeroLoadoutPedestal::HandleDifferentHeroLoadoutSlotFocused(const FName FocusedSlotName) {
}


