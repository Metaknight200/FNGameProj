#pragma once
#include "CoreMinimal.h"
#include "RepParamBaseArray.h"
#include "RepParamFloat.h"
#include "RepParamFloatArray.generated.h"

USTRUCT(BlueprintType)
struct FRepParamFloatArray : public FRepParamBaseArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRepParamFloat> RepParamArray;
    
    FORTNITEGAME_API FRepParamFloatArray();
};

