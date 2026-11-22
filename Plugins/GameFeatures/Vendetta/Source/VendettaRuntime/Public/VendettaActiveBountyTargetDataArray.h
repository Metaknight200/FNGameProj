#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VendettaActiveBountyTargetData.h"
#include "VendettaActiveBountyTargetDataArray.generated.h"

USTRUCT(BlueprintType)
struct FVendettaActiveBountyTargetDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVendettaActiveBountyTargetData> Entries;
    
    VENDETTARUNTIME_API FVendettaActiveBountyTargetDataArray();
};

