#include "FortTabListWidgetBase.h"
#include "Templates/SubclassOf.h"

UFortTabListWidgetBase::UFortTabListWidgetBase() {
    this->bHideSingleTab = false;
    this->HideSingleTabVisibility = ESlateVisibility::Collapsed;
}

void UFortTabListWidgetBase::SetTabHiddenState(FName TabNameID, bool bHidden) {
}

bool UFortTabListWidgetBase::RegisterFortTab(FName TabNameID, TSubclassOf<UCommonButtonBase> TabButtonType, const FFortTabButtonLabelInfo& LabelInfo, UWidget* ContentWidget) {
    return false;
}

void UFortTabListWidgetBase::RegisterAllPreregisteredTabInfos() {
}

bool UFortTabListWidgetBase::IsTabVisible(FName TabId) {
    return false;
}

bool UFortTabListWidgetBase::IsLastTabActive() const {
    return false;
}

bool UFortTabListWidgetBase::IsFirstTabActive() const {
    return false;
}

int32 UFortTabListWidgetBase::GetVisibleTabCount() {
    return 0;
}

bool UFortTabListWidgetBase::GetPreregisteredTabInfo(const FName TabNameID, FFortTabListRegistrationInfo& OutTabInfo) {
    return false;
}


