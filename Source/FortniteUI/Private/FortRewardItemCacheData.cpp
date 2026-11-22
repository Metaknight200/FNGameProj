#include "FortRewardItemCacheData.h"
#include "EFrontEndRewardType.h"

UFortRewardItemCacheData::UFortRewardItemCacheData() {
    this->RewardType = EFrontEndRewardType::ItemCache;
    this->ItemCache = NULL;
}


