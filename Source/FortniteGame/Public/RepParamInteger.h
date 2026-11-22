#pragma once
#include "CoreMinimal.h"
#include "RepParamBase.h"
#include "RepParamInteger.generated.h"

USTRUCT(BlueprintType)
struct FRepParamInteger : public FRepParamBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FORTNITEGAME_API FRepParamInteger();
};

