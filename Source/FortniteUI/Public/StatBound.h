#pragma once
#include "CoreMinimal.h"
#include "StatBound.generated.h"

USTRUCT(BlueprintType)
struct FStatBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    FORTNITEUI_API FStatBound();
};

