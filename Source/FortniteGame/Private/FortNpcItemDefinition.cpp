#include "FortNpcItemDefinition.h"
#include "EFortItemType.h"

UFortNpcItemDefinition::UFortNpcItemDefinition() {
    this->ItemType = EFortItemType::Npc;
    this->bNeverPersisted = true;
}

TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>> UFortNpcItemDefinition::GetChallengeBundles() {
    return TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>>();
}


