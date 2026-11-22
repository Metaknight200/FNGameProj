#include "FortMcpCollectableFish.h"

UFortMcpCollectableFish::UFortMcpCollectableFish() {
}

EFortCollectedState UFortMcpCollectableFish::AddToPlayerCollection(const AFortPlayerController* FPC, const FGameplayTag& Variant, const FFortMcpCollectedFishProperties& Props, const FGameplayTagContainer& ContextTags) {
    return EFortCollectedState::Unknown;
}


