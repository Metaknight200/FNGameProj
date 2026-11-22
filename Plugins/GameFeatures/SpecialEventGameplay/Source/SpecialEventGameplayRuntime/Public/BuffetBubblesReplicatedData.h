#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuffetBubblesReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FBuffetBubblesReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeVelocity;
    
    SPECIALEVENTGAMEPLAYRUNTIME_API FBuffetBubblesReplicatedData();
};

