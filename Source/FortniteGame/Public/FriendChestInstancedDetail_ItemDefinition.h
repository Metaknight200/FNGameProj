#pragma once
#include "CoreMinimal.h"
#include "FriendChestInstancedDetail.h"
#include "FriendChestInstancedDetail_ItemDefinition.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFriendChestInstancedDetail_ItemDefinition : public UFriendChestInstancedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> InstancedItem;
    
    UFriendChestInstancedDetail_ItemDefinition();

};

