#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFortItemType.h"
#include "FortCreativeItemDropParams.h"
#include "FortCreativeInventoryManipComponent.generated.h"

class AController;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeInventoryManipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortCreativeInventoryManipComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropSpecificItem(AController* Controller, const UFortWorldItemDefinition* ItemDefinition, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropItemsByItemType(AController* Controller, const TArray<FName>& MatchCreativeTags, const TArray<FName>& IgnoreCreativeTags, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount, EFortItemType ItemType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropAllItems(AController* Controller, const FFortCreativeItemDropParams& DropParams, int32& ItemRemovedCount, int32& SpawnedPickupCount);
    
};

