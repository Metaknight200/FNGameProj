#include "FortCampaignHeroLoadoutItemDefinition.h"
#include "EFortItemType.h"

UFortCampaignHeroLoadoutItemDefinition::UFortCampaignHeroLoadoutItemDefinition() {
    this->ItemType = EFortItemType::CampaignHeroLoadout;
    this->bCanBeFavorite = false;
    this->bCanBeMarkedSeen = false;
    this->GadgetSlotsAllowed = 2;
}

TArray<FFortCrewSlotInformation> UFortCampaignHeroLoadoutItemDefinition::GetSlots() const {
    return TArray<FFortCrewSlotInformation>();
}

int32 UFortCampaignHeroLoadoutItemDefinition::GetSlotIndexByName(const FName& SlotName) const {
    return 0;
}

FFortCrewSlotInformation UFortCampaignHeroLoadoutItemDefinition::GetCommanderSlot() const {
    return FFortCrewSlotInformation{};
}


