#pragma once
#include "CoreMinimal.h"
#include "RepParamBaseArray.h"
#include "RepParamBool.h"
#include "RepParamBoolArray.generated.h"

USTRUCT(BlueprintType)
struct FRepParamBoolArray : public FRepParamBaseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRepParamBool> RepParamArray;
    
    FORTNITEGAME_API FRepParamBoolArray();
};

