#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VendettaBountyPuckTargetData.h"
#include "VendettaBountyPuckTargetingDataArray.generated.h"

USTRUCT(BlueprintType)
struct FVendettaBountyPuckTargetingDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVendettaBountyPuckTargetData> Entries;
    
    VENDETTARUNTIME_API FVendettaBountyPuckTargetingDataArray();
};

