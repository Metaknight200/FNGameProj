#include "FortUIDataConfigurationContext.h"

UFortUIDataConfigurationContext::UFortUIDataConfigurationContext() {
}

bool UFortUIDataConfigurationContext::UseSpecificPinataWeapon() const {
    return false;
}

bool UFortUIDataConfigurationContext::IsQuestVOEnabled() const {
    return false;
}

bool UFortUIDataConfigurationContext::IsLimitedToES2Features() const {
    return false;
}

bool UFortUIDataConfigurationContext::IsChatEnabled() const {
    return false;
}

TArray<EFortItemType> UFortUIDataConfigurationContext::GetItemTypesToUseVaultCamera() const {
    return TArray<EFortItemType>();
}

TSoftClassPtr<UFortMobileHUDLayoutToolV2> UFortUIDataConfigurationContext::GetHUDLayoutToolV2SoftClass() const {
    return NULL;
}

FPostProcessSettings UFortUIDataConfigurationContext::GetFrontEndFFSettings() const {
    return FPostProcessSettings{};
}

bool UFortUIDataConfigurationContext::AreSocialFeaturesEnabled() const {
    return false;
}

bool UFortUIDataConfigurationContext::ArePartyFeaturesEnabled() const {
    return false;
}


