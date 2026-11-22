#include "FortHomebaseBannerIconItemDefinition.h"
#include "EFortItemType.h"

UFortHomebaseBannerIconItemDefinition::UFortHomebaseBannerIconItemDefinition() {
    this->ItemType = EFortItemType::HomebaseBannerIcon;
    this->GrantToProfileType = TEXT("common_core");
    this->bFullUsageRights = true;
}


