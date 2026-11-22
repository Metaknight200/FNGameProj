#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSubscriptionProgressable.generated.h"

USTRUCT(BlueprintType)
struct FFortSubscriptionProgressable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime AcquiredDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NextStageRewardDate;
    
    FORTNITEGAME_API FFortSubscriptionProgressable();
};

