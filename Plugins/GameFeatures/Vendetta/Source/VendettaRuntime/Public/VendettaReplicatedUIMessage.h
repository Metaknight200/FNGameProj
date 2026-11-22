#pragma once
#include "CoreMinimal.h"
#include "VendettaReplicatedUIMessage.generated.h"

USTRUCT(BlueprintType)
struct FVendettaReplicatedUIMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextToDisplay;
    
    VENDETTARUNTIME_API FVendettaReplicatedUIMessage();
};

