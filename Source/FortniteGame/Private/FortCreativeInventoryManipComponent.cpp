#include "FortCreativeInventoryManipComponent.h"

UFortCreativeInventoryManipComponent::UFortCreativeInventoryManipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortCreativeInventoryManipComponent::DropSpecificItem(AController* Controller, const UFortWorldItemDefinition* ItemDefinition, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount) {
}

void UFortCreativeInventoryManipComponent::DropItemsByItemType(AController* Controller, const TArray<FName>& MatchCreativeTags, const TArray<FName>& IgnoreCreativeTags, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount, EFortItemType ItemType) {
}

void UFortCreativeInventoryManipComponent::DropAllItems(AController* Controller, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount) {
}


