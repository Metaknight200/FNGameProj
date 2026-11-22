#pragma once
#include "CoreMinimal.h"
#include "FortSubscriptionProgressable.h"
#include "FortSubscriptionInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortSubscriptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortSubscriptionProgressable> Progressables;
    
    FORTNITEGAME_API FFortSubscriptionInfo();
};

