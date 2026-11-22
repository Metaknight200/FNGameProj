#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "VendettaEQSQueryData.generated.h"

USTRUCT(BlueprintType)
struct FVendettaEQSQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ParameterValue;
    
    VENDETTARUNTIME_API FVendettaEQSQueryData();
};

