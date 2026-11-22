#include "FortNavigationActor_EventGraphItem.h"

AFortNavigationActor_EventGraphItem::AFortNavigationActor_EventGraphItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RewardGraphToReprisent = NULL;
    this->bInitializedCalled = false;
    this->CanNavigateToWhenClaimed = true;
}


FGameplayTag AFortNavigationActor_EventGraphItem::GetNodeTag() {
    return FGameplayTag{};
}

void AFortNavigationActor_EventGraphItem::CosmeticVariantAssets_PostLoad() {
}


