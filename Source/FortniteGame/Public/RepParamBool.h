#pragma once
#include "CoreMinimal.h"
#include "RepParamBase.h"
#include "RepParamBool.generated.h"

USTRUCT(BlueprintType)
struct FRepParamBool : public FRepParamBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value: 1;
    
public:
    FORTNITEGAME_API FRepParamBool();
};

