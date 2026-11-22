#pragma once
#include "CoreMinimal.h"
#include "CatalogItemPrice.h"
#include "ItemQuantity.h"
#include "FortGiftingRecipientState.generated.h"

USTRUCT(BlueprintType)
struct FFortGiftingRecipientState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatalogItemPrice Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemQuantity> Items;
    
    GIFTINGUI_API FFortGiftingRecipientState();
};

