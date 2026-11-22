#pragma once
#include "CoreMinimal.h"
#include "ECraftingObjectState.h"
#include "CraftingObjectRepStateData.generated.h"

USTRUCT(BlueprintType)
struct FCraftingObjectRepStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECraftingObjectState CraftingObjectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateChangeServerTime;
    
    CRAFTINGRUNTIME_API FCraftingObjectRepStateData();
};

