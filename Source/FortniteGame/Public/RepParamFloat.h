#pragma once
#include "CoreMinimal.h"
#include "RepParamBase.h"
#include "RepParamFloat.generated.h"

USTRUCT(BlueprintType)
struct FRepParamFloat : public FRepParamBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FORTNITEGAME_API FRepParamFloat();
};

