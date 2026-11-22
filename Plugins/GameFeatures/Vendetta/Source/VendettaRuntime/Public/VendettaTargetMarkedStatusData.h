#pragma once
#include "CoreMinimal.h"
#include "VendettaTargetMarkedStatusData.generated.h"

USTRUCT(BlueprintType)
struct FVendettaTargetMarkedStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetMarked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsResultOfScan;
    
    VENDETTARUNTIME_API FVendettaTargetMarkedStatusData();
};

