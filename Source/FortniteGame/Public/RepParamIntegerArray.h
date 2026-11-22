#pragma once
#include "CoreMinimal.h"
#include "RepParamBaseArray.h"
#include "RepParamInteger.h"
#include "RepParamIntegerArray.generated.h"

USTRUCT(BlueprintType)
struct FRepParamIntegerArray : public FRepParamBaseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRepParamInteger> RepParamArray;
    
    FORTNITEGAME_API FRepParamIntegerArray();
};

