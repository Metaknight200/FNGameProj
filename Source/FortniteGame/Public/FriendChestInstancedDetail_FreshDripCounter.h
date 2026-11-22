#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FriendChestInstancedDetail.h"
#include "FriendChestInstancedDetail_FreshDripCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFriendChestInstancedDetail_FreshDripCounter : public UFriendChestInstancedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FreshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DripTag;
    
    UFriendChestInstancedDetail_FreshDripCounter();

};

