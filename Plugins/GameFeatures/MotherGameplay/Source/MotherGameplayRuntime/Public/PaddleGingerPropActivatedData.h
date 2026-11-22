#pragma once
#include "CoreMinimal.h"
#include "PaddleGingerPropActivatedData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FPaddleGingerPropActivatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* Sender;
    
    MOTHERGAMEPLAYRUNTIME_API FPaddleGingerPropActivatedData();
};

