#include "FortCreativeDiscoveryContentPanel.h"

FFortCreativeDiscoveryContentPanel::FFortCreativeDiscoveryContentPanel() {
    this->PanelType = EFortCreativeDiscoveryPanelType::CuratedList;
    this->PageSize = 0;
    this->NumPages = 0;
    this->EntrySkippingMethod = EFortCreativeDiscoverySkippedEntries::None;
    this->SkippedEntriesCount = 0;
    this->SkippedEntriesPercent = 0.00f;
    this->bLowestToHighest = false;
}

