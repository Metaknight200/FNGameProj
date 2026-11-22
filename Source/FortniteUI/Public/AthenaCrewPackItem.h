#pragma once
#include "CoreMinimal.h"
#include "AthenaCrewPackItem.generated.h"

USTRUCT(BlueprintType)
struct FAthenaCrewPackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEUI_API FAthenaCrewPackItem();
};

