#include "FortHeroLoadoutHeroPicker.h"

UFortHeroLoadoutHeroPicker::UFortHeroLoadoutHeroPicker() {
    this->ExternalFilterTabList = NULL;
    this->FilterTabButtonType = NULL;
}

void UFortHeroLoadoutHeroPicker::UpdateFilterTabList(FName PreviouslySelectedTab) {
}

void UFortHeroLoadoutHeroPicker::SetTargetLoadoutSlot(const UFortCampaignHeroLoadoutItem* LoadoutItem, const FName& SlotName) {
}


void UFortHeroLoadoutHeroPicker::HandleFilterTabSelected(FName TabId) {
}


FName UFortHeroLoadoutHeroPicker::GetCurrentlySelectedTab() {
    return NAME_None;
}

void UFortHeroLoadoutHeroPicker::AssociateFilterTabList(const UFortTabListWidgetBase* NewExternalFilterTabList) {
}


