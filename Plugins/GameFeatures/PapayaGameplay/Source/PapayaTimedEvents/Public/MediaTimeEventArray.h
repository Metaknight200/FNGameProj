#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MediaTimeEventItem.h"
#include "MediaTimeEventArray.generated.h"

USTRUCT(BlueprintType)
struct FMediaTimeEventArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMediaTimeEventItem> Items;
    
    PAPAYATIMEDEVENTS_API FMediaTimeEventArray();
};

