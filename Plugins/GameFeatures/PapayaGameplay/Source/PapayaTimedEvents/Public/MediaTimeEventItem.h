#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MediaTimeEventItem.generated.h"

USTRUCT(BlueprintType)
struct FMediaTimeEventItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameter;
    
    PAPAYATIMEDEVENTS_API FMediaTimeEventItem();
};

