#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VendettaPlayerHuntedStatus.h"
#include "VendettaPlayerHuntedStatusArray.generated.h"

USTRUCT(BlueprintType)
struct FVendettaPlayerHuntedStatusArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVendettaPlayerHuntedStatus> Entries;
    
    VENDETTARUNTIME_API FVendettaPlayerHuntedStatusArray();
};

